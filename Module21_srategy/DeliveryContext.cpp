#include "DeliveryContext.h"



void DeliveryContext::setStrategy(IDeliveryStrategy* newStrategy)
{
	_strategy = newStrategy;
}

float DeliveryContext::calculateCost(float weight, float distance)
{
	return _strategy->calculateCost(weight,distance);
}
