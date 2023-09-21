#include <stdio.h>

int fib(int n)
{
	if(n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}

void main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	printf("fibonacci of number %d = %d ",num,fib(num));
}