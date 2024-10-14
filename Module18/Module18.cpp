// Module18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include<thread>
#include<chrono>
#include "order.h"

int main()
{
    std::vector<Order> order_list{
     Order( 1,3000.789,Status::New),
    Order (2,1578.444,Status::Processing ),
    Order( 3,2500.120,Status::Shipped ),
    Order( 4,5670.001,Status::New ),
    Order(5,5235.119,Status::New )
    };

    std::this_thread::sleep_for(std::chrono::seconds(6));

    auto now_time = std::chrono::system_clock::now();

    std::transform(order_list.begin(), order_list.end(), order_list.begin(),
        [now_time](Order& order) {
            auto delta = std::chrono::duration_cast<std::chrono::seconds>(now_time - order._date).count();
            if (order._status == Status::New && delta > 5) {
                order._status = Status::Processing;
            }
            return order; });

    auto finded_order = std::find_if(order_list.begin(), order_list.end(),
        [](const Order& order) {
            return order._summ > 5000 && order._status == Status::Processing;
        });

    if (finded_order != order_list.end()) {
        std::cout << "Number: " << finded_order->_number << ", Summ: " << finded_order->_summ << std::endl;
    }
    else {
        std::cout << "Required order not found" << std::endl;
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
