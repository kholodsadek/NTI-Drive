#include <stdio.h>
#include "STD_TYPES.h"
#define MINIMUM3(a,b,c) ((a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c))

void main(void)
{
	s32 n1,n2,n3;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	s32 smallest = MINIMUM3(n1,n2,n3);
	printf("Smallest Number is %d",smallest);
}