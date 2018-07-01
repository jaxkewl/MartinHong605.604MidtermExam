#pragma once


/*
(1). A rectangular solid must remember its surface area at all times.
The formula for surface area is 2 * (width*height + length*height + width*length).
All member functions should be designed so that a programmer can tell from a function
prototype whether the function can or cannot modify an attribute value.
Accessor functions for appropriate member attributes shall be provided
in your implementation. Write the complete code for a RectangularSolid class definition.

*/

#include <exception>
using namespace std;

class RectangularSolid
{
public:
	RectangularSolid(const double& length, const double& width, const double& height);
	RectangularSolid();
	~RectangularSolid();

	double getLength() const { return length; }
	void setLength(double val) {
		if (val < 0) throw exception("Negative Val");
		length = val;
		calculateSurfaceArea();
	}
	double getWidth() const { return width; }
	void setWidth(double val) {
		if (val < 0) throw exception("Negative Val");
		width = val;
		calculateSurfaceArea();
	}
	double getHeight() const { return height; }
	void setHeight(double val) {
		if (val < 0) throw exception("Negative Val"); 
		height = val;
		calculateSurfaceArea();
	}
	void calculateSurfaceArea();

private:
	double length = 1.0;
	double width = 1.0;
	double height = 1.0;
	double surfaceArea = 1.0;
};

