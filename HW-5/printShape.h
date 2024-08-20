#pragma once
namespace Shapes {
	enum class Shape {
		UNKNOWN = -1,
		CIRCLE,
		SQUARE,
		TRIANGLE,
		RECTANGLE
	};

	/* printShape
	* @param shape
	* print name of shape
	*/
	void printShape(Shape shape);
}
