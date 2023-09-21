#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "stack.h"



ErrorState Stack_Init(Stack_t * pS)  //init top pointer 
{
	pS->top = NULL;
	pS->stackSize = 0;
}
ErrorState Stack_push(Stack_t * pS,StackEntry e )// O(1)
{
	// step 1 : allocate block in heap for Node 
	StackNode_t* pn= (StackNode_t*)malloc(sizeof(StackNode_t));
	// step 2 : init Node (with data )
	pn->data  = e;
	pn->pNext = NULL;
	// step 3 : link new Node with list 
	//step 3.1: if list is empty => top points to new Node
	bool_t state;
	Stack_isEmpty(pS,&state);
	if(state == TRUE)//empty
	{
		pS->top = pn;
	}
	// step3.2: it is not empty  => 
    else{
		// old top is my next 
		pn->pNext = pS->top;
		// update top 
		pS->top = pn;
	}	
    printf("%d is pushed\n",e);
    pS->stackSize++;  	
}
ErrorState Stack_pop(Stack_t * pS,StackEntry * pe)// O(1)
{
	// step 1 : check if list is Empty 
	bool_t state;
	Stack_isEmpty(pS,&state);
	if(state == TRUE)//empty
	{
		printf("Lis is Empty , can not pop \n");
	}
	// step 2 : List is not Empty 
	else {
		// step : return popped data 
		*pe = pS->top->data;
		// take copy from top next 
		StackNode_t * temp = pS->top->pNext;// temp = &5
		// free old top 
		free(pS->top);
		//update top with a new top from copy 
		pS->top = temp;
		pS->stackSize--;
		printf("%d is popped\n",*pe);
	}// Not Empty 
	
}
ErrorState Stack_isEmpty(const Stack_t * pS,bool_t *pstate )
{
	if(pS->top == NULL) *pstate = TRUE;
	else *pstate = FALSE;
}
ErrorState Stack_isFull(const Stack_t * pS,bool_t *pstate)
{
	// No size limitation 
}
ErrorState Stack_printStack(const Stack_t * pS) // O(n)
{
	// stack is Empty 
	bool_t state;
	Stack_isEmpty(pS,&state);
	if(state == TRUE)//empty
	{
		printf("Lis is Empty , can not print \n");
	}
	// else it is not Empty 
    else{
		StackNode_t *temp = NULL;
		//for(i=0;i<size ;i++)
		for(temp = pS->top; temp != NULL ; temp = temp->pNext)	
		{
			printf("stack element = %d\n ",temp->data);
		}
	}		
	
}
ErrorState Stack_clearStack(Stack_t * pS) // loop on all Nodes and free each on 
{
	
}
ErrorState Stack_stackSize(const Stack_t * pS, u32 *pSize) // O(1)
{
	/*StackNode_t *temp = NULL;  // O(n)
	u32 counter = 0;
	//for(i=0;i<size ;i++)
	for(temp = pS->top; temp != NULL ; temp = temp->pNext)	
	{
		counter++;
	}
	*pSize = counter ;*/
	*pSize  =  pS->stackSize;
}