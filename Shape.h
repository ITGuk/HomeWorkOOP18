#pragma once
#include <iostream>

using namespace std;

class Shape
{
private:
	string name;
public:
	Shape(string);
	virtual int area() = 0;
};

