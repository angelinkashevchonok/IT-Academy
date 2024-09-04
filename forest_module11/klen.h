#pragma once
#include "Tree.h"
class Klen :
    public Tree
{
public:
	//Default Constructor
    Klen();
	//Destructor
    ~Klen();
public:
	//Print type of tree
    void wind() override;
public:
	//Counter of Klen
	static int _counterklen;
	//Return Count of Klen
	static int GetCountKlen();
private:
	// Increase counter of Klen
	static void increaseCounter();
	// Decrease counter of Klen
	static void decreaseCounter();



};

