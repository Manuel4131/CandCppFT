#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main()
{
stringstream ss;
unsigned int start(0);
unsigned int end(0);
string tmp;
	while( std::getline(std::cin,tmp))
	{
	if(cin.eof())break;
		ss.str(tmp);
		ss>>start>>end;
		
		int outPutStart= start;
		int outPutEnd= end;
		if(start > end)
		{
			unsigned int tmp(0);
			tmp= start;
			start= end;
			end= tmp;
		}
		unsigned int max(0);
		for(int i=start;i<=end;i++)
		{
			unsigned int count(1);
			unsigned int val= i; 
			while(val!=1)
			{
				count++;
				if(val%2==1) val= val * 3 +1;
				else	val/=2;
			}
			if(count>max) max= count;
		}
		std::cout<<outPutStart<<" "<<outPutEnd<<" "<<max<<'\n';
		ss.clear();
	}
return 0;
}
