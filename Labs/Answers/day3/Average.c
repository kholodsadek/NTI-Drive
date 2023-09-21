#include <stdio.h>

int main()
{
	float avg,sum=0;
	int i,num;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num);
		sum += num;
	}
	avg = sum / 10.0;
	printf("%f",avg);
}