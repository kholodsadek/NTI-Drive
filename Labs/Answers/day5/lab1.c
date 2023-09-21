#include <stdio.h>
int x,y;

void swaps()
{
	int tmb = x;
	x = y;
	y = tmb;
}

void main()
{
	printf("Number1 Before Swap = ");
	scanf("%d",&x);
	printf("Number2 Before Swap = ");
	scanf("%d",&y);
	swaps();
	printf("Number1 After Swap = %d\n",x);
	printf("Number2 After Swap = %d",y);
}