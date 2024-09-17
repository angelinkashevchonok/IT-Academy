#pragma once
#include<vector>
#include "tree.h"
class Forest
{
public:
	//Default Constructor
	Forest();
	//Destructor
	~Forest();
public:
	// Add tree in forest
	//@param tree 
	void growUp(Tree* tree);
	// Clean vector
	void cutAll();
	// Overloading operator +
	//@param other 
	//@return new object type Forest 
	Forest operator +(const Forest& other);
	//Print all types of trees in forest
	void windAll();

private:
	std::vector <Tree*> trees_vec;
	
	



};

