#include <stdio.h>

void printFactors(int n);
int factors(int n);
int perfectNum(int n);

void main()
{
	int i;
	for(i=1;i<=1000;++i){
		if(perfectNum(i)){
			printf("%d it's factors = ",i);
			printFactors(i);
			printf("\n");
		}
	}
}

void printFactors(int n)
{
	int i,c=0;
	for(i=1;i<n;++i)
	{
		if(n%i==0){
			printf("%d, ",i);
		}
	}
}

int perfectNum(int n)
{
	int i,c=0;
	for(i=1;i<n;++i)
	{
		if(n%i==0){
			c += i;
		}
	}
	if (n == c)
		return 1;
	else
		return 0;
}