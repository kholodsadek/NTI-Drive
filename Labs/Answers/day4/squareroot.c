#include <stdio.h>
#include <math.h>

void main()
{
	float num;
	printf("Enter number: ");
	scanf("%f",&num);
	printf("Square root of %0.2f = %0.2f",num,sqrt(num));
	//printf("%.2lf\n",sqrt(25));// return 5 
	//printf("%d\n",abs(-5));  // return 5 
	//printf("%.2lf\n",fabs(-5.5));// return 5.5
	//printf("%.2lf\n",fmod(10.0 , 3.0));
}