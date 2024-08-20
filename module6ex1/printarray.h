#pragma once
#include <memory>
// print array
//@param &arr as unique_ptr<int[]>
//@param size as const int
void print(std::unique_ptr<int[]> &arr,const int size);
