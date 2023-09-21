#include <stdio.h>

void main()
{
	int i,j;
	for(i=0;i<10;++i)
	{
		for(j=0;j<=i;++j)
			printf("*");
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<10;++i)
	{
		for(j=i;j<10;++j)
			printf("*");
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<10;++i)
	{
		int e =i;
		while(i != 0)
		{
			printf(" ");	
			--i;
		}
		i = e;
		for(j=i;j<10;++j){
			
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<10;++i)
	{
		int e =i;
		while(i != 9)
		{
			printf(" ");	
			++i;
		}
		i = e;
		for(j=0;j<i;++j){
			
			printf("*");
		}
		printf("\n");
	}
}