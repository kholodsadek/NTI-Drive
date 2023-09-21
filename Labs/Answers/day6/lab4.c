#include <stdio.h>

int smallestElement(int arr[],int size);

void main()
{
	int min,i,arr[10];
	printf("Enter integers 10 elements int array: ");
	for(i=0;i<10;++i){
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	min = smallestElement(arr,10);
	printf("The smallest array element is : %d",min);
}
int smallestElement(int arr[],int size)
{
	int i,min=arr[0];
	for(i=0;i<size;++i)
		if(min > arr[i])
			min = arr[i];
	return min;
}

