#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_OF_LENGTHOFWORD 100

char* lastLetters(char * string);

void main()
{
	char input[MAX_OF_LENGTHOFWORD];
	printf("Enter a string: ");
	gets(input);
	char* result = lastLetters(input);
	if(result != NULL){
		printf("Last two letters: %s\n",result);
		free(result);
	}
	else{
		printf("Input String is too short.\n");
	}
}
char* lastLetters(char * string)
{
	 int length = strlen(string);
	 if(length < 2)
		 return NULL;
	 char* result = (char*)malloc(3 * sizeof(char));
	 
	 result[0] = string[length -2];
	 result[1] = string[length -1];
	 result[2] = '\0';
	 return result;
}