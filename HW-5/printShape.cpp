#include <iostream>
#include "printShape.h"
namespace Shapes {
	void printShape(Shape shape) {

		switch (shape) {
		case Shape::UNKNOWN:std::cout << "Unknown shape" << std::endl;
			break;
		case Shape::CIRCLE:std::cout << "It's a circle" << std::endl;
			break;
		case Shape::SQUARE:std::cout << "It's a square" << std::endl;
			break;
		case Shape::TRIANGLE:std::cout << "It's a triangle" << std::endl;
			break;
		case Shape::RECTANGLE:std::cout << "It's a rectangle" << std::endl;
			break;
		default: std::cout << "Error!" << std::endl;
			break;
		}
	}
}