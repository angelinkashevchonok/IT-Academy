#include<iostream>
#include "workwith_arr.h"

int summAllelemets(std::weak_ptr<int[]> &arr,int size) {
	int count = 0;
	auto shar_arr = arr.lock();
	if (shar_arr.get() != nullptr) {
		for (int i = 0; i < size; i++) {
			count += shar_arr[i];
		}
	}
	return count;
}



void MinMax(std::weak_ptr<int[]> &arr, int size, int* minres, int* maxres) {
	auto shar_arr = arr.lock();
	*minres=shar_arr[0];
	*maxres = shar_arr[0];
	for (int i = 0; i < size; i++) {
		if (*minres > shar_arr[i]) {
			*minres = shar_arr[i];
		}
		if (*maxres < shar_arr[i]) {
			*maxres = shar_arr[i];
		}
	}
}