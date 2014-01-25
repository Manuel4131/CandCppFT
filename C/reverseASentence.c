#include <stdio.h>

void printArr(char *str); 
void reverseASentence(char *string);
void swap(char *a, char *b);

void reverseAWord(char *start, char * end);

int main()
{

char testString[]="This is a book";

printf("Before reversing the stirng: \n");  
printArr(testString); 

reverseASentence(testString); 
printf("After reversing the stirng: \n");  
printArr(testString); 

}


void reverseASentence(char *string)
{
//Reverse the whole fucking sentence. 
	int strLen= strlen(string); 	
//	printf("strLen is %d", strLen); 
	char *end= string;
	char *start= string; 
	char *traversePtr= string; 
	end= end + (strLen-1);  
//	printf("Last char is: %c", *end); 
	reverseAWord(start, end);
//Reverse fucking words which are seperated by blanks.
	
	int count= 0; 
	int singleWordLen= 0; 
	while(count < strLen)
	{
		if( *(traversePtr+1) ==' ' || *(traversePtr+1) == '\0' )
		{
			reverseAWord(traversePtr - singleWordLen, traversePtr); 
			traversePtr++; 
			singleWordLen= 0;
		}
		else
		{
			singleWordLen++;
		}
	     	count++; 
		traversePtr++; 

	}
}

void reverseAWord(char *start, char * end)
{
	while(start < end)	
	{
		swap(start, end);
		start++;
		end--;  
	}
}

void swap(char *a, char *b)
{
	*a= *a ^ *b;
	*b= *a ^ *b;
	*a= *a ^ *b;
}


void printArr(char *str)
{
	int strLen= strlen(str); 
	
	for(int i= 0; i < strLen ; i++)
	{
		printf("%c", *( str + i) ); 
	}
		printf("\n"); 
} 
