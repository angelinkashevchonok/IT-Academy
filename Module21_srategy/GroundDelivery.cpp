#include "GroundDelivery.h"

float GroundDelivery::calculateCost(float weight, float distance)
{
    return distance * fixAmountperKm;
}
