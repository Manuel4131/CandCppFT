#include <stdio.h>

void heapsort(int numbers[], int array_size);

void siftDown(int numbers[], int root, int bottom);
void printArr(int *array, int arrSize);
int main()
{
int numArr[]= {8, 9, 6,7 , 5, 4,3,2,1,0,-1,-3,-2,-9,-7};
printf("Before sorting:\n");
printArr(numArr, 15);

heapsort(numArr,15); 
printf("After sorting:\n");
printArr(numArr,15);

return 0;
}


void heapsort(int numbers[], int array_size)
{
  int i, temp;
/*
  for (i = (array_size / 2)-1; i >= 0; i--)
    siftDown(numbers, i, array_size);
*/
  for (i = array_size-1; i >= 1; i--)
  {
    temp = numbers[0];
    numbers[0] = numbers[i];
    numbers[i] = temp;
    siftDown(numbers, 0, i-1);
  }
}


void siftDown(int numbers[], int root, int bottom)
{
  int done, maxChild, temp;

  done = 0;
  while ((root*2 <= bottom) && (!done))
  {
    if (root*2 == bottom)
      maxChild = root * 2;
    else if (numbers[root * 2] > numbers[root * 2 + 1])
      maxChild = root * 2;
    else
      maxChild = root * 2 + 1;

    if (numbers[root] < numbers[maxChild])
    {
      temp = numbers[root];
      numbers[root] = numbers[maxChild];
      numbers[maxChild] = temp;
      root = maxChild;
    }
    else
      done = 1;
  }
}
void printArr(int *array, int arrSize)
{
	for(int i= 0; i < arrSize; i++)
	{
		printf("%d ", *(array+i) );
	}
	printf("\n");
}
