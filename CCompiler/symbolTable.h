//PROCEDURES FOR SYMBOL TABLE
//=============================================================================================================
//DATA TYPE ENUM IS THE SAME OF BISON INCLUDING IDENTIFIER

//SYMBOL TABLE
typedef struct symbolTable
{
	struct symbolTable *next;
	char* varName;
	int line, column;
	int stackPos;
	int varType;

} SymbolTable;

typedef struct symbolStack
{
	struct symbolStack *next;
	struct symbolStack *previous;
	int symbolSize;
	SymbolTable *symbolHead;
	
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
void appendSymbol(char* varName, int line, int column, int varType, int stackPos);
void popSymbol(void);
void clearSymbols(void);
int look_up_TS(char* id);
void printSymbols(void);

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
	headTableStack -> next -> symbolHead = headSymbol = tailSymbol = (SymbolTable*) malloc(sizeof(SymbolTable));
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
		//printSymbols();
	}
}

void appendSymbol(char* varName, int line, int column, int varType, int stackPos)
{
		
	SymbolTable* temp;
	
	temp = headSymbol -> next;
	
	tailSymbol = tailSymbol -> next = (SymbolTable*) malloc(sizeof(SymbolTable));	
	
	tailSymbol -> varName = varName;
	tailSymbol -> line = line;
	tailSymbol -> column = column;
	tailSymbol -> varType = varType;
	tailSymbol -> stackPos = stackPos;
	
	headTableStack -> next -> symbolSize++;
	//headTableStack -> next -> symbolHead = headSymbolTable;
	
}



void popSymbol(void)
{
	SymbolTable* currentSymbol = headSymbol;
	SymbolTable* temp = headSymbol -> next;
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


int look_up_TS(char* id)
{
	SymbolTable* currentSymbol;
	for (currentTableStack = headTableStack -> next; currentTableStack != tailTableStack; currentTableStack = currentTableStack -> next)
	{
		for (currentSymbol = currentTableStack -> symbolHead -> next; currentSymbol != NULL; currentSymbol = currentSymbol -> next)
		{
			if (strcmp(currentSymbol -> varName, id) == 0)
			{
				return 1;
			}
		}	
	}
	return 0;
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

