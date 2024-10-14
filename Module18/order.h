#pragma once
#include"enum.h"
#include <chrono>
class Order
{
public:
	//Constructor with parameters
	//@param number of order as int
	//@param summ of order as double
	//@param status of order 
	Order(int number, double summ, Status status);
	//time of order
	std::chrono::system_clock::time_point _date;

	int _number;
	double _summ;
	Status _status;
	
};

