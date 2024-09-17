#include "forest.h"
class Tree;

void Forest::growUp(const Tree& tree )
{
	trees_vec.push_back(tree);

}

Forest::Forest()
{
}


Forest::~Forest()
{
}

void Forest::cutAll()
{
	trees_vec.clear();
	
}

Forest Forest::operator+(const Forest& other )
{
	Forest newForest;
	newForest.trees_vec = trees_vec;
	newForest.trees_vec.insert(newForest.trees_vec.end(), other.trees_vec.begin(), other.trees_vec.end());
	return newForest;
	
}

void Forest::wind() const
{
	for (const auto& tree : trees_vec) {
		tree.wind();
	}
}








