#pragma once
class IDeliveryStrategy
{
public: 
	// virtual function which calculate cost of delivery
	virtual float calculateCost(float weight, float distance) = 0;
};

