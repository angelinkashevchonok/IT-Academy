// Module14_Lambda.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>



int main()
{
	std::vector <int>vec;

	for (int i = 10; i <= 50; i++) {
		vec.push_back(i);
	}

	std::cout << "Vector before changing:" << std::endl;
	for (const auto& elem : vec) {
		std::cout << elem << std::endl;
	}

	auto summ_lambda = [vec]() {
		int summ = std::accumulate(vec.begin(), vec.end(), 0);
		return summ;
		};

	std::cout << "Choose 1- for print even elements of vector" << std::endl;
	std::cout << "Choose 2- for print summ of all elements of vector" << std::endl;
	std::cout << "Choose 3- for print all elements of vector after multiply" << std::endl;
	std::cout<< std::endl;

	char k = 2;

	switch (k) {
	case 1: {
		std::for_each(vec.begin(), vec.end(), [](int el) {
			if (el % 2 == 0)
				std::cout << el << "  ";
			});
		
		break;
	}
	case 2: {
		std::cout << "Summ = " << summ_lambda() << std::endl;
	}
		  break;
	case 3: {
		int factor = 13;
		std::transform(vec.begin(), vec.end(), vec.begin(), [factor](int el) {
			return el * factor;
			});
		std::cout << "Vector After multiplied:" << std::endl;
		for (const auto& elem : vec) {
			std::cout << elem << std::endl;
		}
		
	}
		  break;
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
