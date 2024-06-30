// Module2hw2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
#ifdef _WIN64
    std::cout << "Your's OS - Windows 64-bit"<<std::endl;
#elif  _WIN32
    std::cout << "Your's OS - Windows 32-bit" << std::endl;
#elif __APPLE__ || __MACH__
    std::cout << "Your's OS - Mac OSX" << std::endl;
#elif __linux__
    std::cout << "Your's OS -  Linux" << std::endl;
#else
    std::cout << "Other OS" << std::endl;
#endif 

#ifdef __clang__
    std::cout << "Compiler - Clang/LLVM" << std::endl;
#elif __ICC || __INTEL_COMPILER
    std::cout << "Compiler - Intel ICC/ICPC" << std::endl;
#elif __GNUC__ || __GNUG__
    std::cout << "Compiler - GNU GCC/G++" << std::endl;
#elif _MSC_VER
    std::cout << "Compiler - Microsoft Visual Studio" << std::endl;
#endif
}
//
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
