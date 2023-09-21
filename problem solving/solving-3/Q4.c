#include <stdio.h>
#include <string.h>
#include "STD_TYPES.h"

void main()
{
	u8 sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    u8 *token = strtok(sentence, " ");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}