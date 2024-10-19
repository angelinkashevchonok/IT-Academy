// Module21_srategy.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "DeliveryContext.h"
#include "AirDelivery.h"
#include "GroundDelivery.h"
#include "ExpressDelivery.h"

int main()
{
    const float weight = 13.2f;
    const float distance = 119.5f;
    DeliveryContext delcontext1(new AirDelivery());
    std::cout<<"AirDelivery: " << delcontext1.calculateCost(weight, distance)<<std::endl;
    DeliveryContext delcontext2(new GroundDelivery());
    std::cout << "GroundDelivery: " << delcontext2.calculateCost(weight, distance) << std::endl;
    delcontext2.setStrategy(new ExpressDelivery());
    std::cout << "ExpressDelivery: " << delcontext2.calculateCost(weight, distance) << std::endl;
   
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
