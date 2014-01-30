#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void swap(char *a, char *b);
void swap(int *a, int *b);

//void quicksort(int *array, char * left,char * right );
void printArr(int *arr, int arrLength );

void quickSort(int *array, int leftInd, int rightInd);
int partition(int *arr, int left, int right);

int main()
{
int data[]={7,5,3,4,1,2,6};
printf("Before sorting:\n");
printArr(data, 7 );

printf("After sorting:\n");
quickSort(data, 0, 6); 		//Since I have no idea about the length of a integer array. 
printArr(data, 7);


return 0;
}

//Ascending order.


void quickSort(int *array, int leftInd, int rightInd)
{
//This condition is critical. We have to sort elements as we have at least 2 elements.
//So if lefInd is equal or larger than rightInd, it means that less than one element remains.  
	if(leftInd < rightInd)
	{	
		int pivotInd= partition(array, leftInd, rightInd); 
		quickSort(array, leftInd , pivotInd -1 ); 
		quickSort(array, pivotInd +1 , rightInd ); 
	}
}	

/**
* return value: Pivot's index.
*/
int partition(int *arr, int left, int right)
{
	if (arr== NULL) return -1; 			//Guard.
	int pivot= arr[right];
	int i= left, j= right -1; 
//Swap value. 
	for(;;)
	{
		while(i <= right && arr[i] < pivot) i++;
		while(j >= left  && arr[j] > pivot) j--;
	 	if(i < j)
		{
			swap(&arr[i], &arr[j]); 
			i++; j--;
		}
		else
		{
			break; 
		}

	}
			
//Set pivot position. 
		swap( &arr[i], &arr[right]); 	
//Return pivot index.
		return i; 
}

/**
*  Why XOR swap will slow down the exection speed. 
*/
void swap(int *a, int *b)
{
	int temp= 0;

	temp= *a; 
	*a= *b; 
	*b= temp; 
}


void printArr(int *arr, int arrLength )
{
	for(int i=0; i< arrLength;i++)
	{
		printf("%d ", *(arr+i));
	}
	printf("\n");
}




















/*
void quicksort(char* data, char *leftPtr,char * rightPtr)
{
int length= strlen(data);
printf("length is: %d", length);
char *leftMost= leftPtr;
char *rightMost= rightPtr; 
char pivot = *rightPtr; 

if(leftPtr >= rightPtr) return; 
do
{
	while( (*leftPtr < pivot) && ( leftPtr < rightMost) ){leftPtr++;}
	while( (*rightPtr > pivot) && (rightPtr > leftMost) ){rightPtr--;}

	if(leftPtr <=  rightPtr)
	{
		swap(leftPtr, rightPtr);
		leftPtr++; rightPtr--;
	}
}while(leftPtr <= rightPtr);
printArr(data, strlen(data) );
	swap(leftPtr,&pivot); 	
if(leftMost < rightPtr ) quicksort(data,leftMost ,leftPtr -1 );
if(leftPtr < rightMost ) quicksort(data,leftPtr+1 ,rightMost);
}

void swap(char *a,char *b)
{
	*a = *a ^ *b;
	*b= *a ^ *b;
	*a = *a ^ *b; 
}
void printArr(char *arr, int arrLength )
{
	for(int i=0; i< arrLength;i++)
	{
		printf("%c ", *(arr+i));
	}
	printf("\n");
}
*/
