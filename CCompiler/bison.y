%{

/* Taken from http://www.quut.com/c/ANSI-C-grammar-y.html*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "semanticStack.h"
#include "symbolTable.h"
#define FALSE 0
#define TRUE 1
#define CWHT  "\x1B[0m"
#define CWHTN  "\x1B[1m"

void save_type(void);
void process_literal(void);
void process_id(void);
void save_id(void);
void process_op(void);
void process_id(void);
void declaration_end(void);
void addTableContext(void);
void checkForDeclaredError(char *token, SemanticRecord* R);

void yyerror(const char *);
void yynote(char *noteInfo, int line, int column, int writeCode, int cursorPosi);
extern int getToken(void);
extern char* yytext;
extern int yylineno;
extern int column;
extern int previousColumn;
extern void print(void);

extern char* previousToken;
extern int cursorPos;

#define yylex getToken
#define YYERROR_VERBOSE 1

int errorFound = 0;
int inFunction = FALSE;
int inContext = FALSE;
int unDecleared = FALSE;

%}
%token	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
%token	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN
%token	TYPEDEF_NAME ENUMERATION_CONSTANT

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	COMPLEX IMAGINARY 
%token	STRUCT UNION ENUM ELLIPSIS

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%start translation_unit
%%

primary_expression
	: IDENTIFIER			{ process_id(); }		
	| constant
	| string
	| '(' expression ')'			
	| generic_selection
	| '(' error ')'		    		{ yyerrok; }//err
	| '(' expression error			{ yyerrok; }
	;

constant
	: I_CONSTANT		{ process_literal(); }/* includes character_constant */
	| F_CONSTANT
	| ENUMERATION_CONSTANT	/* after it has been defined as such */
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER
	;

string
	: STRING_LITERAL
	| FUNC_NAME
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')'
	| GENERIC '(' error ',' generic_assoc_list ')'				{ yyerrok; }
	| GENERIC '(' assignment_expression ',' error ')'			{ yyerrok; }
	;	

generic_assoc_list
	: generic_association
	| generic_assoc_list ',' generic_association
	//| error ',' generic_association						{ yyerrok; }
	| generic_assoc_list ',' error						{ yyerrok; }
	;

generic_association
	: type_name ':' assignment_expression
	| DEFAULT ':' assignment_expression
	//| error ':' assignment_expression					{ yyerrok; }
	| DEFAULT ':' error							{ yyerrok; }
	| DEFAULT error assignment_expression 					{ yyerrok; }
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'		
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'

	| postfix_expression '[' error ']'					{ yyerrok; }
	| postfix_expression '(' error ')'					{ yyerrok; }

	| '(' error ')' '{' initializer_list '}'				{ yyerrok; }
	| '(' type_name ')' '{' error '}'					{ yyerrok; }

	| '(' error ')' '{' initializer_list ',' '}'				{ yyerrok; }
	| '(' type_name ')' '{' error ',' '}'					{ yyerrok; }
	
	| postfix_expression '(' argument_expression_list error			{ yyerrok; }
	| postfix_expression '[' expression error				{ yyerrok; }
	| '(' type_name error '{' 			{ yyerrok; }
	//| postfix_expression '(' error						{ yyerrok; }
	//| error '(' argument_expression_list					{ yyerrok; }
	//| error INC_OP								{ yyerrok; }
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression

	//| error ',' assignment_expression					{ yyerrok; }
	| argument_expression_list ',' error					{ yyerrok; }
	| argument_expression_list error assignment_expression			{ yyerrok; }
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	| ALIGNOF '(' type_name ')'
	//| INC_OP error							{ yyerrok; }
	//| DEC_OP error							{ yyerrok; }
	//| SIZEOF '(' error ')'							{ yyerrok; }
	//| ALIGNOF '(' error ')'							{ yyerrok; }
	;	

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	//| '(' type_name error cast_expression			{ yyerrok; }
	//| '(' error ')' cast_expression 			{ yyerrok; }
	//| '(' type_name ')' error				{ yyerrok; }
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	| multiplicative_expression '*' error			{ yyerrok; }	
	| multiplicative_expression '/' error			{ yyerrok; }
	| multiplicative_expression '%' error			{ yyerrok; }
	| multiplicative_expression error cast_expression	{ yyerrok; }
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	//| error '+' multiplicative_expression			{ yyerrok; }    		//err
	| additive_expression '+' error				{ yyerrok; }
	| additive_expression '-' error				{ yyerrok; }
	//| error '-' multiplicative_expression			{ yyerrok; }    		//err*/
	| additive_expression error multiplicative_expression 	{ yyerrok; }
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	| shift_expression RIGHT_OP error			{ yyerrok; }
	| shift_expression error additive_expression		{ yyerrok; }
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression

	| relational_expression error shift_expression

	| relational_expression '<' error 			{ yyerrok; }		//new
	//| error '<' shift_expression				{ yyerrok; }		//new
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	| equality_expression NE_OP error				{ yyerrok; }
	| equality_expression error relational_expression		{ yyerrok; }
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	| and_expression '&' error					{ yyerrok; }
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	| exclusive_or_expression '^' error				{ yyerrok; }	
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	| inclusive_or_expression '|' error					{ yyerrok; }
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	| logical_and_expression AND_OP error					{ yyerrok; }
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	| logical_or_expression OR_OP error 					{ yyerrok; }
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	| logical_or_expression '?' error ':' conditional_expression		{ yyerrok; }
	| logical_or_expression '?' expression error conditional_expression	{ yyerrok; }
	| logical_or_expression error expression ':' conditional_expression	{ yyerrok; }
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	//| error assignment_operator assignment_expression			    	{ yyerrok; }//err
	| unary_expression error assignment_expression				    	{ yyerrok; }//err
	| unary_expression assignment_operator error 				    	{ yyerrok; }//err*/
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression		
	//| error ',' assignment_expression		    		{ yyerrok; }//err
	| expression ',' error						{ yyerrok; } 
	| expression error assignment_expression			{ yyerrok; }   
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers  ';'
	| declaration_specifiers  init_declarator_list ';'   { declaration_end(); }	
	| static_assert_declaration
	//| declaration_specifiers init_declarator_list error		{ yyerrok; }
	| declaration_specifiers error ';'			    { yyerrok; }//err*/
	| declaration_specifiers error					{ yyerrok; }
	//| error init_declarator_list ';'			    	{ yyerrok; }//err
	//| error ';'						    { yyerrok; }
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier { save_type(); }
	| type_specifier declaration_specifiers
	| type_specifier { save_type(); }
	| type_qualifier declaration_specifiers
	| type_qualifier { save_type(); }
	| function_specifier declaration_specifiers
	| function_specifier { save_type(); }
	| alignment_specifier declaration_specifiers
	| alignment_specifier { save_type(); }
	| error declaration_specifiers					{ yyerrok; }
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	| init_declarator_list error init_declarator			{ yyerrok; }
	;

init_declarator
	: declarator '=' initializer
	| declarator
	| declarator error initializer					{ yyerrok; }
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN
	| STATIC
	| THREAD_LOCAL
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| BOOL
	| COMPLEX
	| IMAGINARY	  	/* non-mandated extension */
	| atomic_type_specifier
	| struct_or_union_specifier
	| enum_specifier
	| TYPEDEF_NAME		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	| struct_or_union error struct_declaration_list '}' 			{ yyerrok; }
	| struct_or_union IDENTIFIER '{' struct_declaration_list error 			{ yyerrok; }
	| struct_or_union IDENTIFIER error struct_declaration_list '}'			{ yyerrok; }	// newwww
	| struct_or_union '{' struct_declaration_list error 		{ yyerrok; }
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list ';'
	| static_assert_declaration
	//| error ';' 								{ yyerrok; }
	//| error struct_declarator_list ';' 					{ yyerrok; }
	//| specifier_qualifier_list error ';'					{ yyerrok; }
	| specifier_qualifier_list struct_declarator_list error			{ yyerrok; }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	| error specifier_qualifier_list		{ yyerrok; }	//new 
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	| struct_declarator_list ',' error 				{ yyerrok; }
	| struct_declarator_list error struct_declarator		{ yyerrok; }
	;

struct_declarator
	: ':' constant_expression
	| declarator ':' constant_expression				
	| declarator	
	//| declarator error constant_expression				{ yyerrok; }						
	//| ':' error 							{ yyerrok; }
	//| declarator ':' error						{ yyerrok; }
	//| error ':' constant_expression					{ yyerrok; }
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER
	| ENUM IDENTIFIER '{' enumerator_list error 			{ yyerrok; }
	| ENUM '{' enumerator_list error				{ yyerrok; }
	//| ENUM IDENTIFIER error enumerator_list 			{ yyerrok; }
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	//| error ',' enumerator			    			{ yyerrok; }//err
	| enumerator_list ',' error		    			{ yyerrok; }	
	| enumerator_list error enumerator				{ yyerrok; }
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant '=' constant_expression
	| enumeration_constant

	| enumeration_constant '=' error		    			{ yyerrok; }//err
	//| error '=' constant_expression			    			{ yyerrok; }
	| enumeration_constant error constant_expression			{ yyerrok; }
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')'
	;

type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	| ATOMIC
	;

function_specifier
	: INLINE
	| NORETURN
	;

alignment_specifier
	: ALIGNAS '(' type_name ')'
	| ALIGNAS '(' constant_expression ')'
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER { save_id(); }
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')'

	//| '(' error ')'     							{ yyerrok; }//err
	//| error '[' ']'								{ yyerrok; }
	//| error '[' STATIC type_qualifier_list assignment_expression ']'	{ yyerrok; }
	| '(' declarator error							{ yyerrok; }
	| direct_declarator '[' STATIC error assignment_expression ']'		{ yyerrok; }
	| direct_declarator '[' STATIC type_qualifier_list error ']'		{ yyerrok; }
	//| direct_declarator '[' assignment_expression error			{ yyerrok; }
	
	//| error '[' STATIC assignment_expression ']				{ yyerrok; }
	| direct_declarator '[' STATIC error ']'				{ yyerrok; }
	| direct_declarator '(' parameter_type_list error			{ yyerrok; }
	| direct_declarator '(' error ')'				{ yyerrok; }
	| direct_declarator '(' identifier_list error			{ yyerrok; }
	//| error '(' 						{ yyerrok; }
	;

pointer
	: '*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer
	| '*'
	//| '*' error pointer					{ yyerrok; }
	| '*' error pointer					{ yyerrok; }
	| '*' error						{ yyerrok; }
	| error type_qualifier_list				{ yyerrok; }
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS
	| parameter_list
	//| error ',' ELLIPSIS						{ yyerrok; }
	| parameter_list error ELLIPSIS					{ yyerrok; }
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	| parameter_list error parameter_declaration				{ yyerrok; }
	//| error ',' parameter_declaration				{ yyerrok; }
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER			
	//| error ',' IDENTIFIER					{ yyerrok; }
	| identifier_list error	IDENTIFIER					{ yyerrok; }
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list

	| error abstract_declarator				{ yyerrok; }
	| specifier_qualifier_list error			{ yyerrok; }
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' '*' ']'
	| '[' STATIC type_qualifier_list assignment_expression ']'
	| '[' STATIC assignment_expression ']'
	| '[' type_qualifier_list STATIC assignment_expression ']'
	| '[' type_qualifier_list assignment_expression ']'
	| '[' type_qualifier_list ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' '*' ']'
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
//	| '(' error ')'							{ yyerrok; }
	//| '(' parameter_type_list error					{ yyerrok;}
	;

