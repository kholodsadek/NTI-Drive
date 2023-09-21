#include <stdio.h>

u32 arraySign(u32* nums, u32 numsSize) {
    u32 product = 1;
    
    for (u32 i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            return 0;
        } else if (nums[i] < 0) {
            product *= -1;
        }
    }
    
    return product;
}
void main()
{
	u32 nums[] = {2, -3, 0, -5, 7};
    u32 numsSize = sizeof(nums) / sizeof(nums[0]);
    
    u32 sign = arraySign(nums, numsSize);
    
    if (sign == 1) {
        printf("The sign of the product is positive.\n");
    } else if (sign == -1) {
        printf("The sign of the product is negative.\n");
    } else {
        printf("The product is zero.\n");
    }
}