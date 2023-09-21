#include <stdio.h>
#include <math.h>

float roundToInteger(float num);
float roundToTenths(float num);
float roundToHundrets(float num);
float roundToThousandths(float num);
void main()
{
	float x = 9.2;
	printf("X = %0.2f\n",x);
	printf("Round To Integer = %0.2f\n",roundToInteger(x));
	printf("Round To Tenths = %0.2f\n",roundToTenths(x));
	printf("Round To Hundrets = %0.2f\n",roundToHundrets(x));
	printf("Round To Thousandths = %0.2f\n",roundToThousandths(x));
}

float roundToInteger(float num)
{
	float y;
	y = floor(num);
	return y;
}
float roundToTenths(float num)
{
	float y;
	y = floor(num*10 + .5)/10;
	return y;
}
float roundToHundrets(float num)
{
	float y;
	y = floor(num*100 + .5)/100;
	return y;
}
float roundToThousandths(float num)
{
	float y;
	y = floor(num*1000 + .5)/1000;
	return y;
}