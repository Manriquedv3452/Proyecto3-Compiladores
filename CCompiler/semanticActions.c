//functions
#include "asm.h"
#define CNRM  "\x1B[0m"
#define CRED  "\x1B[31;1m"
#define CGRN  "\x1B[32;1m"
#define CYEL  "\x1B[33m"
#define CBLU  "\x1B[34m"
#define CMAG  "\x1B[35m"
#define CCYN  "\x1B[36m"
#define CWHT  "\x1B[0m"
#define CWHTN  "\x1B[1m"

char resultBinary[MAX_VALUE_SIZE];
int tempNumber = 0;

FILE *assembly;

void save_type(void)
{
	SemanticRecord *RS;
	
	RS = createSemanticRecord(TYPE);
	strcpy(RS -> currentToken, previousToken);
	RS -> type = previousTokenCode;

	
	pushRecord(RS);
	//printf("%s\n", RS -> currentToken);
	//printList();
}

void save_id(void)
{
	char* token = strdup(yytext);
	int pos = search(token);
	
	if (!inContext)
	{
		if (pos == -1)
		{
	
			SemanticRecord *RS;
	
			RS = createSemanticRecord(ID);
			strcpy(RS -> currentToken, token);
			RS -> line = yylineno;
			RS -> column = previousColumn;
			RS -> cursorPosi = cursorPos;
			RS -> stackPos = stackPos;
			
			stackPos += 4;

			pushRecord(RS);
			//printList();
		}
	} 
	else if (pos == -1)
	{	
		
		pos = look_up_top_pos(token);
		if (pos == -1)
		{
			SemanticRecord *RS;
	
			RS = createSemanticRecord(ID);
			strcpy(RS -> currentToken, token);
			RS -> line = yylineno;
			RS -> column = previousColumn;	
			RS -> cursorPosi = cursorPos;
			RS -> stackPos = stackPos;
			
			stackPos += 4;
	
			pushRecord(RS);
			//printList();
		}
		else
		{
			SymbolTable *symbol = getSymbolInPos(pos);
			char error[100] = "";
			char note[100] = "";
			sprintf(error, "semantic error, redeclaration of %s'%s'%s with no linkage", CWHTN, token, CWHT);
			yyerror(error);
			sprintf(note, "note, previous declaration of %s‘%s’%s was here", CWHTN, symbol -> varName, CWHT);
			yynote(note, symbol -> line, symbol -> column, TRUE, symbol -> cursorPosi);
		}
	}
	else 
	{
		SemanticRecord* RS = getSemanticRecordInPos(pos);
		char error[100] = "";
		char note[100] = "";
		sprintf(error, "semantic error, redeclaration of %s'%s'%s with no linkage", CWHTN, token, CWHT);
		yyerror(error);
		sprintf(note, "note, previous declaration of %s‘%s’%s was here", CWHTN, RS -> currentToken, CWHT);
		yynote(note, RS -> line, RS -> column, TRUE, RS -> cursorPosi);
	}
}


void declaration_end(void)
{
	//printList();
	char* tokenValue;
	char* tokenName;

	SemanticRecord *dataType;
	dataType = retrieveRecord(TYPE);

	SemanticRecord *RS;
	RS = getTopRecord();
	
	while (RS -> kind != TYPE && RS != tailRecord)
	{
		if (RS -> kind == ERROR)
		{
			appendSymbol(RS -> currentToken, RS -> line, RS -> column, RS -> cursorPosi, ERROR, 0);
		}
		else
		{
			appendSymbol(RS -> currentToken, RS -> line, RS -> column, RS -> cursorPosi, dataType -> type, RS -> stackPos);
		}
		popRecord();
		RS = getTopRecord();
	}
	popRecord();
	
}

void process_literal(int literalType)
{
	char* tokenValue = strdup(yytext);
	SemanticRecord *RS;
	
	DO_Data* c;
	RS = createSemanticRecord(DATAOBJECT);
	c = (DO_Data*)RS -> dataBlock;
	c -> type = LITERAL;
	c -> literalType = literalType;
	strcpy(c -> value, tokenValue);
	c -> line = yylineno;
	c -> column = previousColumn;
	c -> cursorPosi = cursorPos;

	RS -> dataBlock = c;
	strcpy(RS -> currentToken, tokenValue);
	RS -> line = yylineno;
	RS -> column = previousColumn;
	RS -> cursorPosi = cursorPos;
	
	pushRecord(RS);
}

