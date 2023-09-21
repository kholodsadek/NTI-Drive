#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#define MAXLENGTH 1000

u32 arraySign(u8* nums,u32 numsSize);

void main(void)
{
	u32 i,size;
	printf("Enter size: ");
	scanf("%d",&size);
	u8* nums = (u8*)malloc(size*sizeof(u8));
	for(i=0;i<size;i++){
		printf("element %d: ",i);
		scanf("%d",&nums[i]);
	}
	u32 res = arraySign(nums,size);
	printf("%d",res);
}
u32 arraySign(u8* nums,u32 numsSize)
{
	u32 i,product = 1;
	for(i=0;i<numsSize;i++)
	{
		product *= nums[i];
	}
	if(product > 0)
		return 1;
	else if (product < 0)
		return -1;
	else
		return 0;
}