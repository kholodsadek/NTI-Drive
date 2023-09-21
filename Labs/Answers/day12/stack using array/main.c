#include <stdio.h>
#include "STD_TYPES.h"
#include "stack.h"



void main(void)
{
	Stack_t  S1; // object declaration (creation)
	StackEntry  e;
	u32 size ;
	Stack_t * pS1 = NULL;
	pS1 = &S1;
	Stack_Init(pS1);
	Stack_push(pS1, 5);
	Stack_push(pS1, 6);
	Stack_push(pS1, 7);
	Stack_stackSize(pS1, &size);
	printf("size = %d\n",size);
	Stack_printStack(pS1);
	#if 1
	Stack_pop(pS1,&e);
	printf("in main %d is popped\n",e);
	Stack_stackSize(pS1, &size);
	printf("size = %d\n",size);
	Stack_pop(pS1,&e);
	Stack_stackSize(pS1, &size);
	printf("size = %d\n",size);
	printf("in main %d is popped\n",e);
	Stack_printStack(pS1);
	Stack_push(pS1, 8);
	Stack_stackSize(pS1, &size);
	printf("size = %d\n",size);
	Stack_printStack(pS1);
	
	Stack_clearStack(pS1);
	Stack_printStack(pS1);// stack is empty
	Stack_t  S2; // object declaration (creation)
	Stack_Init(&S2);
	#endif
	
}