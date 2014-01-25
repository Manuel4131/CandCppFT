#include <iostream>
#include <stack>
#include <vector>
#include "rect.hpp"	//why don't we have to include rect.cpp. Compiler reason required. 
			//Pre-loading knowledge. 
			//Remember the syntax && coding behavior, please. 

std::vector< std::vector<Rect> > graph(8); 

void updateStack(std::vector< Rect > *visitSeq,int pos, std::stack<Rect> *stack);

void printOneVector(std::vector< Rect > *ptr );

int main()
{
  std::stack<Rect> stack;

  std::vector< Rect > visitSeq; 

//Create the graph:
	for(int i=0 ; i < 8; i++)
	{
		std::vector<Rect> vecPtr;//= new std::vector<Rect>; 
		
		graph.push_back( vecPtr ); 
	}
	
	std::vector<Rect> rectVec;
	Rect * rectPtr;
	for(unsigned int i=0; i< 8 ;i++)
	{
		//Rect* rectPtr=new Rect( i ); 
		Rect rectPtr(i); 
		rectVec.push_back( rectPtr ); 
	}
		
//upda
	graph.at(0).push_back( rectVec.at(1) ); 
	graph.at(0).push_back( rectVec.at(3) ); 
//	std::cout<<graph.at(0).at(0).getId()<<"&&"<< graph[0 ][1].getId();

	graph[0].push_back( rectVec.at(4) ); 
	graph[0].push_back( rectVec.at(5) ); 

	
	graph.at(1).push_back( rectVec.at(6) ); 
	graph.at(3).push_back( rectVec.at(2) ); 
	graph.at(4).push_back( rectVec.at(2) ); 
	graph.at(5).push_back( rectVec.at(7) ); 
//std::cout<< graph[4][0].getId() << graph[0][2].getId(); 
//Depth first search.
	stack.push( rectVec[0] );
	Rect *stackTop=0;
	
	while( !stack.empty() ) 
	{
		stackTop= &stack.top(); 	
		visitSeq.push_back( *stackTop);
		stack.pop();
		updateStack( &visitSeq , stackTop->getId(), &stack ); 
	}
	printOneVector( &visitSeq); 

}

void printOneVector(std::vector< Rect > *ptr )
{
	for(unsigned int i= 0; i < ptr-> size(); i++)
	{
		std::cout<< ptr->at(i).getId() <<" "; 
	}
}


void updateStack(std::vector< Rect > *visitSeq,int pos, std::stack<Rect> *stack)
{
	if(visitSeq == 0) 
	{
		std::cout<<"ERROR "<<"\n"; 
		return; 
	}

	int count= 0;
	Rect *cmpdRectPtr= 0;
	Rect *cmpRectPtr= 0;  
//Neighbor of a node:
	
	for(unsigned int i= 0; i < graph[ pos ].size() ; i++ )
	{
		cmpdRectPtr= &graph[pos][i]; 

		for(unsigned int j= 0; j < visitSeq->size() ; j++ )
		{
			if( cmpdRectPtr->getId()!= visitSeq->at(j).getId() )
			{
				count++;
			}
			else
			{
				break; 	
			}
		}
		if(count == visitSeq->size() ) 
		{
			stack->push( *cmpdRectPtr ); 
		}
		count= 0; 
	}
}
//Unfamiliar with syntax
// Meaning && Syntax Aspect!!!

// You must read the text book to remeber the knowledge you have forgot && 
//READ WHAT THE CODE SHOULD BE CODED!!!! DON"T Create yourself!!:ddw
