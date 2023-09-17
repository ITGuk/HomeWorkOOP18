#include "Triangle.h"

Triangle::Triangle(string name, int num_1, int num_2) : Shape(name)
{
	this->num_1 = num_1;
	this->num_2 = num_2;
}

int Triangle::area()
{return 0.5 * num_1 * num_2;}