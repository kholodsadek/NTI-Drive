#include <stdio.h>

float celsius(float fahrenheit);
float fahrenheit(float celsius);

void main()
{
	float c,f;
	for(c=0;c<=100;++c)
		printf("Celsius = %0.2f, Fahrenheit = %0.2f\n",c,fahrenheit(c));
	printf("\n");
	for(f=32;f<=212;++f)
		printf("Fahrenheit = %0.2f, Celsius = %0.2f\n",f,celsius(f));
}

float celsius(float fahrenheit)
{
	return (fahrenheit-32.0)*(0.5556);
}

float fahrenheit(float celsius)
{
	return (celsius*1.8)+32;
}