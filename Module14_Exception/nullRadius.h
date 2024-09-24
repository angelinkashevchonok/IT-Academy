#pragma once
#include<string>
class NullRadius
{
public:
	//Constructor with parameter(type of error)
	NullRadius(std::string error) :_error(std::move(error)) {};
	//getter
	const auto getError() const { return _error; };
private:
	std::string _error;
};

