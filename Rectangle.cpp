#include "Rectangle.h"

Rectangle::Rectangle(string name, int num_1, int num_2) : Shape(name)
{
	this->num_1 = num_1;
	this->num_2 = num_2;
}

int Rectangle::area()
{return num_1 * num_2;}