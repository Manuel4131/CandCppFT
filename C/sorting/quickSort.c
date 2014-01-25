#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char *a, char *b);
void quicksort(char *data, char * left,char * right );
void printArr(char *arr, int arrLength );
int main()
{

char data[]="4321";
printf("Before sorting:\n");
printArr(data, strlen(data) );
quicksort(data, data, data + strlen(data)-1 );
printf("After sorting:\n");
printArr(data, strlen(data));


return 0;
}
//Ascending order.
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
