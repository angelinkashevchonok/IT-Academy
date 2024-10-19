#include "algorithms.h"
#include<iostream>
#include<mutex>

void SummofElements(int arr[], int size)
{
    std::mutex arrayMutex;
    arrayMutex.lock();
    int summ = 0;
    for (int i = 0; i < size; ++i) {
        summ += arr[i];
    }
    std::cout << "Summ - " << summ;
    std::cout << std::endl;
    arrayMutex.unlock();
}

void MaxElement(int arr[], int size)
{
    std::mutex arrayMutex;
    arrayMutex.lock();
    int max = 0;
    for (int i = 0; i < size; ++i) {
        if (max < arr[i])
            max = arr[i];
    }
    std::cout << "Max - " << max;
    std::cout << std::endl;
    arrayMutex.unlock();
}

void MinElement(int arr[], int size)
{
    std::mutex arrayMutex;
    arrayMutex.lock();
    int min = 0;
    for (int i = 0; i < 100; ++i) {
        if (min > arr[i])
            min = arr[i];
    }
    std::cout << "Min - " << min;
    std::cout << std::endl;
    arrayMutex.unlock();
}
