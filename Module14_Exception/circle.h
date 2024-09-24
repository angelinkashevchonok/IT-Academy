#pragma once
class Circle
{
public:
	//Constructor with parameter(radius of circle)
	Circle(int radius) : _radius(radius) {};
	// Calculate area od circle
	//return area as int
	int calculateArea();
	//Radius test for validity
	bool testRadius();

private:
	int _radius=0;

};

