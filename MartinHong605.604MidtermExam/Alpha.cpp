#include "stdafx.h"
#include "Beta.cpp"
class Alpha {
private:
	int a;
	int b;
public:
	Alpha() { a = 0; b = 0; }
	Alpha(const Beta& beta)
	{
		a = *beta.getX();
		b = *beta.getY();
	}
	int getA() { return a; }
	int getB() { return b; }
	void operator = (const Beta &beta) {
		a = *beta.getX();
		b = *beta.getY();
	}
};