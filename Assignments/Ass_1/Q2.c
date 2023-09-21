#include <stdio.h>

int main()
{
	float f,c;
	printf("Please Enter Temperature in Centigrade : ");
	scanf("%f",&c);
	f = (c * 1.8) + 32;
	printf("Temperature in Fahrenheit: %f",f);
}