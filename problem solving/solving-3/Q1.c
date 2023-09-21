#include <stdio.h>
#include "STD_TYPES.h"

void swapVariables(u32* first,u32* second);

void main(void)
{
	u32 x =5, y =4;
	printf("x = %d , y = %d before swapping\n",x,y);
	swapVariables(&x,&y);
	printf("x = %d , y = %d after swapping\n",x,y);
}
void swapVariables(u32* first,u32* second)
{
	*first = *first ^ *second;
	*second = *first ^ *second;
    *first = *first ^ *second;
}