#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
private:
    int radius;
public:
    Circle(string name, int radius);
    int area() override;
};

