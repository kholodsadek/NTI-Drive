#include <stdio.h>

void main()
{
	int i,max,sMax,arr[10];
	for(i=0;i<10;++i)
	{
		printf("Enter the Eelement[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	sMax = arr[0];
	for(i=0;i<10;++i)
	{
		if(max < arr[i]){
			sMax = max;
			max = arr[i];
			
        }	
        else if(sMax < arr[i])
            sMax = arr[i];			
	}
	printf("First largest = %d\n",max);
	printf("Second largest = %d",sMax);
}