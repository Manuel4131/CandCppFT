#include <iostream>
#include <string>

int main()
{
std::string myFavor("Banana");
std::string guessStr;

std::cout<<"Guess my favorite fruit:: "<<"\n";
std::cin>>guessStr;

	while( myFavor.compare(guessStr) != 0 )
	{
		std::cin>>guessStr;
	}

return -1; 
}
