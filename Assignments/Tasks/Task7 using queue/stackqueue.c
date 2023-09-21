#include <stdio.h>
#include "STD_TYPES.h"
#include "stackqueue.h"


// STACK
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
			printf("stack is FULL\n");
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
			printf("stack is Empty\n");
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

//QUEUE
ErrorState queue_Init(queue_t *pq)
{
	pq->front=-1;
	pq->back=-1;
}
ErrorState queue_enqueue(queue_t *pq,queueEntry e)
{
	bool_t state;
	queue_isFull(pq,&state);
	if(state==TRUE)
	{
		printf("Queue is full!\n");
	}//is full
	else//not full
	{
		bool_t state;
		queue_isEmpty(pq,&state);
		if(state==TRUE)//empty
		{
			pq->front=pq->back=0;
			pq->arr[pq->back]=e;
		}
		else
		{
			pq->arr[++pq->back]=e;
		}
		//printf("%d is enqueued\n",e);
	}
}
ErrorState queue_dequeue(queue_t *pq,queueEntry * pe )
{
	bool_t state;
		queue_isEmpty(pq,&state);
		if(state==TRUE) printf("Queue is empty!\n");
		else
		{
			if(pq->back == pq->front)
			{
				*pe=pq->arr[pq->front];//return the data
				pq->back=pq->front=-1;
			}
			else
			{
				*pe=pq->arr[pq->front++];
			}
		}
}
ErrorState queue_isEmpty(const queue_t *pq,bool_t *pstate)
{
	if(pq->front==-1) *pstate=TRUE;
	else *pstate=FALSE;
}
ErrorState queue_isFull(const queue_t *pq,bool_t *pstate)//traditional queue :if the back is on the last index then it's full
{
	if(pq->back==QUEUESIZE -1) *pstate=TRUE;
	else *pstate=FALSE;
}
ErrorState queue_queueSize(const queue_t *pq, u32 *psize)
{
	bool_t state;
	queue_isEmpty(pq,&state);
	if(state==TRUE) *psize = 0; //printf("Queue is empty!\n");
	else
	{
		*psize=(pq->back - pq->front )+1;
	}
}