#include <stdio.h>
#include "STD_TYPES.h"
#include "queue.h"
int main()
{
	queue_t Q1;
	u32 size;
	queueEntry removed;
	bool_t state;
	queue_Init(&Q1);
	queue_enqueue(&Q1,5);
	queue_enqueue(&Q1,6);
	queue_enqueue(&Q1,7);
	queue_dequeue(&Q1,&removed);
	printf("in main %d is dequeued\n",removed);
	queue_queueSize(&Q1,&size);
	printf("the size of the queue is : %d\n",size);
	queue_clrQueue(&Q1);
	queue_isEmpty(&Q1,&state);
	if(state==TRUE) printf("the Queue is empty\n");
	queue_enqueue(&Q1,10);
	queue_enqueue(&Q1,11);
	queue_enqueue(&Q1,12);
	queue_dequeue(&Q1,&removed);
	printf("in main %d is dequeued\n",removed);
	queue_printqueue(&Q1);
}