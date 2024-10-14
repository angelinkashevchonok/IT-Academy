#include "ExpressDelivery.h"

float ExpressDelivery::calculateCost(float weight, float distance)
{
    return (distance*fixAmountforSpeed*fixAmountperKm);
}
