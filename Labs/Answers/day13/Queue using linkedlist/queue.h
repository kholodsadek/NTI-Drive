#include "STD_TYPES.h"
#ifndef _QUEUE_H_//HEADER GUARD NECESSERY
#define _QUEUE_H_

typedef u32 queueEntry; //configrability

typedef struct mynode{// each node has a pointer forthe next node and a data//pn 
	queueEntry data;
	struct mynode *pNext;
}queueNode_t;
typedef struct {
	queueNode_t * front;//pointer to the first node//ps
	queueNode_t * back;
	u32 queueSize;
}queue_t;
typedef enum{
	FALSE,//0
	TRUE//1
}bool_t;
typedef enum{
	NULL_PTR=1,//SAME SIZE OF INT
	OUT_OF_RANGE=2,
	SUCCESS=3
}ErrorState;
ErrorState queue_Init(queue_t *pq);
ErrorState queue_enqueue(queue_t *pq,queueEntry e);//will take which stack and the data 
ErrorState queue_dequeue(queue_t *pq,queueEntry * pe );
ErrorState queue_isEmpty(const queue_t *pq,bool_t *pstate);
ErrorState queue_isFull(const queue_t *pq,bool_t *pstate);
ErrorState queue_printQueue(const queue_t *pq);
ErrorState queue_clrQueue(queue_t *pq);
ErrorState queue_queueSize(const queue_t *pq, u32 *psize);//as this function only read the array so to not change it so we put const 

#endif