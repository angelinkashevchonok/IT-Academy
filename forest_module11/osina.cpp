#include "osina.h"
#include <iostream>
int Osina::_counterosina = 0;
Osina::Osina()
{
	_counterosina++;
}
Osina::~Osina()
{
	decreaseCounter();
}
void Osina::wind()
{
	std::cout << "This is Osina" << std::endl;
}

int Osina::GetCountOsina()
{
	return _counterosina;
}

void Osina::increaseCounter()
{
	_counterosina++;
}

void Osina::decreaseCounter()
{
	_counterosina--;
}


