#include <stdio.h>
#include <math.h>
//#include <cstddef.h>

void reverseString(char *a,char *b);
char * convert(int integer); 
//We have an integer like: 4321, and now we need a string "4321".

int main()
{
int integer= 0; 
char *aString= NULL; 
printf("Enter the integer:\n");
scanf("%d", &integer); 

aString= convert(integer);

printf("The string is: %s\n", aString); 

return -1; 
}

char *convert(int integer)
{
int copy= integer; 
int red= 0; 
char c= ' ';
int divisor= 10,memSpace= 1, pos= 0;
char *stringPtr= NULL; 
//Get the length of the string. 
	while(copy / divisor >= 10)
	{
		divisor= pow(10, ++memSpace); 		
	}
	stringPtr= (char *)malloc(sizeof(char) * (memSpace+1 + 1)); // The first adding one is because of the logic
								//analysis, and the other is for '\0';

//convert each digit to char, assiging it to the correct position. 
	while(copy >= 10)
	{
		red= copy % 10; 
		copy /= 10; 
		c= red + '0';
		stringPtr[pos]= c; 
		pos++;
	}
		
		stringPtr[pos]= copy + '0';
stringPtr[pos+1]= '\0';
//reverse the string:
		reverseString(stringPtr,  stringPtr +strlen(stringPtr) - 1 ); 	
		
return stringPtr; 
}

void reverseString(char *a,char *b)
{
char temp= ' ';
	while(a < b)
	{
		temp= *a;
		*a= *b;
		*b= temp; 
		a++; b--; 
	}
}