void process_op(void)
{
	SemanticRecord *RS;
	
	RS = createSemanticRecord(OPERATOR);
	strcpy(RS -> currentToken, previousToken);
	RS -> type = previousTokenCode;

	
	pushRecord(RS);
}


void process_id(void)
{
	DO_Data* object;
	SemanticRecord *RS;
	SymbolTable* symbol;
	char *id;

	id = strdup(yytext);
	
	RS = createSemanticRecord(DATAOBJECT);
	strcpy(RS -> currentToken, id);	
	RS -> line = yylineno;
	RS -> column = previousColumn;
	RS -> cursorPosi = cursorPos;

	object = (DO_Data*) RS -> dataBlock;

	object -> line = yylineno;
	object -> column = previousColumn;
	object -> cursorPosi = cursorPos;

		
	int pos = search(id);

	//printf("HOLA\n");
	if (pos == -1)
	{

		symbol = look_up_TS_ID(id);
		
		if (symbol -> stackPos == -1)
		{
			strcpy(RS -> currentToken, id);
			object -> type = ERROR;
			RS -> type = ERROR;
			checkForDeclaredError(id, RS);
		
		}
		else
		{
			strcpy(object -> varName, id);
			object -> type = ID;
			object -> stackPos = symbol -> stackPos;
			RS -> stackPos = symbol -> stackPos;
			RS -> type = ID;
		}
		
	}
	else
	{
		SemanticRecord *oldID = getSemanticRecordInPos(pos);
	
		strcpy(object -> varName, id);
		object -> type = ID;
		object -> stackPos = oldID -> stackPos;

		RS -> type = ID;
		RS -> stackPos = oldID -> stackPos;
	}
	
	RS -> dataBlock = object;
	pushRecord(RS);	
	
}

void checkForDeclaredError(char *token, SemanticRecord* R)
{
	DO_Data *datos;
	SemanticRecord *RS;
	int tokenPos = searhErrorToken(token);
	if (tokenPos == -1)
	{
		if (!look_up_error_TS_ID(token))
		{
			char error[100];
			sprintf(error, "semantic error, %s'%s'%s undeclared (first use in this function)", CWHTN, token, CWHT);
			yyerror(error);

			if (unDecleared == FALSE)
			{
				char note[100];
				sprintf(note, "note, each undeclared identifier is reported only once for each function it appears in");
				yynote(note, R -> line, R -> column, FALSE, R -> cursorPosi);
				unDecleared = TRUE;
			}
		}
	}
	
}

void eval_binary(void)
{
	SemanticRecord* RS = getTopRecord();
	char operator;
	SemanticRecord* dataType = retrieveRecord(TYPE);

	//printList();
	
	DO_Data* op2 = (DO_Data*) RS -> dataBlock; popRecordWithoutDataBlock(); RS = getTopRecord();
	operator = RS -> type; popRecord(); RS = getTopRecord();
	DO_Data* op1 = (DO_Data*) RS -> dataBlock; popRecordWithoutDataBlock(); 

	if (op1 -> type == TEMP)
	{
		tempNumber--;
		stackPos -= 4;
	}

	if (op2 -> type == TEMP)
	{
		tempNumber--;
		stackPos -= 4;
	}

	//printf("%s\n", op1 -> currentToken);
	if (op1 -> type == ERROR || op2 -> type == ERROR)
	{
		RS = createSemanticRecord(OPERATOR);
		op1 = (DO_Data*) RS -> dataBlock;

		RS -> kind = ERROR;
		op1 -> type = ERROR;
		strcpy(RS -> currentToken, "");
		RS -> dataBlock = op1;

		pushRecord(RS);

		return;
		
	}

	
	if (!verifyIfCodeNeeded(op1, operator, op2, dataType))
	{
		char instruction[500];
		char tempName[100];
		sprintf(tempName, "temp%d", tempNumber);
		tempNumber++;
	
		RS = createSemanticRecord(DATAOBJECT);
		DO_Data* newTemp = (DO_Data*) RS -> dataBlock;
		newTemp -> type = TEMP;
		strcpy(newTemp -> varName, tempName);
		newTemp -> stackPos = stackPos;
		RS -> stackPos = stackPos;
	
		stackPos += 4;

		strcpy(RS -> currentToken, tempName);
		RS -> type = TEMP;

		pushRecord(RS);

		sprintf(instruction, "addIDs %d, %d ;%s + %s", op1 -> stackPos, op2 -> stackPos, op1 -> value, op2 -> value);	

		generateCode(instruction);

		sprintf(instruction, "mov [esp + %d], ebx ;%s = %s + %s\n", newTemp -> stackPos,newTemp -> varName, op1 -> value, op2 -> value);	
		generateCode(instruction);
		
		
		
	}
	free(op1);
	free(op2);
}


