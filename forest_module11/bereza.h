#pragma once
#include "Tree.h"
class Bereza :public Tree
{
public:
	//Default Constructor
	Bereza();
	//Destructor
	~Bereza();
public:
	//Print type of tree
	void wind() override;
	
public:
	//Counter of Bereza
	static int _counterbereza;
	//Return Count of Bereza
	static int GetCountBereza();
private:
	// Increase counter of Bereza
	static void increaseCounter();
	// Decrease counter of Bereza
	static void decreaseCounter();
};

