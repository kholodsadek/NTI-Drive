#include "STD_TYPES.h"
#include <stdio.h>
#include "queue.h"
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
		printf("Queue is full!");
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
ErrorState queue_printqueue(const queue_t *pq)//FIFO
{
	bool_t state;
		queue_isEmpty(pq,&state);
		if(state==TRUE) printf("Queue is empty!\n");
		else
		{
	u32 i;
	for(i=pq->front;i<=pq->back;i++)
	{
		printf("queue element %d = %d",i,pq->arr[i]);
		}
		}
}
ErrorState queue_clrQueue(queue_t *pq)
{
	pq->front=-1;
	pq->back=-1;
}
ErrorState queue_queueSize(const queue_t *pq, u32 *psize)
{
	bool_t state;
	queue_isEmpty(pq,&state);
	if(state==TRUE) printf("Queue is empty!\n");
	else
	{
		*psize=(pq->back - pq->front )+1;
	}
}