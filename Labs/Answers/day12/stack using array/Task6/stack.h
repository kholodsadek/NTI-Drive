#include <stdbool.h>
#include "STD_TYPES.h"

#ifndef _STACK_H_
#define _STACK_H_

typedef struct{
	u8* data;
	u32 top;
	u32 capacity;
}Stack;


Stack* createStack(u32 capacity);
void destroyStack(Stack* stack);
bool isEmpty(Stack* stack);
bool isFull(Stack* stack);
void push(Stack* stack,u8 item);
u8 pop(Stack* stack);
bool isValidParenthese(const char* s);


#endif

