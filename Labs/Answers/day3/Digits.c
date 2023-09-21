#include <stdio.h>

void main()
{
	int count=0,num;
	printf("Ex: ");
	scanf("%d",&num);
	while(num!=0)
	{
		count++;
		num = num/10;
	}
	printf("digit of number is %d",count);
}