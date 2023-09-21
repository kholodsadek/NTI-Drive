#include <stdio.h>

void main()
{
	int i,j,side;
	printf("Enter the side: ");
	scanf("%d",&side);
	for(i=0;i<side;++i)
	{
		for(j=0;j<side;++j)
			printf("#");
		printf("\n");
	}
}