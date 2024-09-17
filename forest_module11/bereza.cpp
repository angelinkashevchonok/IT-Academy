#include "bereza.h"
#include <iostream>
int Bereza::_counterbereza = 0;
Bereza::Bereza()
{
	increaseCounter();
}
Bereza::~Bereza()
{
	decreaseCounter();
}

void Bereza::wind()
{
	std::cout << "This is Bereza" << std::endl;
}

int Bereza::GetCountBereza()
{
	return _counterbereza;
}

void Bereza::increaseCounter()
{
	_counterbereza++;
}

void Bereza::decreaseCounter()
{
	_counterbereza--;
}


