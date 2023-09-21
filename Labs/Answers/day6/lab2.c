#include <stdio.h>

void swapBYreference(int *x,int *y);

void main()
{
	int n1,n2;
	printf("The two numbers before swapping..\n");
	printf("Enter Number1: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n1);
	printf("Enter Number2: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n2);
	swapBYreference(&n1,&n2);
	printf("The two numbers after swapping by reference..\n");
	printf("Enter Number1: %d\n",n1);
	printf("Enter Number2: %d",n2);
}

void swapBYreference(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}