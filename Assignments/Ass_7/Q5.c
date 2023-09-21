#include <stdio.h>

union family_name{
	char first_name[30];
	char last_name[30];
}f;

void main()
{
	gets(f.first_name);
	printf("Last Name : %s\n",f.first_name);
	printf("Size of Union Family Name is : %d",sizeof(f));
}