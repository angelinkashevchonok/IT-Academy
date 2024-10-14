#include "AirDelivery.h"

float AirDelivery::calculateCost(float weight, float distance)
{
    return (distance*fixAmountfordistance)+(weight*fixAmountforweight);
}
