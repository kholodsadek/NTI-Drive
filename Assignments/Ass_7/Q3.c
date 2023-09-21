#include <stdio.h>

typedef struct information{
	char name[10];
	int id;
	float grade;
}Information;

void store_in_struct(Information info[3])
{
	int i,len = 3;
	for(i=1;i<=len;++i)
	{
		printf("Please Enter Name, Id and Grade for Student Number %d :",i);
		fflush(stdin);fflush(stdout);
		scanf("%s %d %f",&info[i].name,&info[i].id,&info[i].grade);
	}
}

void print_from_struct(Information info[3])
{
	int i,len = 3;
	for(int i=1;i<=len;++i)
	{
		printf("Student Number %d Information:\n",i);
		printf("Name = %s\n",info[i].name);
		printf("Id = %d\n",info[i].id);
		printf("Grade = %f\n",info[i].grade);
	}
}

void main()
{
	Information info[3];
	store_in_struct(info);
	print_from_struct(info);
}
