// HW-5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

#include "printShape.h"


int main()
{
	// first part of task
	Shapes::Shape shape1 =Shapes::Shape::CIRCLE;
	printShape(shape1);
	std::cout << "--------------------------" << std::endl;
   // second part
	std::string str = "";
	std::cin >> str;
	Shapes::Shape shape2= Shapes::Shape::UNKNOWN;
	if (str == "circle") {
		shape2= Shapes::Shape::CIRCLE;
	}
	else if(str=="square") {
		shape2 = Shapes::Shape::SQUARE;
	}
	else if (str == "triangle") {
		shape2 = Shapes::Shape::TRIANGLE;
	}
	else if (str == "rectangle") {
		shape2 = Shapes::Shape::RECTANGLE;
	}
	else {
		std::cout << "There is no that shape" << std::endl;
	}
	printShape(shape2);


}

