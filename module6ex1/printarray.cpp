#include<iostream>
#include "printarray.h"
void print(std::unique_ptr<int[]>& arr,const int size) {
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Array:" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << "  ";
	}
}