#include "Prototype_Func.h"

int fib(int n){
	if(n < 2)
		return n;
	else
		return fib(n-1) + fib(n-2);
}

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int arr[],int size)
{
	int i,j,min;
	for(i=0;i<size-1;i++)
	{
		min = i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j] > arr[min])
				min = j;
		}
		swap(&arr[min],&arr[i]);
	}
}

void bubble_sort(int arr[],int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j] > arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}

int linearSearch(int arr[],int size,int key)
{
	int i;
	for(i=0;i<size;i++)
		if(key==arr[i])
			return i;
	return 0;
}

//using while
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
            return mid;
        
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Element not found
}

//using recursive
int binarySearchwRec(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
            return mid;
        
        if (arr[mid] < target)
            return binarySearch(arr, mid + 1, right, target);
        
        return binarySearch(arr, left, mid - 1, target);
    }

    return -1; // Element not found
}

void print_array(int arr[],int size)
{
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}