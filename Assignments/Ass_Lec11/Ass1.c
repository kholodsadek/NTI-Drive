#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

void main(void)
{
	u32 size_1,size_2,size_res,i;
	printf("Enter size of the array_1: ");
	scanf("%d",&size_1);
	printf("Enter size of the array_2: ");
	scanf("%d",&size_2);
	if(size_1 == size_2)
	{
		size_res = size_1;
		u32 *arr1 = (u32*)calloc(size_1,sizeof(u32));
		u32 *arr2 = (u32*)calloc(size_2,sizeof(u32));
		u32 *res = (u32*)calloc(size_res,sizeof(u32));
		if(arr1 == NULL || arr2 == NULL)
		{
			printf("Memory is Full\n");
		}
		else
		{
			printf("Enter Array_1\n");
			for(i=0;i<size_1;i++)
			{
				printf("enter element %d: ",i);
				scanf("%d",&arr1[i]);
			}
			printf("Enter Array_2\n");
			for(i=0;i<size_2;i++)
			{
				printf("enter element %d: ",i);
				scanf("%d",&arr2[i]);
			}
			printf("\n");
			printf("The result of summation\n");
			for(i=0;i<size_res;i++)
			{
				res[i] = arr1[i]+arr2[i];
				printf("element %d: %d\n",i,res[i]);
			}
		}
	}
	else
	{
		printf("The size of 2 arrays is not equal\n");
	}
}