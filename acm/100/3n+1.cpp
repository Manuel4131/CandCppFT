#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main()
{
stringstream ss;
int start(0);
int end(0);
string tmp;
	while(std::getline(std::cin,tmp))
	{
		ss.str(tmp);
		ss>>start>>end;
		if(start > end)
		{
			int tmp(0);
			tmp= start;
			start= end;
			end= tmp;
		}
		int max(0);
		for(int i=start;i<=end;i++)
		{
			int count(1);
			int val= i; 
			while(val!=1)
			{
				count++;
				if(val%2==1) val= val * 3 +1;
				else	val/=2;
			}
			if(count>max) max= count;
		}
		std::cout<<start<<" "<<end<<" "<<max<<'\n';
		ss.clear();
	}
return 0;
}
