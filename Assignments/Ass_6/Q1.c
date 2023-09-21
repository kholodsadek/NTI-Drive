#include <stdio.h>
#include "STD_TYPES.h"

void swapArrays(s32 arr1[],s32 arr2[],s32 size);

void main()
{
	s32 i,j;
	s32 arr1[5] = {10,20,30,40,50};
	s32 arr2[5] = {60,70,80,90,100};
	printf("Array1 before the swap: ");
	for(i=0;i<5;++i) printf("%d ",arr1[i]);
	printf("\n");
	printf("Array2 before the swap: ");
	for(j=0;j<5;++j) printf("%d ",arr2[j]);
	swapArrays(arr1,arr2,5);
	printf("\n");
	printf("Array1 After the swap: ");
	for(i=0;i<5;++i) printf("%d ",arr1[i]);
	printf("\n");
	printf("Array2 After the swap: ");
	for(j=0;j<5;++j) printf("%d ",arr2[j]);
}
void swapArrays(s32 *ptr1,s32 *ptr2,s32 size)
{
	s32 i=0,temp;
	while(i<size)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		
		*ptr1++;
		*ptr2++;
		++i;
	}
}