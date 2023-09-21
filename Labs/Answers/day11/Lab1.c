#include <stdio.h>
#include <stdlib.h> // dynamic memory allocation library 
#include "STD_TYPES.h"

void main(void)
{
	u32 size,i;
	printf("Please Enter Size: ");
	scanf("%d",&size);
	u32 *ptr = (u32*)malloc(size * sizeof(u32)); //allocatio (garbage)
	if(ptr == NULL)
	{
		printf("Memory is Full\n");
	}
	else{
		for(i=0;i<size;i++)
		{
			printf("Enter element %d:",i);
			scanf("%d",&ptr[i]);
		}
		printf("You entered \n");
		for(i=0;i<size;i++)
		{
			printf(" Element %d = %d , &=%d\n",i,ptr[i],&ptr[i]); //ptr[i]==> element, &ptr[i]==> address of the element
			//printf(" Element %d = %d , &=%d\n",i,*(ptr+i),(ptr+i));
			//printf(" Element %d = %d , &=%d\n",i,*ptr,ptr); /* do not use ? -> base address (starting point will change) */
			//ptr++; // step = 4 bytes
		}
		//after printing
		free(ptr);
		for(i=0;i<size;i++) 
		{
			printf(" Element %d = %d ,&=%d\n",i,ptr[i],&ptr[i]);//ptr is dangling here /* will be garbage here */
		}
	} // else is npot full
}