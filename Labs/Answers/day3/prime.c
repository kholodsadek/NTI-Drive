#include <stdio.h>

void main()
{
	int i,j,num1,num2,flag=0;
	printf("number 1: ");
	scanf("%d",&num1);
	printf("number 2: ");
	scanf("%d",&num2);
	
	for(i=num1;i<=num2;++i)
	{
		if(i==0 || i==1)
			flag = 1;
		for(j=2;j<=i/2;++j)
		{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag = 0)
			printf("%d ",i);
	}	
}