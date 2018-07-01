#include "stdafx.h"
#include "RectangularSolid.h"



RectangularSolid::RectangularSolid(const double & l, const double & w, const double & h)
{
	//handle negative vals by using setters, throws exception if neg value is passed in
	setHeight(h);
	setWidth(w);
	setLength(l);
	calculateSurfaceArea();
}

RectangularSolid::RectangularSolid()
{
}

RectangularSolid::~RectangularSolid()
{
}

void RectangularSolid::calculateSurfaceArea()
{
	//The formula for surface area is 2 * (width*height + length*height + width*length).
	surfaceArea = 2 * (width*height + length*height + width*length);
}
