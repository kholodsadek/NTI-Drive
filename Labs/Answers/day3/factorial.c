#include <stdio.h>

void main()
{
	int i,num;
	unsigned long long fact=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		fact *= i;
	printf("Factorial of %d = %lld",num,fact);
}