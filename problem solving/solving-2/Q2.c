#include <stdio.h>
#include "STD_TYPES.h"

#define PRINTARRAY(arr,size) printf("[ "); for(u32 i=0;i<size;i++) {printf("%d",arr[i]); if (i < size - 1) printf(", ");} printf(" ]")
	
void main(void)
{
	u32 arr[10],size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	for (u32 i=0;i<size;i++){
		printf("Enter element %d: ",i);
		scanf("%d",&arr[i]);
	}
	PRINTARRAY(arr,size);
}
