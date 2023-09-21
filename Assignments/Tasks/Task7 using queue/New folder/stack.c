#include <stdio.h>
#include "STD_TYPES.h"
#include "stack.h"



ErrorState Stack_Init(Stack_t * pS) // just Init top
{
	ErrorState  Local_enState = SUCCESS;
	if(pS == NULL)
	{
		Local_enState = NULL_PTR;
	}
	else{
		pS->top = 0;
	}
	return Local_enState;
	
}
ErrorState Stack_push(Stack_t * pS,StackEntry e )
{
	ErrorState  Local_enState = SUCCESS;
	if(pS == NULL)
	{
		Local_enState = NULL_PTR;
	}
	else{
		//step1 : check it is  not full
		bool_t state;
		Stack_isFull( pS,&state);
		if(state == TRUE) 
			printf("stack is FULL");
		else{
			//step 2: insert in stack 
			pS->arr[pS->top++] = e;
			//printf("%d is pushed in stack\n",e);
		}// it is not full 
    
	}// it is not Null ptr 
    return 	Local_enState;
}
ErrorState Stack_pop(Stack_t * pS,StackEntry * pe)
{
	ErrorState  Local_enState = SUCCESS;
	if(pS == NULL)
	{
		Local_enState = NULL_PTR;
	}
	else{
		//step1 : check it is  not Empty
		bool_t state;
		Stack_isEmpty( pS,&state);
		if(state == TRUE) 
			printf("stack is Empty");
		else{
			//step 2: pop from stack 
			*pe = pS->arr[--pS->top];
			//printf("%d is popped from stack\n",*pe);
		}// it is not empty
    
	}// it is not Null ptr 
    return 	Local_enState;
}
ErrorState Stack_isEmpty(const Stack_t * pS,bool_t *pstate )
{
	ErrorState  Local_enState = SUCCESS;
	if(pS == NULL)
	{
		Local_enState = NULL_PTR;
	}
	else{
		if(pS->top == 0)*pstate = TRUE;
	    else  *pstate =  FALSE;
	}
	return Local_enState;
}
ErrorState Stack_isFull(const Stack_t * pS,bool_t *pstate)
{
	ErrorState  Local_enState = SUCCESS;
	if(pS == NULL)
	{
		Local_enState = NULL_PTR;
	}
	else{
	   if(pS->top == STACKSIZE) *pstate = TRUE;
	   else  *pstate =  FALSE;
	}
	return Local_enState;
}
ErrorState Stack_printStack(const Stack_t * pS)
{
	ErrorState  Local_enState = SUCCESS;
	if(pS == NULL)
	{
		Local_enState = NULL_PTR;
	}
	else{
		// step 1 : check if stack is Empty 
		bool_t state;
		Stack_isEmpty( pS,&state);
		if(state == TRUE) 
			printf("stack is Empty");
		else{
			s32 i;
			for(i = pS->top-1;i>=0;i--)
			{
				printf("element %d = %d\n",i,pS->arr[i]);
			}
		}// else it is not empty 
	}// ptr is Not NULL 
	return Local_enState;
}
ErrorState Stack_clearStack(Stack_t * pS)
{
	ErrorState  Local_enState = SUCCESS;
	if(pS == NULL)
	{
		Local_enState = NULL_PTR;
	}
	else{
		pS->top = 0;
		printf("stack is cleared\n");
	}
	return Local_enState ;
}
ErrorState Stack_stackSize(const Stack_t * pS, u32 *pSize)
{
	ErrorState  Local_enState = SUCCESS;
	if(pS == NULL)
	{
		Local_enState = NULL_PTR;
	}
	else{
	   *pSize = pS->top; 
	}
	return Local_enState ;
}