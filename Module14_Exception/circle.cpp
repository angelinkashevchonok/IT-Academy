
#define _USE_MATH_DEFINES
#include<cmath>
#include <iostream>
#include "circle.h"
#include "nullRadius.h"
#include "invalidRadius.h"

int Circle::calculateArea()
{
    return M_PI*pow(_radius,2);
}

bool Circle::testRadius ()
{
    if (_radius == 0) 
        throw new NullRadius("Radius is not NORMAL!!!(Null Radius)");
    
     if (_radius < 0) 
        throw new InvalidRadius("Radius is not NORMAL!!!(Invalid radius)");
    
    if(_radius>0)
        std::cout << "Good radius!" << std::endl;
    
}
