#include <stdio.h>
#include <iostream>
#include <algorithm>

void printArr(int *intArr, int length);

void swap(int *a, int *b);

using namespace std; 
int main()

{

int intArr[10]={-16,-1, -8, -6, -9, -3, -11, -12, -7, 14};

int oddNumbers= 10/2;

int count= 0;

int *oddPtr= intArr;

int *evenPtr= intArr + oddNumbers;

bool swap1= false;

bool swap2= false;

/* Module 1*/

while(oddPtr < intArr + oddNumbers)      // Time: O(n)  Space: O( 1 )

{

   if( *oddPtr % 2 == 0)  swap1= true; else  oddPtr++;

   if( *evenPtr % 2 != 0) swap2= true; else  evenPtr++;

   if(swap1 && swap2)    
   {
       swap(*oddPtr, *evenPtr);
       oddPtr++; evenPtr++;
   }

	swap1= false; swap2= false;
}

//Sorting odd and even part of the string.

/*Module 2*/

/* Time: O(nlog(n)) Space: O (1) */

   std::sort(intArr, intArr + oddNumbers);

   std::sort(intArr + oddNumbers, intArr + oddNumbers*2 );

   std::reverse(intArr + oddNumbers, intArr + oddNumbers*2 );


//Interleaving.

  oddPtr= intArr + 1;

   evenPtr= intArr+ oddNumbers;

   

   while( oddPtr != evenPtr )

   {

       swap(*oddPtr, *evenPtr);

   if(oddPtr + 1 != evenPtr && *evenPtr < *oddPtr)

   {

       swap(*evenPtr, *(oddPtr + 1));

       swap(*evenPtr, *(oddPtr + 2));

   }

       oddPtr+= 2;

       evenPtr++;

   }

   cout<<"Test"<<endl;

   printArr(intArr, oddNumbers * 2);

return 0;

}

void swap(int *a, int *b)

{

   *a= *a ^ *b;

   *b= *a ^ *b;

   *a= *a ^ *b;

}


void printArr(int *intArr, int length)

{

if(intArr == NULL || length <0) return;

   for(int i= 0; i < length; i++)

   {

       cout<< *(intArr + i)<<"  ";

   }

   cout<<endl;

}


