#include <stdio.h>

int countOdds(int low, int high);

int main() {
    int low = 3;
    int high = 9;
    
    int oddCount = countOdds(low, high);
    
    printf("Number of odd integers between %d and %d (inclusive): %d\n", low, high, oddCount);
    
    return 0;
}

int countOdds(int low, int high) {
    // If low is odd, we have (high - low) / 2 + 1 odd numbers in the range
    // If low is even, we have (high - low + 1) / 2 odd numbers in the range
    if (low % 2 == 1) {
        return (high - low) / 2 + 1;
    } else {
        return (high - low + 1) / 2;
    }
}