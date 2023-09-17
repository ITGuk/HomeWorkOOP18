#pragma once
#include "Drawing.h"
class Building
{
private:
	Drawing floor;
public:
	void addFloor(Shape* shape);
	int totalBuildingArea();
};


