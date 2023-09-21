#include <stdio.h>

int multiple(int a,int b);

void main()
{
	int n1,n2;
	printf("Enter 2 number : ");
	scanf("%d%d",&n1,&n2);
	int res = multiple(n1,n2);
	printf("%d",res);
}

int multiple(int a,int b)
{
	if(b%a==0)
		return 1;
	else
		return 0;
}