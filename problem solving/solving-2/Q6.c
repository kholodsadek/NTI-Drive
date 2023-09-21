#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "STD_TYPES.h"
#define MAXLENGTH 1000

bool checkIfPangram(u8 * sentence);

void main(void)
{
	u8 sentence[MAXLENGTH];
	printf("sentence = ");
	gets(sentence);
	bool res = checkIfPangram(sentence);
	if(res)
		printf("true");
	else
		printf("false");
}

bool checkIfPangram(u8 * sentence)
{
	bool encountered[26] = {false};
	u32 i=0;
	while(sentence[i] != '\0')
	{
		if((u32)sentence[i] >= 97 && (u32)sentence[i] <= 122){
			encountered[(u32)sentence[i]- 'a'] = 1;
		}
		++i;
	}
	//check if all letters have been encountered
	for(i=0;i<26;i++){
		if(encountered[i]==0){
			return false;
		}
	}
	return true;
}