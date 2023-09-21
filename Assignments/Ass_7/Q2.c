#include <stdio.h>

typedef struct complex{
	float real_num;
	float imaginary_num;
}Complex;

void add_two_complex(Complex n1,Complex n2)
{
	float real = n1.real_num + n2.real_num;
	float imag = n1.imaginary_num + n2.imaginary_num;
	printf("Sum = %0.1f + %0.1fi",real,imag);
}

void main()
{
	Complex num1,num2;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary part respectively:\n");
	scanf("%f%f",&num1.real_num,&num1.imaginary_num);
	printf("\n");
	printf("For 2nd complex number\n");
	printf("Enter real and imaginary part respectively:\n");
	scanf("%f%f",&num2.real_num,&num2.imaginary_num);
	
	add_two_complex(num1,num2);
}