initializer
	: '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	| assignment_expression
	
	| '{' error '}'				   	{ yyerrok; } //err
	| '{' error ',' '}'				{ yyerrok; }
	| '{' initializer_list error			{ yyerrok; }
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list ',' designation initializer
	| initializer_list ',' initializer
	| initializer_list error initializer		{ yyerrok; }
	| initializer_list error designation initializer{ yyerrok; }
	;

designation
	: designator_list '='
	//| error '=' 						{ yyerrok; }	
	| designator_list error					{ yyerrok; }		//error
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	| '[' error ']' 					{ yyerrok; }
	| '[' constant_expression error				{ yyerrok; }
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'
	| STATIC_ASSERT '(' error ',' STRING_LITERAL ')' ';' 				{ yyerrok; }
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement				
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement

	| IDENTIFIER ':' error						{ yyerrok; }
	| CASE error ':' statement					{ yyerrok; }
	| CASE constant_expression ':' error				{ yyerrok; }
	| DEFAULT ':' error						{ yyerrok; }
	;

compound_statement
	: '{' '}'
	| '{' block_item_list '}' 
	| '{' block_item_list error					{ yyerrok; }
	;

block_item_list
	: block_item
	| block_item_list block_item						
	;	

block_item
	: declaration
	| statement
	;

