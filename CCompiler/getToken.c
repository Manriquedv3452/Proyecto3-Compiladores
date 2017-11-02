//FLEX LIBRARY
extern int yylex();
extern int yylineno;
extern char* yytext;


int getToken(void);



//FUNCTION RETURNS THE NEXT TOKEN.
int getToken(void)
{	

	
	return yylex();
}

