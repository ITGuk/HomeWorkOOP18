#include "Building.h"

void Building::addFloor(Shape* shape)
{
	floor.AddShape(shape);
}

int Building::totalBuildingArea()
{
	return floor.totalArea();
}