int verifyIfCodeNeeded(DO_Data* op1, char operator, DO_Data* op2, SemanticRecord* dataType)
{
	int operand1, operand2;
	if (op1 -> type == LITERAL && op2 -> type == LITERAL)
	{
		
		operand1 = atoi(op1 -> value);
		operand2 = atoi(op2 -> value);


		if (operand2 == 0)
		{	
			if (operator == '/')
			{
				//printWarning
				return 0;
			}
		}
		getLiteralResult(op1, operator, op2, dataType, operand1, operand2);
	
		pushNewSemanticRecordDO(I_CONSTANT, op2, resultBinary);

		return 1;
		
	}
	else if (op1 -> type == ID && op2 -> type == LITERAL)
	{
		operand2 = atoi(op2 -> value);
		if (operand2 == 0)
		{
			if (operator == '/' || operator == '%')
			{
				//printWarning
				return 0;
			}
			else if (operator == '*')
			{
				pushNewSemanticRecordDO(op2 -> literalType, op2, "0");
				return 1;
			}
			else
			{
				pushNewSemanticRecordDO(op1 -> literalType, op1, "");
				return 1;
			}
		}
		else if (operand2 == 1)
		{
			if (operator == '*' || operator == '/')
			{
				pushNewSemanticRecordDO(op1 -> literalType, op1, "");
				return 1;
			}
		}
	}
	else if (op1 -> type == LITERAL && op2 -> type == ID)
	{
		operand1 = atoi(op1 -> value);
		if (operand1 == 0)
		{
			if (operator == '/' || operator == '*' || operator == '%')
			{
				pushNewSemanticRecordDO(op1 -> literalType, op1, "0");
				return 1;
			}
			else
			{
				pushNewSemanticRecordDO(op2 -> literalType, op2, "");
				return 1;
			}
		}
		else if (operand1 == 1)
		{
			if (operator == '*')
			{
				pushNewSemanticRecordDO(op2 -> literalType, op2, "");
				return 1;
			}
		}
	}
	
	if (strcmp(op1 -> varName, op2 -> varName) == 0)
	{
		if (operator == '/')
		{
			op1 -> type = LITERAL;
			op1 -> literalType = I_CONSTANT;
			pushNewSemanticRecordDO(op1 -> literalType, op1, "1");
			return 1;
		}
		else if (operator == '%')
		{
			op1 -> type = LITERAL;
			op1 -> literalType = I_CONSTANT;
			pushNewSemanticRecordDO(op2 -> literalType, op2, "0");
			return 1;
		}
	}
	return 0;
	
}

void pushNewSemanticRecordDO(int literalType, DO_Data *op, char* value)
{
	SemanticRecord *newSemanticRecord = createSemanticRecord(DATAOBJECT);
	DO_Data* newDataObject = (DO_Data*) newSemanticRecord -> dataBlock;
	

	newSemanticRecord -> type = op -> type;
	newSemanticRecord -> line = op -> line;
	newSemanticRecord -> column = op -> column;
	newSemanticRecord -> cursorPosi = op -> cursorPosi;

	newDataObject -> line = op -> line;
	newDataObject -> column = op -> column;
	newDataObject -> cursorPosi = op -> cursorPosi;
	newDataObject -> type = op -> type;
	

	if (op -> type == LITERAL)
	{
		strcpy(newDataObject -> value, value);
		newDataObject -> literalType = literalType;
		strcpy(newSemanticRecord -> currentToken, value);
	}
	else
	{
		strcpy(newDataObject -> varName, op -> varName);		
		strcpy(newSemanticRecord -> currentToken, op -> varName);
		newDataObject -> stackPos = op -> stackPos;
		newSemanticRecord -> stackPos = op -> stackPos;
	
	}
	
		
	newSemanticRecord -> dataBlock = newDataObject;
	pushRecord(newSemanticRecord);
	//printList();
}

