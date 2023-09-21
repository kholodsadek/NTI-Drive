#include <stdio.h>

int main()
{
	int grade;
	printf("Please Enter Grade number: ");
	scanf("%d",&grade);
	if(grade >= 0 && grade < 50)
	{
		printf("Your Rating is Failed");
	}
	else if(grade >= 50 && grade < 65)
	{
		printf("Your Rating is Normal");
	}
	else if(grade >= 65 && grade < 75)
	{
		printf("Your Rating is Good");
	}
	else if(grade >= 75 && grade < 85)
	{
		printf("Your Rating is Very Good");
	}
	else if(grade >= 85)
	{
		printf("Your Rating is Excellent");
	}
}