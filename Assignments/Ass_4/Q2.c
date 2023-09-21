#include <stdio.h>

void main()
{
	int i,arr[10],cE=0,cO=0;
	for(i=0;i<10;++i)
	{
		printf("Enter the Eelement[%d]: ",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
			++cE;
		else
			++cO;
	}
	printf("Total even elements = %d\n",cE);
	printf("Total Odd elements = %d\n",cO);
	
}