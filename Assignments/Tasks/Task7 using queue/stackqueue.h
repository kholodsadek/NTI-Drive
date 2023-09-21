#ifndef _STACKQUEUE_H_
#define _STACKQUEUE_H_
#include "STD_TYPES.h"

typedef enum{
	NULL_PTR = 1,
	OUT_OF_RANGE = 2,
	SUCCESS = 3
}ErrorState;
typedef enum{
	TRUE = 1,
	FALSE = 0
}bool_t;

//STACK
#define STACKSIZE 10
typedef u8 StackEntry;
typedef struct{
	u32 top;
	StackEntry arr[STACKSIZE];
}Stack_t;
ErrorState Stack_Init(Stack_t * pS);
ErrorState Stack_push(Stack_t * pS,StackEntry e );
ErrorState Stack_pop(Stack_t * pS,StackEntry * pe);
ErrorState Stack_isEmpty(const Stack_t * pS,bool_t *pstate );
ErrorState Stack_isFull(const Stack_t * pS,bool_t *pstate);

//QUEUE
#define QUEUESIZE 10
typedef u32 queueEntry;
typedef struct {
	s32 front;
	s32 back;
	queueEntry arr[QUEUESIZE];
}queue_t;
ErrorState queue_Init(queue_t *pq);
ErrorState queue_enqueue(queue_t *pq,queueEntry e);
ErrorState queue_dequeue(queue_t *pq, queueEntry *pe);
ErrorState queue_isEmpty(const queue_t *pq,bool_t *pstate);
ErrorState queue_isFull(const queue_t *pq,bool_t *pstate);
ErrorState queue_queueSize(const queue_t *pq, u32 *psize);

#endif