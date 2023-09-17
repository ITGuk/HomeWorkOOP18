#include "Circle.h"

Circle::Circle(string name, int radius) : Shape(name)
{this->radius = radius;}

int Circle::area()
{return 3.14 * radius * radius;}