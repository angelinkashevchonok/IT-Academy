#pragma once
#include "IDeliveryStrategy.h"
class DeliveryContext
{
public:
	//Constructor with parameters
	//@param strategy as pointer to DeliveryStrategy
	DeliveryContext(IDeliveryStrategy* strategy) : _strategy(strategy) {}

	//Change straregy function
	////@param newstrategy as pointer to DeliveryStrategy
	void setStrategy(IDeliveryStrategy* newStrategy);

	//function which calculate cost of delivery
	//@param weight of parcel as float
	//@param distance of delivery as float
	//@return cost as float
	float calculateCost(float weight, float distance);

private:
	IDeliveryStrategy* _strategy;


};

