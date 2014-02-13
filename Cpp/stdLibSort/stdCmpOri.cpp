#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
void printVec(std::vector<std::string> &v);

bool cmp(const std::string &a, const std::string &b );
int main()
{
std::string a("apple"); 
std::string b("banana"); 
std::string c("orange"); 
std::vector<std::string> fruits;

fruits.push_back(c);

fruits.push_back(a);
fruits.push_back(b);

printVec(fruits); 


//Sort
sort(fruits.begin(), fruits.end(), cmp); 

printVec(fruits); 

return -1; 
}

bool cmp(const std::string &a, const std::string &b )
{
//	return a.compare(b) <0;//ascending order
  	return a.compare(b) > 0; //Descending order
}

void printVec(std::vector<std::string> &v)
{
	for(unsigned int i=0 ; i < v.size() ; i ++)
	{
		std::cout<< v[ i ]<< "	";
	}
}
