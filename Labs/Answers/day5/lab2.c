#include <stdio.h>

void main()
{
	int i,arr[10],sum=0;
	for(i =0;i<10;++i)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("Summation of array = %d\n",sum);
	printf("Average of array = %f",sum/10.0);
}