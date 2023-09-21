#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "STD_TYPES.h"
#define MAXOFLENGTH 500

u8 *truncateSentence(char *s,int k);

void main(void)
{
	u32 k;
	u8 str[MAXOFLENGTH];
	printf("s = ");
	gets(str);
	printf("k = ");
	scanf("%d",&k);
	u8* res = truncateSentence(str,k);
	printf("%s",res);
	free(res);
}

u8 *truncateSentence(char *s,int k)
{
	u8* result = (u8*)malloc(MAXOFLENGTH*sizeof(u8));
	u32 i=0,j=0, wordCount = 0;
	while(s[i] != '\0' && j < MAXOFLENGTH-1 && wordCount < k)
	{
		if(s[i] != ' '){
			result[j] = s[i];
			j++;
		}
		else{
			result[j] = ' ';
			j++;
			wordCount++;
		}
		++i;
	}
	result[j] = '\0';
	return result;
}