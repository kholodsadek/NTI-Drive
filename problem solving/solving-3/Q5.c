#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(u32 n) {
    if (n <= 0) {
        return false;
    }
    return (n & (n - 1)) == 0;
}
 void main()
 {
	u32 n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (isPowerOfTwo(n)) {
        printf("%d is a power of two.\n", n);
    } else {
        printf("%d is not a power of two.\n", n);
    }
 }