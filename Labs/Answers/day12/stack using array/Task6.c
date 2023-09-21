#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

bool isValidParentheses(const char* s);

int main(void)
{
    char input[10000];
    printf("s = ");
    fgets(input, sizeof(input), stdin);

    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    bool isValid = isValidParentheses(input);

    if (isValid) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}

bool isValidParentheses(const char* s)
{
    Stack_t stack;
    Stack_t *ptrs;
    ptrs = &stack; // Added the missing semicolon here
    Stack_Init(ptrs);
    StackEntry pops, current;
    size_t i;

    for (i = 0; s[i] != '\0'; i++) {
        current = s[i];

        if (current == '(' || current == '[' || current == '{') {
            Stack_push(ptrs, current);
        } else if (current == ')' || current == ']' || current == '}') {
			bool_t state;
			Stack_isEmpty( ptrs,&state);
			if(state == TRUE){
                Stack_Init(ptrs);
                return false;
            }

            Stack_pop(ptrs, &pops);

            if ((current == ')' && pops != '(') ||
                (current == ']' && pops != '[') ||
                (current == '}' && pops != '{')) {
                Stack_Init(ptrs);
                return false;
            }
        }
    }

    bool_t emptyState; // Used the correct data type
    ErrorState isValid = Stack_isEmpty(ptrs, &emptyState); // Removed the comma after Stack_isEmpty
    Stack_Init(ptrs);
    return isValid == SUCCESS && emptyState == TRUE;
}