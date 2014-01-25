#include <iostream>
#include <stack>

int main()
{
  std::stack<int> stack;
  std::stack<int> stack2; 

//push()
	for(int data= 0;  data <= 10 ;data+=2)
	{
		stack.push(data);
	}
//size()		
		std::cout<<"stack number is: "<< stack.size() <<"\n";

	std::cout<<"Pop out element(s)"<<"\n"; 

//The method to view the elements onto the stack.

//stack.pop() won't return the element. Howeve, the stack.top() method can indicate the 
// toppest element onto the stack. 
	
	while( stack.size() > 0 )
	{
		std::cout<< stack.top() << "	";
		stack.pop(); 
	}
	
	std::cout<<"stack size is : " << stack.size()<<"\n";

	for(int i= 0; i < 8;i++ )
	{
		stack2.push( i ); 
	}

	
	std::cout<<"stack2 size is : " << stack2.size()<<"\n";
// assingment operator '= ' has already be overloaded. 
	std::cout<<"Assign stack2 to stack."<<"\n";
	stack= stack2; 
	
	std::cout<<"View the elements in stack: "<<"\n";

	while( stack.size() > 0 )
	{
		std::cout<< stack.top() << "	";
		stack.pop(); 
	}
	
	std::cout<<"stack2 size is : " << stack2.size()<<"\n";
	std::cout<< "Clear the stack2: "<< "\n";
	
//Use stack.empty()
	while( !stack2.empty() ) stack2.pop(); 
	
	std::cout<<"stack2 size is : " << stack2.size()<<"\n";
}



