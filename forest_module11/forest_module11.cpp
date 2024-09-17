// forest_module10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"forest.h"
#include "tree.h"
#include "types.h"
#include "osina.h"
#include "elka.h"
#include "bereza.h"
#include "klen.h"

int main()
{
	Forest forest;
	forest.growUp(new Osina);
	forest.growUp(new Bereza);
	forest.growUp(new Elka);
	forest.growUp(new Klen);
	forest.growUp(new Osina);
	forest.windAll();
	std::cout << " ------------------------------------ "<<std::endl;
	std::cout <<"Number of Bereza - "<< Bereza::GetCountBereza() << std::endl;
	std::cout << "Number of Klen - " << Klen::GetCountKlen() << std::endl;
	std::cout << "Number of Elka - " << Elka::GetCountElka() << std::endl;
	std::cout << "Number of Osina - " << Osina::GetCountOsina() << std::endl;
	forest.cutAll();
   
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
