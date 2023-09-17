#pragma once
#include "Shape.h"
class Triangle :
    public Shape
{
private:
    int num_1;
    int num_2;
public:
    Triangle(string name, int num_1, int num_2);
    int area() override;
};

