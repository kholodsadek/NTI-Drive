#include <stdio.h>

void main()
{
	unsigned long long i,num;
	int rem,rev=0;
	printf("Ex: ");
	scanf("%lld",&num);
	i = num;
	while(i>0)
	{
		rem = i % 10;
		rev = rev*10 + rem;
		i /= 10;
		//printf("I'm in while");
	}
	printf("%lld Reverse number = %d",num,rev);
}