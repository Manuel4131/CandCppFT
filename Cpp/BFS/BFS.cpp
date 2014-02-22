#include <iostream>
#include <vector>
#include <queue>

void getAllNeighborsAndPush2Q(std::queue <int> &q, int frontNode);

bool isVisited(std::vector<int> &visitedNodes, int node);
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
std::queue <int> q;
std::vector <int> nodes;
std::vector <int> visitedNodes; 

for(int i= 0; i < 7; i++)
{
        nodes.push_back(i); 
}

q.push(nodes[0] ); 
int frontNode= 0; 
	while( !q.empty() )
	{
		frontNode= q.front(); 
		q.pop(); 
		if( isVisited( visitedNodes, frontNode) )
			continue; 
		else
		{
			getAllNeighborsAndPush2Q(q, frontNode);
			visitedNodes.push_back(frontNode);  
		}	
	}
printVector( visitedNodes); 
return -1; 
}

bool isVisited(std::vector<int> &visitedNodes, int node)
{
	for(int i= 0 ; i < visitedNodes.size() ; i++)
	{
		if(visitedNodes[ i ] == node)
			return true;
	}
	return false; 
}

void getAllNeighborsAndPush2Q(std::queue <int> &q, int frontNode)
{
	for(int i=0 ;  i < 7; i++)
	{
		if(graph[frontNode][i] == 1)
		{
			q.push(i); 
		}	
	}		
}


void printVector(std::vector <int> &v)
{
	for(int i= 0; i < v.size();i++)
	{
		std::cout<<" "<<v[i];
	}
	std::cout<<"\n";
}
