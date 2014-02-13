/**
* STL generic algortihm: sort object(string)
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
bool cmp(const std::string a,std:: string b);

void printVector( const std::vector<std::string> &v);
int main()
{
std::string one("Apple "); 
std::string two("Banana "); 
std::string three("Orange ");

std::vector<std::string> strings; 

strings.push_back(three); 
strings.push_back(two); 
strings.push_back(one);

sort(strings.begin(), strings.end(), cmp); 
printVector( strings);  
return -1; 
}

bool cmp(std::string a,std:: string b)
{
  return a.compare(b) < 0; 
}

void printVector(const std::vector<std::string> &v )
{
	for(unsigned int i= 0; i < v.size(); i++)
	{
		std::cout<< v[ i ] << " "; 
	}
}
