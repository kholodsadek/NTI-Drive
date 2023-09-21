#include <stdio.h>
#include "STD_TYPES.h"


u32 countOnes(u32 n);

int main() {
    u32 num;
    
    printf("Enter an unsigned 32-bit number: ");
    scanf("%x", &num);
    
    u32 ones = countOnes(num);
    
    printf("Number of 1s in 0x%x: %d\n", num, ones);
    
    return 0;
}

u32 countOnes(u32 n) {
    u32 count = 0;
    
    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    
    return count;
}