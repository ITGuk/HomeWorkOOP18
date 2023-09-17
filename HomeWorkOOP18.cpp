#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Drawing.h"
#include "Building.h"

using namespace std;

int main()
{
	Building* build = new Building();
	build->addFloor(new Circle("Circle", 14));
	build->addFloor(new Rectangle("Rectangle", 22, 76));
	build->addFloor(new Triangle("Triangle", 54, 13));

	cout << "Total building area: " << 
		build->totalBuildingArea() <<
		" square units" << endl;
}
