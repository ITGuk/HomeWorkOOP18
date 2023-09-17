#include "Drawing.h"

void Drawing::AddShape(Shape* shape)
{
	shapes.push_back(shape);
}
int Drawing::totalArea()
{
	int total = 0;
	for (Shape* s : shapes)
	{
		total += s->area();
	}
	return total;
}