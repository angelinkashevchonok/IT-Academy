#include "klen.h"
#include <iostream>
int Klen::_counterklen = 0;
Klen::Klen()
{
	increaseCounter();
}
Klen::~Klen()
{
	decreaseCounter();
}
void Klen::wind()
{
	std::cout << "This is Klen" << std::endl;
}

int Klen::GetCountKlen()
{
	return _counterklen;
}

void Klen::increaseCounter()
{
	_counterklen++;
}

void Klen::decreaseCounter()
{
	_counterklen--;
}