expression_statement
	: ';'
	| expression ';'
	//| error ';'		       { yyerrok; }//err
	| expression error 		{  yyerrok; }
	;

selection_statement
	: IF '(' expression ')' statement ELSE statement
	| IF '(' expression ')' statement
	| SWITCH '(' expression ')' statement

	| IF '(' error ')' statement ELSE statement							{ yyerrok; }
	| IF error expression 										{ yyerrok; }
	| IF '(' expression error									{ yyerrok; }
	| IF '(' expression ')' error ELSE statement							{ yyerrok; }
	| IF '(' expression ')' statement ELSE error							{ yyerrok; }
	| IF '(' error ')' statement									{ yyerrok; }
	| IF '(' expression ')' error									{ yyerrok; }
	| SWITCH '(' error ')' statement								{ yyerrok; }
	| SWITCH '(' expression ')' error								{ yyerrok; }
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' declaration expression_statement ')' statement
	| FOR '(' declaration expression_statement expression ')' statement
	


	| WHILE '(' error ')' statement									{ yyerrok; }
	| WHILE '(' expression ')' error								{ yyerrok; }
	| WHILE '(' expression error statement								{ yyerrok; }
	| WHILE error expression ')' statement								{ yyerrok; }

	| DO error WHILE '(' expression ')' ';'								{ yyerrok; }
	| DO statement WHILE '(' error ')' ';'								{ yyerrok; }
	| DO statement WHILE '(' expression ')' error							{ yyerrok; }
	| DO statement WHILE '(' expression error ';'							{ yyerrok; }
	| DO statement WHILE error expression ')' ';'							{ yyerrok; }

	| FOR '(' error expression_statement ')' statement						{ yyerrok; }	    
	//| FOR '(' error expression_statement expression ')' statement					{ yyerrok; }		    
	| FOR '(' expression_statement error expression ')' statement					{ yyerrok; }		    
	| FOR '(' expression_statement expression_statement error ')' statement				{ yyerrok; }
	| FOR '(' expression_statement expression_statement expression ')' error			{ yyerrok; }	    

	| FOR '(' expression_statement error ')' statement						{ yyerrok; }    
	| FOR '(' declaration error expression ')' statement						{ yyerrok; }	 
	| FOR '(' expression_statement expression_statement error statement   				{ yyerrok; }
	| FOR '(' declaration expression_statement error ')' statement					{ yyerrok; }
	| FOR '(' declaration expression_statement expression ')' error					{ yyerrok; }	
	| FOR '(' declaration expression_statement expression error statement		    		{ yyerrok; }
	| FOR error declaration expression_statement expression ')' statement				{ yyerrok; }
	;		

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'		    			//err
	| RETURN error					{ yyerrok; }
	| RETURN expression error		    	{ yyerrok; }		//err
	| BREAK error					{ yyerrok; }
	| CONTINUE error				{ yyerrok; }
	| GOTO IDENTIFIER error				{ yyerrok; }
	| GOTO error					{ yyerrok; }
	;	

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list  { inContext = TRUE; popRecord(); popRecord(); pushTable(); } compound_statement	{ inContext = FALSE; popTable();}			
	| declaration_specifiers declarator  { inContext = TRUE; popRecord(); popRecord(); pushTable(); } compound_statement	{ unDecleared = FALSE; inContext = FALSE; popTable();}				
	
	//| declaration_specifiers declarator error compound_statement					{ yyerrok; }
	//| error declarator compound_statement								{ yyerrok; }	
	//| error declarator declaration_list compound_statement						{ yyerrok; }	
	//| declaration_specifiers error declaration_list compound_statement				{ yyerrok; }
	//| declaration_specifiers declarator error compound_statement	    				{ yyerrok; }//
	//| declaration_specifiers declarator declaration_list error					{ yyerrok; }
	//| declaration_specifiers error compound_statement		    				{ yyerrok; }
	//| declaration_specifiers declarator error				    			{ yyerrok; }
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

