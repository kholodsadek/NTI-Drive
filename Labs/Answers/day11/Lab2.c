#include <stdio.h>
#include <stdlib.h> // dynamic memory allocation library 
#include "STD_TYPES.h"

#define NAMESIZE 20

typedef struct
{
	u32 ID;
	u8 name[NAMESIZE];
}Student_t;


void main(void){
	
	u32 size,i;
	printf("Please Enter the number of students: ");
	scanf("%d",&size);
	Student_t *ptr = (Student_t*)calloc(size , sizeof(Student_t));
	if(ptr == NULL)
	{
		printf("Memory is Full\n");
	}
	else{
		for(i=0;i<size;i++)
		{
			printf("student %d \n",i);
			printf("Name: ");
			fflush(stdin);
			gets(ptr[i].name);
			printf("ID:");
			fflush(stdin);
			scanf("%d",&ptr[i].ID);
		}
		printf("you entered\n");
		printf("ID\tname\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t%s\n",ptr[i].ID,ptr[i].name);
		}
		free(ptr);
	}//else not null
	
}