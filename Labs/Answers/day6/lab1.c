#include <stdio.h>

void main()
{
	int z = 20;
	int *iptr = &z;
	printf("z before change is: %d\n",z);
	*iptr = 25;
	printf("z after change is: %d\n",z);
	printf("/***************************/\n");
	printf("*iptr = %d\n",*iptr);
	printf("iptr = %d\n",iptr);
	printf("/***************************/");
	
}