%%

//functions


void save_type(void)
{
	SemanticRecord *RS;
	
	RS = createSemanticRecord(TYPE);
	RS -> currentToken = previousToken;
	RS -> type = yychar;

	
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
	
			RS = createSemanticRecord(IDENTIFIER);
			RS -> currentToken = token;
			RS -> line = yylineno;
			RS -> column = previousColumn;
			RS -> cursorPosi = cursorPos;
	
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
	
			RS = createSemanticRecord(IDENTIFIER);
			RS -> currentToken = token;
			RS -> line = yylineno;
			RS -> column = previousColumn;	
			RS -> cursorPosi = cursorPos;
	
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
	
	while (RS -> kind != TYPE)
	{
		if (RS -> kind == ERROR)
		{
			appendSymbol(RS -> currentToken, RS -> line, RS -> column, RS -> cursorPosi, ERROR, stackPos);
		}
		else
		{
			appendSymbol(RS -> currentToken, RS -> line, RS -> column, RS -> cursorPosi, dataType -> type, stackPos);
		}
		popRecord();
		RS = getTopRecord();
	}
	popRecord();


	
}

void process_literal(void)
{
	char* tokenValue = strdup(yytext);
	SemanticRecord *RS;
	
	DO_Data* c;
	RS = createSemanticRecord(DATAOBJECT);
	c = (DO_Data*)RS -> dataBlock;
	c -> type = LITERAL;
	c -> value = tokenValue;

	RS -> dataBlock = c;
	RS -> currentToken = tokenValue;
	
	pushRecord(RS);
}

