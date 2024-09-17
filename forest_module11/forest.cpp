#include "forest.h"

class Tree;



Forest::Forest()
{
}


Forest::~Forest()
{
	cutAll();
}

void Forest::growUp(Tree* tree)
{
	trees_vec.push_back(tree);
}

void Forest::cutAll()
{
	for (const auto& tree : trees_vec) {
		delete tree;
	}
	trees_vec.clear();

}

Forest Forest::operator+(const Forest& other)
{
	Forest newForest;
	newForest.trees_vec = trees_vec;
	newForest.trees_vec.insert(newForest.trees_vec.end(), other.trees_vec.begin(), other.trees_vec.end());
	return newForest;

}

void Forest::windAll()
{
	for (const auto& tree : trees_vec) {
		tree->wind();
	}
}




