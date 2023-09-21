#include <stdio.h>

void summmationMultiplication(int *x,int *y,int *sum,int *multi);

void main()
{
	int n1,n2,s,m;
	printf("Please Enter Value 1: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n1);
	printf("Please Enter Value 2: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n2);
	printf("\n");
	summmationMultiplication(&n1,&n2,&s,&m);
	printf("The result of Summation is: %d\n",s);
	printf("The result of multiplication is: %d",m);
}
void summmationMultiplication(int *x,int *y,int *sum,int *multi)
{
	*sum = *x + *y;
	*multi = *x * *y;
}