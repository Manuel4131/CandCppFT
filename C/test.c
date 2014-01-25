#include <stdlib.h>
#include <stdio.h>

int getStrlen(char *aString);

int main()
{
  char array[]= "abc";
  char inputStr[100];
printf("First alphabet would be: %c", *array);
printf("Size of an array is: %d. Sizeof an element is: %d", sizeof(array), sizeof(array[0]) );
printf("String length is: %d\n", strlen(array) );
printf("getStrlen func, strLen is %d\n", getStrlen(array) );

printf("Input a string");
fgets(inputStr,100,stdin);
printf("The inputStr is %s", inputStr);
return 0; 
}

int getStrlen(char *aString)
{
if(*aString == NULL) return -1; 
char *head= aString;
int strlen=0;
	while( *head != '\0')
	{
                head++;
		strlen++;
	}

head= NULL;
return strlen; 
}

/*
Summary: 
1. To get the length of a string: 
	1-1.strlen(char *);
	1-2.getStrlen function	
	1-3.sizeof doensn't work as what is expected. 
2. To get a string containing white spaces, you can use fgets(char *, MAX_Length, stdin);
*/
