#ifndef _STACK_H_
#define _STACK_H_

typedef u32 StackEntry;

typedef struct myNode {
   StackEntry   data;
   struct myNode * pNext;
}StackNode_t;

typedef struct{
	StackNode_t * top;
	u32          stackSize;
}Stack_t;

typedef enum{
	NULL_PTR = 1,
	OUT_OF_RANGE = 2,
	SUCCESS = 3
}ErrorState;
typedef enum{
	TRUE = 1,
	FALSE = 0
}bool_t;

ErrorState Stack_Init(Stack_t * pS);
ErrorState Stack_push(Stack_t * pS,StackEntry e );
ErrorState Stack_pop(Stack_t * pS,StackEntry * pe);
ErrorState Stack_isEmpty(const Stack_t * pS,bool_t *pstate );
ErrorState Stack_isFull(const Stack_t * pS,bool_t *pstate);
ErrorState Stack_printStack(const Stack_t * pS);
ErrorState Stack_clearStack(Stack_t * pS);
ErrorState Stack_stackSize(const Stack_t * pS, u32 *pSize);
#endif