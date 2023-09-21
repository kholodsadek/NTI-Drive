#include <stdio.h>

long long calcPower(int base, int power);

void main()
{
	int b,p;
	printf("Enter number: ");
	scanf("%d",&b);
	printf("Enter power: ");
	scanf("%d",&p);
	printf("result = %lld",calcPower(b,p));
}

long long calcPower(int base, int power)
{
	int i;
	long long res=1;
	for(i=1;i<=power;i++)
	{
		res *= base;
	}
	return res;
}