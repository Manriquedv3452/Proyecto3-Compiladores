//PROCEDURES FOR SYMBOL TABLE
//=============================================================================================================
//DATA TYPE ENUM IS THE SAME OF BISON INCLUDING IDENTIFIER

//SYMBOL TABLE
typedef struct symbolTable
{
	struct symbolTable *next;
	char varName[MAX_VALUE_SIZE];		//MAX_VALUE_SIZE DEFINE IN SEMANTICSTACK.H
	int line, column, cursorPosi;
	int stackPos;
	int varType;

} SymbolTable;

typedef struct symbolStack
{
	struct symbolStack *next;
	struct symbolStack *previous;
	int symbolSize;
	SymbolTable *symbolHead;
	SymbolTable *symbolTail;
	
} TableStack;

TableStack *headTableStack = NULL;
TableStack *tailTableStack = NULL;
TableStack *currentTableStack = NULL;

SymbolTable *headSymbol;
SymbolTable *tailSymbol;


//METHODS FOR STACK OF SYMBOL TABLES
void initializeTable(void);
void pushTable(void);
void popTable(void);
void appendSymbol(char varName[], int line, int column, int cursorPosi, int varType, int stackPos);
void popSymbol(void);
void clearSymbols(void);
SymbolTable* look_up_TS(char* id);
int look_up_top_pos(char* id);
void printSymbols(void);
SymbolTable* getSymbolInPos(int pos);

void initializeTable(void)
{
	headTableStack = (TableStack*) malloc(sizeof(TableStack));
	tailTableStack = (TableStack*) malloc(sizeof(TableStack));
	
	headTableStack -> next = tailTableStack;
	tailTableStack -> previous = headTableStack;

	pushTable();

}

void pushTable(void)
{	
	TableStack *temp;
	temp = headTableStack -> next;

	headTableStack -> next = (TableStack*) malloc(sizeof(TableStack));
	headSymbol = tailSymbol = headTableStack -> next -> symbolHead = headTableStack -> next -> symbolTail = (SymbolTable*) malloc(sizeof(SymbolTable));
	headTableStack -> next -> symbolSize = 0;
	
	headTableStack -> next -> next = temp;
	headTableStack -> next -> next -> previous = headTableStack -> next;
	headTableStack -> next -> previous = headTableStack;

}

void popTable(void)
{
	
	if (headTableStack -> next != tailTableStack)
	{
		
		//printSymbols();
		clearSymbols();
			


		TableStack *temp;
	
		temp = headTableStack -> next;
		headTableStack -> next -> next -> previous = headTableStack;
		headTableStack -> next = headTableStack -> next -> next;

		free(temp);

		headSymbol = headTableStack -> next -> symbolHead;
		tailSymbol =  headTableStack -> next -> symbolTail;
		//printSymbols();
	}
	
}

void appendSymbol(char varName[], int line, int column, int cursorPosi, int varType, int stackPos)
{
		
	SymbolTable* temp;
	
	temp = headSymbol -> next;
	
	tailSymbol = tailSymbol -> next = (SymbolTable*) malloc(sizeof(SymbolTable));	
	
	strcpy(tailSymbol -> varName, varName);
	tailSymbol -> line = line;
	tailSymbol -> column = column;
	tailSymbol -> varType = varType;
	tailSymbol -> stackPos = stackPos;
	tailSymbol -> cursorPosi = cursorPosi;
	
	headTableStack -> next -> symbolSize++;
	headTableStack -> next -> symbolHead = headSymbol;
	headTableStack -> next -> symbolTail = tailSymbol;
	
}



void popSymbol(void)
{
	SymbolTable* currentSymbol = headSymbol;
	SymbolTable* temp = headSymbol -> next;

	if (currentSymbol -> varType != FUNCTION)
		stackPos -= 4;

	if (currentSymbol -> next == tailSymbol){
	    tailSymbol = currentSymbol;
	}
	currentSymbol -> next = currentSymbol -> next -> next;
	free(temp);
	headTableStack -> next -> symbolSize--;
	
}

void clearSymbols(void)
{
	while (headTableStack -> next -> symbolSize != 0)
	{
		popSymbol();
	}
	free(headSymbol);
}


SymbolTable* look_up_TS(char* id)
{
	SymbolTable* currentSymbol;
	int symbolPos = 0;

	for (currentTableStack = headTableStack -> next; currentTableStack != tailTableStack; currentTableStack = currentTableStack -> next)
	{
		currentSymbol = currentTableStack -> symbolHead -> next;
		while (symbolPos < currentTableStack -> symbolSize)
		{
			if (strcmp(currentSymbol -> varName, id) == 0 && currentSymbol -> varType != ERROR)
			{
				return currentSymbol;
			}
			currentSymbol = currentSymbol -> next;
			symbolPos++;
		}	
		symbolPos = 0;
	}
	SymbolTable* ret;
	ret -> stackPos = -1;
	return ret;
}

int look_up_error_TS(char* id)
{
	SymbolTable* currentSymbol;
	int symbolPos = 0;
	for (currentTableStack = headTableStack -> next; currentTableStack != tailTableStack; currentTableStack = currentTableStack -> next)
	{
		currentSymbol = currentTableStack -> symbolHead -> next;
		while (symbolPos < currentTableStack -> symbolSize)
		{
			if (strcmp(currentSymbol -> varName, id) == 0 && currentSymbol -> varType != ERROR)
			{
				return 1;
			}
			currentSymbol = currentSymbol -> next;
			symbolPos++;
		}	
		symbolPos = 0;
	}
	return 0;
}


int look_up_top_pos(char* id)
{
	int pos = 0;
	if (headTableStack -> next != tailTableStack)
	{
		SymbolTable* currentSymbol =  headTableStack -> next -> symbolHead;
		while (currentSymbol -> next != NULL)
		{
			if (strcmp(currentSymbol -> next -> varName, id) == 0 && currentSymbol -> next -> varType != ERROR)
			{
				return pos;
			}
			currentSymbol = currentSymbol -> next;
			pos++;
		}
		return -1;
	}
}


SymbolTable* getSymbolInPos(int pos)
{
	if (headTableStack -> next != tailTableStack)
	{
		
		SymbolTable* currentSymbol =  headTableStack -> next -> symbolHead;
		int currentPos = 0;
		while (currentSymbol -> next != NULL && currentPos < pos)
		{
			currentSymbol = currentSymbol -> next;
			currentPos++;
		}
		return currentSymbol -> next;
	}
}
void printSymbols(void)
{
	
	SymbolTable* currentSymbol = headTableStack -> next -> symbolHead -> next; 
	while (currentSymbol != NULL)
	{
		printf("%s\n", currentSymbol -> varName);
		currentSymbol = currentSymbol -> next;
	}

	printf("size: %d\n\n", headTableStack -> next -> symbolSize);	
}

