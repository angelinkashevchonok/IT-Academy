// module6ex2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <memory>

#include "workwith_arr.h"

int main()
{
	std::cout << "Enter size of array:" << std::endl;
	int n;
	std::cin >> n;
	std::shared_ptr<int[]> arr_ptr =std::make_shared<int[]>(n);
	std::cout << "Enter elemets of array:" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr_ptr[i];
	}
	std::weak_ptr<int[]>weak_ptr = arr_ptr;
	std::cout << "Summ of all elements - " << summAllelemets(weak_ptr, n) << std::endl;
	int min = 0;
	auto ptrmin = &min;
	int max = 0;
	auto ptrmax = &max;
	MinMax(weak_ptr, n,ptrmin, ptrmax);
	std::cout << "MAX element - " << max << std::endl;
	std::cout << "MIN element - " << min << std::endl;
}
// Не компилируется, а выдаёт ошибку:
//Серьезность	Код	Описание	Проект	Файл	Строка	Состояние подавления	Подробности
//Ошибка	C2440 = : невозможно преобразовать "_Ux (*const )" в "int *"
//with
//[
//	_Ux = int[]
//]	module6ex2	C : \Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.38.33130\include\memory	1850
//

