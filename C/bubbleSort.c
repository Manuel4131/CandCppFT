#include <stdio.h>

void bubbleSort(int *arr, int arrLength); 
void swap(int *a, int *b);
void printArr(int *arr, int arrLength); 

int main()
{
int array[]={1, 2, 3, 4, 5, 6}; 
printf("Before bubble sort:\n"); 
printArr(array, 6); 

printf("After bubble sort: \n"); 
bubbleSort(array, 6); 
printArr(array, 6);
 
return 0; 
}
void bubbleSort(int *arr, int arrLength)
{
	int i= arrLength - 1; 
	for(; i > 0 ;i--)
	{
		for(int j= 0; j <= i -1 ; j++)
		{
			if(arr[j] < arr[j+1])
			swap(arr+j, arr+j+1); 
		}
	}
}
void swap(int *a, int *b)
{
	*a= *a ^ *b; 
	*b= *a ^ *b; 
	*a= *a ^ *b; 
}

void printArr(int *arr, int arrLength)
{
	for(int i=0; i < arrLength;i++)
	{
		printf("%d ", *(arr+i) );
	}
	printf("\n"); 
} 
