#include <stdio.h>

enum months {Jan=1,Feb,March,Abril,May,June,Jul,Aug,Sep,Oct,Nov,Dec};

void main()
{
	enum months mon;
	mon = Jan;
	printf("Jan = %d\n",mon);
	printf("Feb = %d\n",mon+1);
	printf("June = %d\n",mon+5);
	printf("Aug = %d\n",mon+7);
	printf("Dec = %d\n",mon+11);
} 