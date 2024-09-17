#pragma once
#include "Tree.h"
class Osina :
    public Tree
{
public:
	//Default Constructor
    Osina();
	//Destructor
    ~Osina();

public:
	//Print type of tree
    void wind() override;
   
public:
	//Counter of Osina
	static int _counterosina;
	//Return Count of Osina
	static int GetCountOsina();
private:
	// Increase counter of Osina
	static void increaseCounter();
	// Decrease counter of Klen
	static void decreaseCounter();

};

