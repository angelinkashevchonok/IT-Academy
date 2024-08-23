#include "tree.h"
#include <iostream>

 int Tree::_counter = 0;
Tree::Tree()
{
	increaseCounter();
	uniq_id = _counter;
}

Tree::Tree(std::string name): _name(name)
{
	increaseCounter();
	uniq_id = _counter;
}



Tree::Tree(const Tree& other)
{
	_name = other.getName();
	uniq_id = other.getID();
	
}




Tree::~Tree()
{
	decreaseCounter();
	
}

std::string Tree::getName() const
{
	return _name;
}

int Tree::getID() const
{
	return uniq_id;
}

void Tree::wind() const
{
	std::cout << "Name: " << _name << " ID: " << uniq_id << std::endl;
}

void Tree::increaseCounter()
{
	_counter++;
}

void Tree::decreaseCounter()
{
	_counter--;
}

