#include <stdio.h>


void printArr(int *arr, int strLength);

void swap(int *a, int *b);

void bubbleSort(int *arr, int strLeng);


int main()
{
int array[]= {7,6,5,4,3,2,1}; 

printf("b:\n"); 
printArr(array, 7); 

bubbleSort(array, 7); 
printf("A:\n");

printArr(array, 7); 
return 0; 
}

void bubbleSort(int *arr, int strLeng)
{
int target= 0; 
	for(int i= 0; i < strLeng; i ++)
	{
		target= arr[ i ]; 	
		for(int j = i+1; j < strLeng ; j++)
		{
			if(arr[j] < arr[i])
			 swap(&arr[j], &arr[i]);
		}

	}

}

void swap(int *a, int *b)
{
	*a= *a^ *b;
	*b= *a^ *b;
	*a= *a^ *b;

}

void printArr(int *arr, int strLength)
{
	for(int i =0; i < strLength;i++)
	{
		printf("%d ", arr[i]); 
	}
	printf("\n"); 
}
