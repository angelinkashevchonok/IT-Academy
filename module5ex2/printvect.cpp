#include <iostream>
#include "printvect.h"

void print(std::vector <int> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }
}