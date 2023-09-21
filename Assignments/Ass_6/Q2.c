#include <stdio.h>
#include "STD_TYPES.h"

void findRepeatedNumber(s32 *arr,s32 size);
void main()
{
	s32 arr[6] = {2,4,6,2,8,10,6,4,2};
	s32 size = sizeof(arr) / sizeof(arr[0]);
    findRepeatedNumber(arr, size);
}
void findRepeatedNumber(s32 *arr,s32 size)
{
	s32 *ptr1, *ptr2;
	s32 i,j;
	for(i=0;i<size;++i)
	{
		ptr1 = &arr[i];
		for(j = i+1;j<size;++j)
		{
			ptr2 = &arr[j];
			if(*ptr1 == *ptr2)
			{
				printf("Repeated Number: %d\n",*ptr1);
				printf("Number of times repeated: %d\n",j-i);
			}
		}
	}
}