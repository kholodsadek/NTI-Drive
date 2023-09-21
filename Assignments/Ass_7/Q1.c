#include <stdio.h>

typedef struct information
{
	char name[25];
	float mark;
}stu;

void main()
{
	stu stu1;
	printf("Enter Student Information:\n");
	printf("Enter Student Name: ");
	gets(stu1.name);
	printf("Enter Student Marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&stu1.mark);
	printf("\n");
	printf("Displaying Student Information:\n");
	printf("Student Name: %s\n",stu1.name);
	printf("Student Marks: %0.2f",stu1.mark);
}