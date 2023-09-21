#include <stdio.h>

int main()
{
	int arr[10],v;
	for(int i=1;i<=10;i++)
	{
		printf("Enter Number_%d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the value to Search: ");
	scanf("%d",&v);
	for(int j=1;j<=10;j++)
	{
		if(v==arr[j])
			printf("Value is Exist at Element Number_%d\n",j);
	}
}