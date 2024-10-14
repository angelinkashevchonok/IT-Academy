#pragma once
#include "IDeliveryStrategy.h"
class ExpressDelivery :
    public IDeliveryStrategy
{
    //virtual function which calculate cost of delivery
    //@param weight of parcel as float
    //@param distance of delivery as float
    //@return cost as float
    virtual float calculateCost(float weight, float distance) override;

    // koef affecting cost
    const float fixAmountforSpeed = 2.1f;

    // koef affecting cost
    const float fixAmountperKm = 1.0f;
};

