#include <stdio.h>

void main()
{
	int i,tmb,j,arr[3][3],transpose[3][3];
	for(i = 0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("Enter the element[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The original matrix is...\n");
	for(i = 0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			transpose[j][i] = arr[i][j];
		}
	}
	printf("The trasnspose matrix is...\n");
	for(i = 0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d \t",transpose[i][j]);
		}
		printf("\n");
	}
}