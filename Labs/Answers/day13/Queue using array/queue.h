#ifndef _QUEUE_H_
#define _QUEUE_H_

#define QUEUESIZE 5
#include "STD_TYPES.h"
typedef u32 queueEntry;
typedef struct {
	s32 front;
	s32 back;
	queueEntry arr[QUEUESIZE];
}queue_t;
typedef enum{
	FALSE, //0
	TRUE //1
}bool_t;
typedef enum{
	NULL_PTR =1,
	OUT_OF_RANGE = 2,
	SUCCESS=3
}ErrorState;

ErrorState queue_Init(queue_t *pq);
ErrorState queue_enqueue(queue_t *pq,queueEntry e);
ErrorState queue_dequeue(queue_t *pq, queueEntry *pe);
ErrorState queue_isEmpty(const queue_t *pq,bool_t *pstate);
ErrorState queue_isFull(const queue_t *pq,bool_t *pstate);
ErrorState queue_printqueue(const queue_t *pq);
ErrorState queue_clrQueue(queue_t *pq);
ErrorState queue_queueSize(const queue_t *pq, u32 *psize);

#endif