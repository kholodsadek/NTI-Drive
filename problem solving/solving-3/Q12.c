#include <stdio.h>

int FindLongest(int size, int *arr, int number) {
    int longestCount = 0;
    int currentCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            currentCount++;
            if (currentCount > longestCount) {
                longestCount = currentCount;
            }
        } else {
            currentCount = 0;
        }
    }

    return longestCount;
}

int main() {
    int array[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 3, 3, 1};
    int size = sizeof(array) / sizeof(array[0]);
    int number = 3;

    int longestCount = FindLongest(size, array, number);
    printf("The longest consecutive occurrence of %d: %d\n", number, longestCount);

    return 0;
}