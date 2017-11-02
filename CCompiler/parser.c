#include "getToken.c"

#define CNRM  "\x1B[0m"
#define CRED  "\x1B[31;1m"
#define CGRN  "\x1B[32;1m"
#define CYEL  "\x1B[33m"
#define CBLU  "\x1B[34m"
#define CMAG  "\x1B[35m"
#define CCYN  "\x1B[36m"
#define CWHT  "\x1B[0m"
#define CWHTN  "\x1B[1m"

extern int yyparse(void);
extern FILE* yyin;

void printError(char *errorType, char *token, int line, int previousColumn, int column, const char *errorInfo, int cursorPos);
int parser(char* fileNameParse);

char fileNameParse[50];
char lineCode[5000];
int numberOfErrors = 0;
FILE *FileTemp;
FILE *errors;

int parser(char fileNamePar[])
{
	strcpy(fileNameParse, fileNamePar);
	FileTemp = fopen(fileNameParse, "r");

	if (FileTemp != NULL){
		yyin = FileTemp;


		yyparse();
	
	
		fclose(FileTemp);
		printf("Compilation finished with %d syntax-lexical errors.\n", numberOfErrors);
	}

	return 0;
}

void printError(char *errorType, char *token, int line, int previousColumn, int column, const char *errorInfo, int cursorPos)
{	
	
	numberOfErrors++;
	//GET ALL THE LINE
	memset(lineCode, '\0', 5000);
	int cursor = ftell(yyin);
	int c;
	int i = 0;

	fseek(FileTemp, cursorPos - column, SEEK_SET);
	while ((c = fgetc(FileTemp)) != EOF && c != '\n' && i != 150)
	{
		if (c == '\t')
			lineCode[i++] = ' ';
		else
			lineCode[i++] = c;

	}
	fseek(FileTemp, cursor, SEEK_SET);

	
	//PRINT ERROR WITH COLORS
	if (strcmp(errorType, "lexical error") == 0)
	{
		errors = fopen("errors.txt", "a");
		fprintf(errors, "\\verb|%s:%d:%d:| \\textcolor{red}{%s}: \\verb|'%s'| %s\\newline", fileNameParse, line, column, errorType, token, errorInfo);
		fclose(errors);
		printf("%s%s:%d:%d: %s%s: %s'%s' %s\n", CWHTN, fileNameParse, line, column, CRED, errorType, CWHT, token, errorInfo);

	}
	else 
	{
		errors = fopen("errors.txt", "a");
		fprintf(errors, "\\verb|%s:%d:%d:| \\textcolor{red}{%s}: ", fileNameParse, line, previousColumn + 1, errorType);
		
		printf("%s%s:%d:%d: %s%s: %s", CWHTN, fileNameParse, line, previousColumn + 1, CRED, errorType, CWHT);
		
		if (strcmp(token, "\0") == 0)
		{
			printf(" expected statement or declaration at the end of input\n");
		}
		else
		{
			int j = 14;
			while (errorInfo[j] != ',' && j < strlen(errorInfo))
			{
				j++;
			}
			if (errorInfo[j] == ',')
			{
				if (j + 2 < strlen(errorInfo))
					j+=2;

				while (j < strlen(errorInfo))
				{
					fprintf(errors, "\\verb|%c|", errorInfo[j]);
					printf("%c", errorInfo[j]);
					j ++;
				}
			
				if (strlen(token) > 1 && token[0] == '"')
				{
					token = "string constant";
				}
				fprintf(errors, " before \\verb|'%s'| token \\newline", token);
				printf(" before %s'%s'%s token \n", CWHTN, token, CWHT);
			}
			else 
			{
				j = 14;
				while (j < strlen(errorInfo))
				{
					fprintf(errors, "\\verb|%c|", errorInfo[j]);
					printf("%c", errorInfo[j]);
					j ++;
				}
				fprintf(errors, "\\newline");
				printf("\n");
			}
		}
		fclose(errors);
		column = previousColumn;
		
	}


	//PRINT LINE OF CODE WITH CURSOR
	errors = fopen("errors.txt", "a");
	fprintf(errors, "\\verb|%s|\\newline", lineCode);

	printf("%s\n", lineCode);

	for (int i = 0; i < column; i++)
	{
		fprintf(errors, "\\verb| |");
		printf(" ");
	}
	fprintf(errors, "\\textcolor{green}{1}\\newline\\newline@@");
	fclose(errors);

	printf("%s^%s\n\n", CGRN, CWHT);
}

