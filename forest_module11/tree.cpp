#include "Tree.h"
#include <iostream>


Tree::Tree()
{
}

Tree::Tree(TreeType treetype): treetype(treetype)
{

	//increaseCounter(treetype);

}


Tree::~Tree()
{


}

//std::string Tree::getName() const
//{
//	return _name;
//}
//
//int Tree::getID() const
//{
//	return uniq_id;
//}


//void Tree::PrintCount()
//{
//	std::cout << _counterosina<<std::endl;
//}
//
//void Tree::increaseCounter(TreeType type)
//{
//	switch (type)
//	{
//	case TreeType::Elka: _counterelka++; 
//		break;
//	case TreeType::Bereza:_counterbereza++;
//		break;
//	case TreeType::Klen:_counterklen++;
//		break;
//	
//	default:
//		std::cout << "Unknown tree" << std::endl;
//		break;
//	}
//	
//}




