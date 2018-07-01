#include "stdafx.h"

class Beta
{
private:
	int *x;
	int *y;

public:
	Beta() {
		x = nullptr;
		y = nullptr;
	}
	int* getX() const { return x; }
	void setX(int* xx) {
		x = xx;
	}
	int* getY() const { return y; }
	void setY(int* yy) {
		y = yy;
	}
};