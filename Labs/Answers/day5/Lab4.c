#include <stdio.h>
#include <string.h>

void main()
{
	int i=0,c;
	char str[10];
	printf("Please Enter a string : ");
	scanf("%s",str);
	while(str[i] != '\0')
	{
		if(str[i]<97) //if(str[i]>='A' && str[i]<='Z')
			str[i]+=32;
		++i;
	}
	
	printf("After converting: %s",str);
	
}