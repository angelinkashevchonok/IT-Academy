// Module16_sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <string>
#include<algorithm>

int main()
{
    std::vector <std::string> names{ "Tommy","Valentina","Alex","Candice","Sam" };
    std::list<std::string> names2{ "Tommy","Valentina","Alex","Candice","Sam" };
    std::forward_list <int> numbers2{ 5,12,1,78,9,34,11,0,21,5 };
    std::vector<int> numbers{ 10,12,3,87,43,11,2,0,13 };

    struct People {
        std::string name;
        int age;
    };
    std::vector<People> people{
        {"Anna",19},
        {"Helen",22},
        {"Max",23},
        {"Bob",22}
    };
    

    std::sort(names.begin(), names.end(), [](const std::string& a, const std::string& b) {
        return a.length() > b.length();
        });
    for (const auto name : names) {
        std::cout << name << "  ";
    }
    std::cout<< std::endl;


    std::partial_sort(numbers.begin(), numbers.begin() + 4, numbers.end());
    for (const auto num : numbers) {
        std::cout << num << "  ";
    }
    std::cout << std::endl;


    std::stable_sort(people.begin(), people.end(), [](const People& a, const People& b) {
        return a.age > b.age;
        });
    for (const auto person : people) {
        std::cout << person.name << "  "<<person.age<<"   ";
    }
    std::cout << std::endl;


    names2.sort();
    for (const auto name : names2) {
        std::cout << name<< "   ";
    }std::cout << std::endl;


    numbers2.sort([](const int& a, const int& b) {
        return a > b;
        });
    for (const auto num : numbers2) {
        std::cout << num << "   ";
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
