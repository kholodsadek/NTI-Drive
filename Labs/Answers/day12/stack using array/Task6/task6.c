#include <stdio.h>
#include <stdbool.h>
#include "stack.h"
#include "STD_TYPES.h"

#define MAX_OF_STRING 10000

int main() {
    u8 input[MAX_OF_STRING];
	printf("s = ");
	gets(input);
    bool isValid = isValidParenthese(input);

    if (isValid) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}