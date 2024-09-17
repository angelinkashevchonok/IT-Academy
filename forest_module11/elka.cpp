#include "Elka.h"
#include <iostream>
int Elka::_counterelka = 0;
Elka::Elka()
{
	increaseCounter();
}

Elka::~Elka()
{
	
}

void Elka::wind()
{
	std::cout << "This is Elka" << std::endl;
}

int Elka::GetCountElka()
{
	return _counterelka;
}

void Elka::increaseCounter()
{
	_counterelka++;
}

void Elka::decreaseCounter()
{
	_counterelka--;
}





