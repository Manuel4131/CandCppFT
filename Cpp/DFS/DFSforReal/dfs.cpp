#include <iostream>
#include <stack>
#include <vector>
void getNeighborsAndPush(std::stack <int> &s, int node);

bool isVisited(std::vector<int> &visitedNode, int node);
void printVector(std::vector <int> &v); 

int graph[][7]=
{
{0,1,1,1,0,0,0},
{1,0,0,0,0,1,0},
{1,0,0,1,1,0,1},
{1,0,1,0,1,0,0},
{0,0,1,1,0,0,1},
{0,1,0,0,0,0,0},
{0,0,1,0,1,0,0}
};

int main()
{
//Initialize a graph. 


std::stack <int> s; 
std::vector <int> nodes;
/*graph=
{
{0,1,1,1,0,0,0},
{1,0,0,0,0,1,0},
{1,0,0,1,1,0,1},
{1,0,1,0,1,0,0},
{0,0,1,1,0,0,1},
{0,1,0,0,0,0,0},
{0,0,1,0,1,0,0}
};
*/

int curNode= 0; 
std::vector <int> visitedNode; 


for(int i= 0; i < 7; i++)
{
	nodes.push_back(i); 
}
	s.push( nodes[0] ); 

	while( !s.empty() )
	{
		curNode= s.top();
		s.pop(); 
		if (isVisited(visitedNode, curNode) ) 
		continue; 
		else
		{
			getNeighborsAndPush(s, curNode); 
			visitedNode.push_back(curNode); 
			
		}
		//if the node: curNode is visited. continue
		// else  put its' all neighor nodes to stack and put it to visited[]
	}
	//std::cout<<"Size: "<< visitedNode.size(); 
printVector(visitedNode); 	
return 0;
}


void getNeighborsAndPush(std::stack <int> &s, int node)
{
	for(int i= 0; i < 7 ;i++)		//You should use vector instead of array.
	{
		if( graph[ node ][i]== 1) s.push( i ); 
		
	} 


}
bool isVisited(std::vector<int> &visitedNode, int node)
{
	for(int i=0; i < visitedNode.size();i++)	
	{
		if(node == visitedNode[i])
		return true;
	}
	return false; 
}

void printVector(std::vector <int> &v)
{
	for(int i= 0; i < v.size(); ++i)
	{	
		std::cout<<" "<< v[i];
	}

	std::cout<<'\n';
} 
