#include <stdio.h>


int main()
{
char c= '3';
int n= 0;

//n= (int)(c-'0');

printf("The ASCII number of character c is: %d\n", c); 
printf("Convert the char to int\n"); 

//Get the difference, and you get the integer number. 
n= c - '0';
printf("The integer number of the char is: %d\n", n); 

return 0; 

}
