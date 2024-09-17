#pragma once
#include "Tree.h"
class Elka :
    public Tree
{
public:
	//Default Constructor
    Elka();
	//Destructor
    ~Elka();
public:
	//Print type of tree
    void wind() override;
public:
	//Counter of Elka
	static int _counterelka;
	//Return Count of Elka
	static int GetCountElka();
private:
	// Increase counter of Elka
	static void increaseCounter();
	// Decrease counter of Elka
	static void decreaseCounter();



};

