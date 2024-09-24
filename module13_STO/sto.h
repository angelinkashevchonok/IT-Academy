#pragma once
#include <iostream>
#include <vector>
template <typename T>
class Sto
{
public:
	//Add car in STO(vector),
	// STO can support to 5 cars
	// @param car for adding
	void AddCar(const T& car) {
		if ((_cars.size()) < 5) {
			_cars.push_back(car);
		}
		else {
			std::cout << "Can't add a car!" << std::endl;
		}
	}
	// Clean STO(vector)
	void RepairAll() {
		_cars.clear();
	}

private:
	std::vector <T> _cars;

};

