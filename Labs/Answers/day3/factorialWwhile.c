#include <stdio.h>

void main()
{
	int i,num;
	unsigned long long fact=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	i = num;
	while(i>0)
	{
		fact *= i;
		i--;
	}
	printf("Factorial of %d = %lld",num,fact);
}