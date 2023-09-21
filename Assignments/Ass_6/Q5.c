#include <stdio.h>
#include "STD_TYPES.h"

void main()
{
	s8 i=0,str[10];
	s8 *ptr = str;
	printf("Enter a string: ");
	gets(str);
	while(*(ptr+i) != '\0')
	{
		++i;
	}
	printf("The legth of the array = %d",i);
}