#include <stdio.h>
#include "STD_TYPES.h"

void main()
{
	s8 i,temp,str[10];
	s8 *ptr = str;
	printf("Enter a string: ");
	gets(str);
	printf("A string after reversing: ");
	while(str[i] != '\0')
	{
		++i;
	}
	while(i > 0){
		printf("%c",*(ptr+i-1));
		--i;
	}
	

}