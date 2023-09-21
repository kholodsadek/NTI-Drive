#include "STD_TYPES.h"
#include <stdio.h>
#include "queue.h"
#include <stdlib.h>
ErrorState queue_Init(queue_t *pq)
{
	pq->front=NULL;
	pq->back=NULL;
	pq->queueSize=0;
}
ErrorState queue_enqueue(queue_t *pq,queueEntry e)
{
	
	queueNode_t* pn=(queueNode_t*) malloc(sizeof(queueNode_t));
	pn->data=e;
	pn->pNext=NULL;
	//3.1 list is empty 
	bool_t state;
	queue_isEmpty(pq,&state);
	if(state==TRUE) pq->front=pq->back=pn;
	else//3.2 list not empty
	{
		pq->back->pNext=pn;//the pnext points to the new address
		pq->back=pn;//back points to the new node
	}
	pq->queueSize++;
	printf("%d is enqueued in the queue\n",e);
}
ErrorState queue_dequeue(queue_t *pq,queueEntry * pe )
{
	bool_t state;
		queue_isEmpty(pq,&state);
		if(state==TRUE) printf("Queue is empty!\n");
		else
		{
			if(pq->back == pq->front)//queuesize=1
			{
				*pe =pq->front->data;
				free(pq->front);
				pq->front=NULL;
	            pq->back=NULL;
				pq->queueSize=0;
			}
			else
			{
				*pe=pq->front->data;
				queueNode_t *temp=pq->front->pNext;
				free(pq->front);//the address of the next will be deleted so we use temp
				pq->front= temp;
				pq->queueSize--;
			}
		}
}
ErrorState queue_isEmpty(const queue_t *pq,bool_t *pstate)
{
	if(pq->front==NULL) *pstate=TRUE;
	else *pstate=FALSE;
}
ErrorState queue_isFull(const queue_t *pq,bool_t *pstate)//traditional queue :if the back is on the last index then it's full
{
}
ErrorState queue_printQueue(const queue_t *pq)//FIFO
{
	queueNode_t *temp;
	for(temp=pq->front;temp!=NULL;temp=temp->pNext)
	{
		printf("queue element= %d\n",temp->data);
	}
}
ErrorState queue_clrQueue(queue_t *pq)
{
	pq->front=NULL;
	pq->back=NULL;
	pq->queueSize=0;
	printf("the Queue is empty now :)\n");
}
ErrorState queue_queueSize(const queue_t *pq, u32 *psize)
{
	bool_t state;
	queue_isEmpty(pq,&state);
	if(state==TRUE) printf("Queue is empty!\n");
	else{
		*psize=pq->queueSize;
	}
}