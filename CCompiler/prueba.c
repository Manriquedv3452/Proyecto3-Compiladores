#include <stdio.h>
#include <stdlib.h>
#include "semanticStructs.h"




int main (int argc, char *argv[])
{
	initializeList();
	
	
	SRecord RS = createSemanticRecord("HOLA");

	push(RS);

	RS = createSemanticRecord("WJJAJD");

	push(RS);

	RS = createSemanticRecord("3333");

	push(RS);

	printf("%s\n", head -> next -> semRec.TAG);
	
	//POP();
	
	//printf("%s\n", head -> next -> semRec.TAG);
	//RS = RETRIEVE("3333");

	//printf("%s\n", RS.TAG);

	return 0;
}


