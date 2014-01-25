#include <stdio.h>


int main()
{
 char arr1[]= "gme2k";
 char *arr2[13]= {"gme2k"};
 char arr3[20]= "gme2k";
 int  intArr[10];
 printf("Sizeof the three arr declarations are: %d  %d  %d\n", sizeof(arr1), sizeof(arr2), sizeof(arr3) );
  printf("string length are separately: %d, %d\n", strlen(arr1), strlen(arr3) );
  printf("strlen(arr2): %d\n", strlen(arr2) );//why... 
  printf("sizeof intArr: %d\n", sizeof(intArr) );
return 0; 
}
