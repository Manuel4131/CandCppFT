#include <iostream>
#include <vector>
using namespace std;

void mergeSort(std::vector<int> &v);
void printVec(const std::vector<int> &v);
int main()
{
int arr[12]= {1,5,7,9, 13,15,19,18,16,14,24,29};
std::vector<int> v(arr, arr+ 12);
printVec(v);
mergeSort(v);
std::cout<<"After mergeSort:"<< std::endl;
printVec(v);
return 0;
}

void printVec(const std::vector<int> &v)
{
	for(int i=0;i< v.size();i++)
	{
		std::cout<< v.at(i) <<" ";
	}	
	std::cout<<std::endl;
}

void mergeSort(std::vector<int> &v)
{
	if(v.size() > 1)
	{
		int mid= v.size()/2;
		
		std::vector<int> leftVec(v.begin(), v.begin() + mid);
//		printVec(leftVec);			
 
		std::vector<int> rightVec(v.begin() + mid , v.end()); 
//		printVec(rightVec);
			
		mergeSort(leftVec);
		mergeSort(rightVec);
		int i(0),j(0),k(0);
		
		while(i < leftVec.size() && j < rightVec.size())
		{
			if(leftVec.at(i) <= rightVec.at(j))
			{
				v[k]= leftVec.at(i);
				i++; k++;
			}
			else 
			{
				v[k]= rightVec.at(j);
				j++; k++;
			}
		}
		while(j < rightVec.size() )
		{
			v[k]= rightVec[j];	
				j++; k++;
		}
		while(i < leftVec.size())
		{
			v[k]= leftVec[i];
			i++; k++;
		}
	}
else return;	
}
