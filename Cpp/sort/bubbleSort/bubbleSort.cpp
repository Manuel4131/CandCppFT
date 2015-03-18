#include <iostream>
#include <vector>

using namespace std;

void printVec(std::vector<int> &v);
void bubbleSort(std::vector<int> &v);
void Swap(int &a,int &b);
int main()
{
int arr[]={1,2,3,7,4,8,9,5,10,6};
std::vector<int> v(arr, arr + 10);
printVec(v);
bubbleSort(v);
std::cout<<"bubble sort"<<'\n';
printVec(v);

}

void bubbleSort(std::vector<int> &v)
{
    bool swap= true;
    int i(0);
    while(swap)
    {
        swap=false;
        i++;
            for(int j=0;j < v.size() - i;j++)
            {
                if(v.at(j) > v.at(j+1))
                {
                Swap(v.at(j),v.at(j+1));
                swap=true;
                }
            }
    }

}
void Swap(int &a,int &b)
{
    int tmp= a;
    a= b;
    b= tmp;
}

void printVec(std::vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        std::cout<< v.at(i) <<" ";
    }
    std::cout<<"\n";
}
