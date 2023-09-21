#include <stdio.h>

void main()
{
	int i,n,rem,rev=0;
	printf("Enter number: ");
	scanf("%d",&n);
	i=n;
	while(i > 0)
	{
		rem = i % 10;
		rev = rev*10 + rem;
		i /= 10;
	}
	if(n==rev)
		printf("%d is palindrom",n);
	else
		printf("%d is not palindrom",n);
}