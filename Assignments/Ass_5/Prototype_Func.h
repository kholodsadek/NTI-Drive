#ifndef PROTOTYPE_FUNC_H_
#define PROTOTYPE_FUNC_H_

int fib(int n);
void swap(int *a,int *b);
void selection_sort(int arr[],int size);
void bubble_sort(int arr[],int size);
int linearSearch(int arr[],int size,int key);
int binarySearch(int arr[], int left, int right, int target); //using while
int binarySearchwRec(int arr[], int left, int right, int target); ////using recursive
void print_array(int arr[],int size);


#endif //PROTOTYPE_FUNC_H_