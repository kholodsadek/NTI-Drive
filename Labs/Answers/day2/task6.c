#include <stdio.h>

int main()
{
	float num1,num2,result;
	char op;
	printf("Please Enter an Operator (+,-,*,/): ");
	scanf("%c",&op);
	printf("Please Enter Number1: ");
	scanf("%f",&num1);
	printf("Please Enter Number2: ");
	scanf("%f",&num2);
	switch(op)
	{
		case '+': result = num1 + num2; 
		break;
		case '-': result = num1 - num2; 
		break;
		case '*': result = num1 * num2; 
		break;
		case '/': result = num1 / num2; 
		break;
		default: printf("Error!"); 
		break;
	}
	printf("%f %c %f = %f",num1,op,num2,result);
}