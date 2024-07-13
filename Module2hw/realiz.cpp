#include <iostream>
#include "declar.h"


void INTfactorial()
{
    int result = 1;
    for (int n = 5; n >= 1; n--)
    {
        result *= n;
    }
    std::cout <<"Result as int - " << result << std::endl;

}
void FLOATfactorial() {
    float result = 1;
    for (float n = 5; n >= 1; n--)
    {
        result *= n;
    }
    std::cout << " Result as float - " << result << std::endl;
}
