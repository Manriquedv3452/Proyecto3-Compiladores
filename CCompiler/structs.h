typedef struct token
{
	int tokenCode;
	char* lexeme;
	int lineNumber;
} TokenInfo;

typedef enum token_types
{
	KEYWORD = 200, OP = 201, ID = 202, CONSTANT = 203, STRING_LITERAL = 204, SEP = 205, ASSIGN = 206
} TokenType;

typedef struct tokenRec
{
	TokenType tokenCode;
	int count;
	struct tokenRec *next;
} Token;




