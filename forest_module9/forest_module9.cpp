// forest_module9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "forest.h"
#include "tree.h"
int main()
{
    Tree tree_1{ "Dub" };
    Tree tree_2{ "Klen" };
    Tree tree_3{ "Osina" };
    Tree tree_4{ "Elka" };
    Forest first_forest;
    Forest second_forest;
    first_forest.growUp(tree_1);
    first_forest.growUp(tree_2);
    second_forest.growUp(tree_3);
    second_forest.growUp(tree_4);
    auto plus_forest = first_forest + second_forest;
    plus_forest.wind();
    std::cout << "--------------------------" << std::endl;
    std::cout << "After cut first forest" << std::endl;
    first_forest.cutAll();
    auto plus_forest2 = first_forest + second_forest;
    plus_forest2.wind();
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
