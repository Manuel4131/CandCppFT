#include <stdio.h>
void printArr(int *arr, int arrLength);
void siftdown(int *array, int startInd, int lastEleInd);
void heapify(int * array, int arraylength);
void heapsort(int *array, int arraylength);
void SWAP(int *a, int *b);

int main()
{
int array[]= {1,3,5,7,2,4,6,8};
printf("Before sorting:\n");
printArr(array, 8);

printf("After sorting:\n"); 
heapsort(array, 8); 
printArr(array, 8);

return 1; 
}

/**
* array: pointer to an integer array. 
* startInd: The index of the element which is going to siftdown. 
* lastEleInd: The index of the last element. 
*/
void siftdown(int *array, int startInd, int lastEleInd)
{
int root= startInd; 
int swap= 0; int child= 0; 
	while(root* 2 + 1 <= lastEleInd)
	{
		swap= root; 
		child= root * 2 + 1; 
		if(array[swap] < array[child])
			swap= child;
		if(child + 1 <= lastEleInd && array[child + 1]> array[swap])
			swap= child + 1; 
		if(swap != root)
		{
			SWAP( array+root, array + swap); 
			root= swap;
		}
		else
			return; 
	}
}

/**
* array: pointer to an integer array.
* arraylength: the length of the input array.
*/
void heapify(int * array, int arraylength)
{
if(array==NULL||arraylength<=1) return; 
	for(int parent=(arraylength -2)/2; parent >= 0 ;parent-- )
	{
		siftdown(array, parent, arraylength - 1); 
	}
}
/**
* Literally exchange the root element with the last element in the heap.
* If it's a max-heap, the sorted array will be ascending order. (Larger numbers will
* be put in the later part of the array. 
* @param array: A integer pointer to an array. 
 	 arraylength: The length of the input array. 
*/
void heapsort(int *array, int arraylength)
{
if( array== NULL|| arraylength <= 1) return; 

	heapify(array, arraylength);
	int endind= arraylength -1; 

	while(endind > 0)
	{
		SWAP(array, array+ endind); 
		endind--; 
		siftdown(array, 0, endind); 
	}
}

void SWAP(int *a, int *b)
{
	*a= *a ^ *b;
	*b= *a ^ *b;
	*a= *a ^ *b; 	
}
void printArr(int *arr, int arrLength)
{
	for(int i = 0; i < arrLength ; i++)
	{
		printf("%d ", *(arr+i));
	}
	printf("\n");
}
