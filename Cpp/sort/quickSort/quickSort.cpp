#include <iostream>
#include <vector>

using namespace std;

void print(const std::vector<int> &v);
int partition(std::vector<int> &v,int left, int right);
void swap(int &a, int &b);
void quickSort(std::vector<int> &v, int left, int right );

void partition(std::vector<int> &v);
int main()
{
// quickSort
int arr[12]= {4,2,18,16,14,12,10,8,6,20,22,13};
std::vector<int> v(arr, arr + 12);
print(v);
quickSort(v, 0, v.size() -1 );
std::cout<<"After quickSort:"<<std::endl;
print(v);
return -1;
}

void quickSort(std::vector<int> &v, int left, int right )
{
	if(left < right)
	{
		int pInd= partition(v,left,right);
		quickSort(v, left, pInd -1);
		quickSort(v, pInd +1, right);
	}
return; 
}

int partition(std::vector<int> &v,int left, int right)
{
	int pivot= v.at(right);
	int i= left;
	int j= right -1;

	for(;;)
	{
		while(i <= right && v.at(i) < pivot) i++;
		while(j>=left && v.at(j) > pivot) j--;
		

		if(i < j)
		{
			swap(v.at(i), v.at(j));
			i++;
			j--;
		}
		else break;
    }
	swap(v.at(i), v.at(right));
	return i;
}

void swap(int &a, int &b)
{
    int tmp= b;
    b= a;
    a= tmp;
    return;
}

void print(const std::vector<int> &v)
{
	for(int i=0;i< v.size();i++)
	{
		std::cout<<v.at(i) <<" ";
		}
		std::cout<<std::endl;
}
