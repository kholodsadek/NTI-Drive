#include <stdio.h>

int qualityPoints(int stuAvg);

void main()
{
	int stuAvg;
	printf("Enter student average: ");
	scanf("%d",&stuAvg);
	printf("His quality Points is %d",qualityPoints(stuAvg));
}

int qualityPoints(int stuAvg)
{
	if(stuAvg >= 90 && stuAvg <= 100)
		return 4;
	else if(stuAvg >= 80 && stuAvg <= 89)
		return 3;
	else if(stuAvg >= 70 && stuAvg <= 79)
		return 2;
	else if(stuAvg >= 60 && stuAvg <= 69)
		return 1;
	else
		return 0;
}