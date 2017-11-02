#include <stdio.h>
/*character classification macros */
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include "parser.c"

FILE *output;
//FILE *errors;
FILE *file;
int lineNumber = 1;
char fileName[50];

//extern void scanner(char* fileName);
//#include "preprocessor/preprocessor.c"



int main(int argc, char *argv[])
{

	FILE *validFile;
	if (argc == 2)
	{
		strcpy(fileName, argv[1]);
		validFile = fopen(fileName, "r");
	}
	else if (argc == 3)
	{
		if (strcmp(argv[1], "-B") == 0)
		{
			strcpy(fileName, argv[2]);
			validFile = fopen(fileName, "r");
		}
		else if (strcmp(argv[2], "-B") == 0)
		{
			strcpy(fileName, argv[2]);
			validFile = fopen(fileName, "r");
		}
		else
		{
			printf("BEAMER OPTION '-B' IS NOT VALID, PLEASE TRY AGAIN!\n\nNOTE: './syntaxAnalyzer <filename>' or './syntaxAnalyzer -B <filename>'\n");
			return 0;
		}
	}
	else
	{
		printf("FILE ARGUMENT NOT FOUND OR IS NOT VALID!\n\nNOTE: './syntaxAnalyzer <filename>' or './syntaxAnalyzer -B <filename>'\n");
		return 0;
	}

	
	if (validFile == NULL)
	{
		printf("FILE NOT FOUND OR IT DOES NOT EXIST!\n");
		return 0;
	}
	fclose(validFile);

	/*output = freopen("temp.c", "w", stdout);
	fclose(output);
	freopen("/dev/tty", "w", stdout);

	errors = freopen("errors.txt", "w", stdout);
	fclose(errors);
	freopen("/dev/tty", "w", stdout);
	
	process(fileName);*/
	
	//Start scanning 
	parser(fileName);//"temp.c");
	//printf("\n\n----------------------------------GCC---------------------------------------------\n\n");
	//system("gcc -Wpedantic temp.c");
	
	/*if (argc == 3)
		scanner("temp.c");*/

	return 0;
}
