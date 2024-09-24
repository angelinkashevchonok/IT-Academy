// Module14_Exception.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "circle.h"
#include "nullRadius.h"
#include "invalidRadius.h"

int main()
{

    std::cout << "Enter your radius:" << std::endl;
    int r;
    std::cin >> r;
    Circle circle(r);
    try {
        circle.testRadius();
        std::cout << "Area:" << circle.calculateArea() << std::endl;
    }
    catch (const InvalidRadius* e) {
        std::cout << "Exception: " << e->getError() << std::endl;
    }
    catch (const NullRadius* e) {
        std::cout << "Exception: " << e->getError() << std::endl;
    }
    catch (...) {
        std::cout << "Unknown Exception" << std::endl;
    }
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
