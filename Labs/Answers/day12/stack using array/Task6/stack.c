#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "stack.h"
#include "STD_TYPES.h"

Stack* createStack(u32 capacity)
{
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	stack->data = (u8*)malloc(capacity * sizeof(u8));
	stack->top = -1;
	stack->capacity = capacity;
	return stack;
}

void destroyStack(Stack* stack)
{
	free(stack->data);
	free(stack);
}

bool isEmpty(Stack* stack)
{
	return stack->top == -1;
}

bool isFull(Stack* stack)
{
	return stack->top == stack->capacity -1;
}

void push(Stack* stack, u8 item)
{
	if(isFull(stack)){
		printf("Stack is full\n");
		return;
	}
	stack->data[++stack->top] = item;
}

u8 pop(Stack* stack)
{
	if(isEmpty(stack)){
		printf("Stack is empty\n");
		return 0;
	}
	return stack->data[stack->top--];
}

bool isValidParenthese(const char* s)
{
	Stack* stack = createStack(strlen(s));

    for (u32 i = 0; s[i] != '\0'; i++) {
        u8 current = s[i];

        if (current == '(' || current == '[' || current == '{') {
            push(stack, current);
        } else if (current == ')' || current == ']' || current == '}') {
            if (isEmpty(stack)) {
                destroyStack(stack);
                return false;
            }

            u8 top = pop(stack);

            if ((current == ')' && top != '(') ||
                (current == ']' && top != '[') ||
                (current == '}' && top != '{')) {
                destroyStack(stack);
                return false;
            }
        }
    }

    bool valid = isEmpty(stack);
    destroyStack(stack);
    return valid;
}