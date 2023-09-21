#include <stdio.h>

void main()
{
	int i,sum=0;
	for(i=2;i<=30;++i)
	{
		if(i%2==0)
			sum +=i;
	}
	printf("The sum of the even integers from 2 to 30 = %d",sum);
}