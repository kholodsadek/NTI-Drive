#include <stdio.h>

long long convertBinary(int n);
int convertOctal(int n);

void main()
{
	int i;
	for(i=1;i<=255;++i)
	{
		printf("in deciaml = %d \t in Binary = %lld  \t in hexadecimal = %X \t in octal = %d\n",i,convertBinary(i),i,convertOctal(i));
	}
}

long long convertBinary(int n)
{
	long long bin = 0;
	int rem,i=1;
	while(n != 0)
	{
		rem = n%2;
		n /= 2;
		bin += rem*i;
		i *= 10;
	}
	return bin;
}

int convertOctal(int n)
{
	int octal = 0, i = 1;

    while (n != 0) {
        octal += (n % 8) * i;
        n /= 8;
        i *= 10;
    }

    return octal;
}