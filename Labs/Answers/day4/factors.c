#include <stdio.h>

void calcFactors(int num);

void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("factors of %d = ",n);
	calcFactors(n);
}

void calcFactors(int num)
{
	int i;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			printf("%d ",i);
	}
}