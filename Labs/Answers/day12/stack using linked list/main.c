#include <stdio.h>
#include "STD_TYPES.h"
#include "stack.h"



void main(void)
{
	Stack_t  S1;// object declaration (8 bytes = size of top pointer)
	StackEntry e;
	Stack_Init(&S1);// init top -> NULL
	Stack_push(&S1,5 );
	Stack_push(&S1,6 );
	Stack_push(&S1,7 );
	Stack_printStack(&S1);
	
}