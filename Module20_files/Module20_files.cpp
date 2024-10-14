// Module20_files.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <filesystem>

int main()
{
   
    std::cout << "Enter name of directory:" << std::endl;
    std::string directoryname;
    std::cin >>directoryname;
    
    if ((std::filesystem::exists(directoryname)) || std::filesystem::is_directory(directoryname)) {
        int file_count = 0;
        int dir_count = 0;
        for (const auto& el : std::filesystem::directory_iterator(directoryname)) {
            if (std::filesystem::is_directory(el.path())) {
                ++dir_count;
            }
            else if (std::filesystem::is_regular_file(el.path())) {
                ++file_count;
                if (el.path().extension() == ".exe") {
                    std::cout << el.path().filename().string() << std::endl;
                }
            }
        }
        std::cout << "Amount of directorys - " << dir_count<<std::endl;
        std::cout << "Amount of files - " << file_count << std::endl;
    }
    else {
        std::cout << "Directory with this name doesn't exist!" << std::endl;
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
