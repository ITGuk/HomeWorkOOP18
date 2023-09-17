#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
private:
    int num_1;
    int num_2;
public:
    Rectangle(string, int, int);
    int area() override;
};