void process_op(void)
{
	SemanticRecord *RS;
	
	RS = createSemanticRecord(OPERATOR);
	RS -> currentToken = previousToken;

	
	pushRecord(RS);
}


void process_id(void)
{
	DO_Data* object;
	SemanticRecord *RS;
	char *id;

	id = strdup(yytext);
	
	RS = createSemanticRecord(DATAOBJECT);
	RS -> currentToken = id;	
	RS -> line = yylineno;
	RS -> column = previousColumn;
	RS -> cursorPosi = cursorPos;

	object = (DO_Data*) RS -> dataBlock;
	object -> type = NAME;

	if (search(id) == -1)
	{
		if (!look_up_TS(id))
		{
			RS -> currentToken = id;
			RS -> kind = ERROR;
			checkForDeclaredError(id, RS);
			object -> type = ERROR;
		}
	}
	else
	{
		object -> varName = id;
	
		RS -> dataBlock = object;
	}
	

	pushRecord(RS);
	
}

void checkForDeclaredError(char *token, SemanticRecord* R)
{
	DO_Data *datos;
	SemanticRecord *RS;
	int tokenPos = searhErrorToken(token);
	if (tokenPos == -1)
	{
		if (!look_up_error_TS(token))
		{
			char error[100];
			sprintf(error, "semantic error, %s'%s'%s undeclared (first use in this function)", CWHTN, token, CWHT);
			yyerror(error);

			if (unDecleared == FALSE)
			{
				char note[100];
				sprintf(note, "note, each undeclared identifier is reported only once for each function it appears in");
				yynote(note, R -> line, R -> column, FALSE, RS -> cursorPosi);
				unDecleared = TRUE;
			}
		}
	}
	
}



