#include <stdio.h>
#include "STD_TYPES.h"

typedef struct {
	u8 id;
	u16 Math, Language, Physics, Chemistry;
}Student;

void main()
{
	u8 id,found = 0;
	Student arr[1];
	for(u8 i=0;i<1;++i)
	{
		printf("please enter student ID: ");
		fflush(stdin);fflush(stdout);
		scanf("%u",&(arr[i].id));
		printf("please enter student Chemistry grade: ");
		fflush(stdin);fflush(stdout);
		scanf("%u",&(arr[i].Chemistry));
		printf("please enter student Physics grade: ");
		fflush(stdin);fflush(stdout);
		scanf("%u",&(arr[i].Physics));
		printf("please enter student Math grade: ");
		fflush(stdin);fflush(stdout);
		scanf("%u",&(arr[i].Math));
		printf("please enter student Language grade: ");
		fflush(stdin);fflush(stdout);
		scanf("%u",&(arr[i].Language));
	}
	
	printf("Please enter the id to be searched :");
	fflush(stdin);fflush(stdout);
	scanf("%u",&id);
	
	for(u8 i=0;i<1;++i)
	{
		if(id == (arr[i].id))
		{
			printf("Chemistry grade : %u\n",arr[i].Chemistry);
			printf("Physics grade : %u\n",arr[i].Physics);
			printf("Language grade : %u\n",arr[i].Language);
			printf("Math grade : %u\n",arr[i].Math);
			found = 1;
			break;
		}
	}
	if(!found) printf("Wrong ID!");
}