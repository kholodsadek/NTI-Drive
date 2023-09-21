#include <stdio.h>

void main()
{
	char str[25];
	int i=0;
	printf("Enter a string: ");
	scanf("%s",str);
	while(str[i] != '\0')
	{
		++i;
	}
	printf("Length of string = %d",i);
}