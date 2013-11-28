#include <stdio.h>

void reverseStr(char *originStr);
int main()
{
char a_str[]= {"Hello, World."};
reverseStr(a_str);
printf("After a string is reversed, you got: %s\n", a_str);
return 0; 
}
void reverseStr(char *originStr)
{
char *head= originStr;
char *end= originStr;
int strLength= strlen(originStr);
printf("string length is %d", strLength);
//move end ptr to the end of the string. 
	for(int i= 0; i < strLength - 1; i++)
	{
		end++; 
	}
printf("\n string length derived by ptr diff is: %d", end-head+1);

//XOR swap
	while(head < end)
	{
		*head= *head ^ *end;
		*end= *head ^ *end;
		*head= *head ^ *end;
		head++;
		end--; 
	}

}
