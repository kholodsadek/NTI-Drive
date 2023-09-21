#include <stdio.h>
#include "Prototype_Func.h"

#define Question = 1

#if Question == 1
void main()
{
	int n;
	printf("Please Enter The ELement : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("Fibonacci %d is: %d",n,fib(n));
}
#endif

#if Question = 2
void main()
{
	int arr[5];
	printf("Enter the required array:\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,5);
	printf("array after descending order using selection sorting:\n");
	print_array(arr,5);
}
#endif

#if Question = 3
void main()
{
	int arr[6];
	printf("Enter the required array:\n");
	for(int i=0;i<6;i++)
		scanf("%d",&arr[i]);
	bubble_sort(arr,6);
	printf("elements are sorted without bubble sort\n");
	print_array(arr,6);
}
#endif

#if Question = 4
void main()
{
	int arr[5],n;
	printf("Enter the required array:\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element for search: ");
	scanf("%d",&n);
	if(linearSearch(arr,6,n) == 0)
		printf("Element not found in array");
	else
		printf("The element at the location: %d",linearSearch(arr,6,n));
}
#endif

#if Question = 5
void main()
{
	int arr[5],n;
	printf("Enter the required array:\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element for search: ");
	scanf("%d",&n);
	if(linearSearch(arr,6,n) == 0)
		printf("Element not found in array");
	else
		printf("The element at the location: %d",linearSearch(arr,6,n));
}
#endif

#if Question == 6
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;
    
    //int result = binarySearch(arr, 0, n - 1, target);
	int result = binarySearchwRec(arr, 0, n - 1, target);
    
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
#endif