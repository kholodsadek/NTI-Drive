#include <stdio.h>

void main()
{
	int i,product = 1;
	for(i=1;i<=15;++i)
	{
		if(i%2 != 0)
			product *= i;
	}
	printf("The product of the odd integers from 1 to 15 = %d",product);
}