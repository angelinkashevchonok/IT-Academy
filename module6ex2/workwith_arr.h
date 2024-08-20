#pragma once
#include <memory>
// Summ all elements of array
//@param &arr as weak_ptr<int[]>
//@param size - size of array as int
//@return result as int
int summAllelemets( std::weak_ptr<int[]> &arr, int size);

//Find max and min element of array
//@param &arr as weak_ptr<int[]>
//@param size - size of array as int
//@param minres - min element as int*
//@param maxres - max element as int*
void MinMax(std::weak_ptr<int[]> &arr, int size, int* minres, int* maxres);