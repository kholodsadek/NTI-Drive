#include <stdio.h>

#define MAX(A,B) (A>B)

void main()
{
	int a,b;
	printf("Enter 2 numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&a,&b);
	if(MAX(a,b))
		printf("Maximum = a");
	else
		printf("Maximum = b");
}