#include <stdio.h>

void printArr(int *arr,int length);
void swap(int *a, int *b);
int main()
{

int arr[10]= {-3,7, 1, 5, 9, -11, -13, 11, 13, -5};
int length= 10; 
printArr(arr, length);

//Bubble Sort
	for(int i=0; i< length;i++)
	{
		for(int j= 0; j< length -1; j++)
		{
			if(arr[j] > arr[j+1])
			swap( &arr[j], &arr[j+ 1] );
		}
	}
printArr(arr, length);
return -1; 
}

void swap(int *a, int *b)
{
	*a= *a ^ *b;
	*b= *a ^ *b;
	*a= *a ^ *b;
}

void printArr(int *arr, int length)
{
	for(int i= 0; i< length ; i++)
	{
		printf(" %d ", *(arr + i) );
	}
	printf("\n");
}
