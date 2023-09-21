#include <stdio.h>

int main()
{
	int num;
	printf("Please Enter Number: ");
	scanf("%d",&num);
	if(num % 2 == 0)
		printf("Number %d is Even\n",num);
	else
		printf("Number %d is Odd",num);
}