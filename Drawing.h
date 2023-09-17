#pragma once
#include "Shape.h"
#include <vector>

class Drawing
{
private:
	vector<Shape*> shapes;
public:
	void AddShape(Shape* shape);
	int totalArea();
};

