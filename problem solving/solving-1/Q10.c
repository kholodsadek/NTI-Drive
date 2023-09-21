#include <stdio.h>

int gcd(int a,int b);

void main()
{
	int n1,n2;
	printf("Enter 2 number: ");
	scanf("%d%d",&n1,&n2);
	printf("GCD of %d and %d = %d",n1,n2,gcd(n1,n2));
}

int gcd(int a,int b) // 2 10
{
	int i,res;
	for(i=1;i<=a && i<=b;++i)
	{
		if(a%i==0 && b%i==0) 
			res = i;
	}
	return res;
}