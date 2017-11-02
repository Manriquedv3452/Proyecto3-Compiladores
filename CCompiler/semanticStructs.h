
#include <string.h>
//Semantic Analyzes

typedef struct semanticRecord
{

	char* TAG;

	
} SRecord;

typedef struct semanticStack
{
	struct semanticStack *next;
	struct semanticStack *previous;
	SRecord semRec;
} SStack;



void initializeList(void);
SRecord createSemanticRecord(char* type);
void push(SRecord RS);
void pop(void);
SRecord retrieve(char* tag);


SStack *head = NULL;
SStack *tail = NULL;
SStack *current = NULL;


void initializeList(void)
{
	head = malloc(sizeof(SRecord));
	tail = malloc(sizeof(SRecord));

	head -> next = tail;
	tail -> previous = head;
}


SRecord createSemanticRecord(char* tag)
{
	SRecord RS;
	RS.TAG = tag;
		
	return RS;
	
}

void push(SRecord RS)
{
	SStack *temp = malloc(sizeof(SRecord));
	
	temp -> next = head -> next;

	head -> next = head -> next -> previous = malloc(sizeof(SRecord));
	head -> next -> next = temp -> next;
	head -> next -> previous = head;


	head -> next -> semRec = RS;

	free(temp);

}

void pop(void)
{
	
	SStack *temp = malloc(sizeof(SRecord));
	
	temp = head -> next;

	head -> next = head -> next -> next;
	head -> next -> next -> previous = head;

	free(temp);
}

SRecord retrieve(char* tag)
{
	current = head;

	while (current -> next != tail)
	{
		if (strcmp(current -> next -> semRec.TAG, tag) == 0)
			return current -> next -> semRec;

		current = current -> next;
	}
}