void getLiteralResult(DO_Data* op1, char operator, DO_Data* op2, SemanticRecord* dataType, int operand1, int operand2)
{
	
	
	memset(resultBinary, '\0', MAX_VALUE_SIZE);
	//float opF1, opF2;
	//get operator constant

	//get operator
	if (operator == '+')
	{
		if (dataType -> type == INT)
			sprintf(resultBinary, "%d", operand1 + operand2);
	}
	else if (operator == '-')
	{
		
		if (dataType -> type == INT)
			sprintf(resultBinary, "%d", operand1 - operand2);
		
			
	}

	else if (operator == '*')
	{
		if (dataType -> type == INT)
			sprintf(resultBinary, "%d", operand1 * operand2);	
		
			
	}

	else if (operator == '/')
	{
		
		if (dataType -> type == INT)
			sprintf(resultBinary, "%d", operand1 / operand2);
			
		
	}

	else if (operator == '%')
	{		
		if (dataType -> type == INT)
			sprintf(resultBinary, "%d", operand1 % operand2);
		
			
	}

	//total = result;
}

void process_assign(void)
{
	SemanticRecord* RS;
	RS = getTopRecord();
	DO_Data* temp = (DO_Data*) RS -> dataBlock;

	

	char instruction[100];
	int stack;
	char* nameID;

	if (temp -> type != LITERAL)
	{
		stack = RS -> stackPos;
		nameID = RS -> currentToken;

		if (RS -> type == TEMP)
		{
			tempNumber--;
			stackPos -= 4;
		}

		popRecord();
	
		RS = getTopRecord();

		
		sprintf(instruction, "assignID %d, %d ;%s = %s\n", RS -> stackPos, stack, RS -> currentToken, nameID);
	
		generateCode(instruction);
	}
	else
	{
		char* value = temp -> value;
		popRecord();
		RS = getTopRecord();

		sprintf(instruction, "assignConstant %d, %s ;%s = %s\n", RS -> stackPos, value, RS -> currentToken, value);

		generateCode(instruction);
	}
}

void initializeOutputFile(void)
{

	assembly = fopen("assembly.asm", "w");

	fprintf(assembly, "%s\n", addIDs);
	fprintf(assembly, "%s\n", assignConstant);
	fprintf(assembly, "%s\n", assignID);
	//fprintf(assembly, "mov rbp, rsp\n");

	fclose(assembly);
	
}

void start_function(void)
{
	SemanticRecord* RS;
	RS = getTopRecord();
	char instruction[50];
	sprintf(instruction, "global %s\n%s:\n", RS -> currentToken, RS -> currentToken);

	generateCode(instruction);

	appendSymbol(RS -> currentToken, RS -> line, RS -> column, RS -> cursorPosi, FUNCTION, 0);

	actualFunction = RS -> currentToken;

	popRecord();
	popRecord();	//function type 
}

void end_function(void)
{
	generateCode("\nret\n");
	actualFunction = "";
}

void process_function(void)
{
	SemanticRecord *RS;
	SymbolTable* symbol;
	char *id;

	id = previousToken;
	
	RS = createSemanticRecord(FUNCTION);
	strcpy(RS -> currentToken, id);	
	RS -> line = yylineno;
	RS -> column = previousColumn;
	RS -> cursorPosi = cursorPos;
	RS -> type = FUNCTION;
		


	symbol = look_up_TS_function(id);
	
	if (symbol -> stackPos == -1)
	{
		char note[100];
		sprintf(note, "warning, implicit declaration of function %s‘%s’%s [-Wimplicit-function-declaration]", CWHTN, id, CWHT);
		yywarning(note, RS -> line, RS -> column, TRUE, RS -> cursorPosi);	
	}

	
	pushRecord(RS);		
}

void call_functionNoParams(void)
{
	SemanticRecord* RS = getTopRecord();
	char instruction[50];
	sprintf(instruction, "call %s\n", RS -> currentToken);
	popRecord();

	generateCode(instruction);	
}
void generateCode(char *instruction)
{
		assembly = fopen("assembly.asm", "a");
		fprintf(assembly, "%s\n", instruction);
		fclose(assembly);
}

