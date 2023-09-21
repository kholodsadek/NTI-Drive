#include <stdio.h>

void main()
{
	int i=0,age[15],c1=0,c2=0,c3=0;
	while(i<15)
	{
		printf("Enter the Eelement[%d]: ",i);
		scanf("%d",&age[i]);
		if(age[i] > 0 && age[i] <= 5)
			++c1;
		else if(age[i] >= 6 && age[i] <=18)
			++c2;
		else
			++c3;
		++i;
	}
	printf("Number of still a baby: %d\n",c1);
	printf("Number of Attending school: %d\n",c2);
	printf("Number of adult life: %d\n",c3);
}