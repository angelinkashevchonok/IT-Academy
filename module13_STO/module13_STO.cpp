// module13_STO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "sto.h"
#include "truck.h"
#include "passengers.h"
int main()
{
	Sto<Passengers> pass_cars;
	Sto<Truck> truck_cars;
	Truck Fiat;
	Truck Isuzu;
	Truck Ford;
	Truck Howo;
	Truck Iveco;
	Truck KIA;
	truck_cars.AddCar(Fiat);
	truck_cars.AddCar(Isuzu);
	truck_cars.AddCar(Ford);
	truck_cars.AddCar(Howo);
	truck_cars.AddCar(Iveco);
	truck_cars.AddCar(KIA);
	Passengers BMW;
	Passengers Porshe;
	Passengers BYD;
	Passengers Tesla;
	Passengers Audi;
	Passengers Mercedes;
	pass_cars.AddCar(BMW);
	pass_cars.AddCar(Porshe);
	pass_cars.AddCar(BYD);
	pass_cars.AddCar(Tesla);
	pass_cars.AddCar(Audi);
	pass_cars.AddCar(Mercedes);
	truck_cars.RepairAll();
	pass_cars.RepairAll();

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
