#include "rect.hpp"
#include <vector>
#include <cstddef>



Rect::Rect(int id)
{
	this-> id= id; 
	this-> rectPtr=  NULL;  
}


int Rect::getId()
{
	return this->id; 	
}
