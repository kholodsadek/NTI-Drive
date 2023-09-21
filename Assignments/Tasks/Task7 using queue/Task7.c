#include <stdio.h>
#include "STD_TYPES.h"
#include "stackqueue.h"
#define MAXSIZE 10

void main(void)
{
	StackEntry sandQ[MAXSIZE];
	queueEntry studS[MAXSIZE];
	Stack_t sandwiches;
	queue_t students;
	queueEntry removedStu;
	StackEntry  removedSand;
	bool_t state;
	Stack_t * pS1 = NULL;
	pS1 = &sandwiches;
	/*intilization*/
	Stack_Init(pS1);
	queue_Init(&students);
	
	/*size of queue = size of stack*/
	u32 i,size;
	printf("Enter size: ");
	scanf("%d",&size);
	
	//first in stack
	printf("Enter Sandwiches: \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&sandQ[i]);
		Stack_push(pS1,sandQ[i]);
	}
	//second in queue
	printf("Enter Students: \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&studS[i]);
		queue_enqueue(&students,studS[i]);
	}
	
	while(!queue_isEmpty(&students,&state))
	{
		queue_dequeue(&students,&removedStu);
		Stack_pop(pS1,&removedSand);
		if(removedStu != removedSand){
			queue_enqueue(&students,removedStu);
			Stack_push(pS1,removedSand);
		}
		//else: Student takes the sandwich and leaves the queue
	}
	queue_queueSize(&students,&size);
	printf("Remaining students: %d\n",size);
}