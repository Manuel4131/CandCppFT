#include <stdio.h>
#include <string.h>

int main()
{
  char arr[]= "Hello!";
  char copiedStr[10];

  strcpy(copiedStr, arr); 

  printf("The size and length of copiedStr are: %d , %d", sizeof(copiedStr), 
strlen(copiedStr) );

printf("character-> %c", copiedStr[6]);
return 0;
}
