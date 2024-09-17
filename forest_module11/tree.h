#pragma once
#include <string>

#include "types.h"
class Tree
{
public:
	//Default Constructor 
	Tree();
	//Constructor with parameter
	//@param treetype - species of tree
	Tree(TreeType treetype);
	//Destructor
	~Tree();
	//Virtual function 
	virtual void wind()=0;
	
private:
	TreeType treetype;
	



};

