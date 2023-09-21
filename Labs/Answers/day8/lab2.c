#include <stdio.h>
#include "STD_TYPES.h"

typedef struct employee{
	 u32 salary, bonus, ded;
}emp;

void main()
{
	u32 i;
	emp Ahmed,Amr,Waleed;
	printf("Enter Ahmed Salary: ");
	scanf("%d",&(Ahmed.salary));
	printf("Enter Ahmed Bonus: ");
	scanf("%d",&(Ahmed.bonus));
	printf("Enter Ahmed Deduction: ");
	scanf("%d",&(Ahmed.ded));
	
	printf("Enter Amr Salary: ");
	scanf("%d",&(Amr.salary));
	printf("Enter Amr Bonus: ");
	scanf("%d",&(Amr.bonus));
	printf("Enter Ahmed Deduction: ");
	scanf("%d",&(Amr.ded));
	
	printf("Enter Waleed Salary: ");
	scanf("%d",&(Waleed.salary));
	printf("Enter Waleed Bonus: ");
	scanf("%d",&(Waleed.bonus));
	printf("Enter Waleed Deduction: ");
	scanf("%d",&(Waleed.ded));
	printf("The value Needed is %d",Ahmed.salary+Amr.salary+Waleed.salary+Ahmed.bonus+Amr.bonus+Waleed.bonus-Ahmed.ded-Amr.ded-Waleed.ded);
}