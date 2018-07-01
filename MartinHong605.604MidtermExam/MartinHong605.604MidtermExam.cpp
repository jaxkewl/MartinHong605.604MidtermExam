// MartinHong605.604MidtermExam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Alpha.cpp"

#include <iostream>
using namespace std;
int main()
{
	int array[3];
	int* pArray[3];
	*pArray = array;

	for (int i = 0; i < 3; i++)
		pArray[i] = &array[i];

	for (int i = 0; i < 3; i++)
		pArray[i] = array + i;




	int *ptr = new int(10);

	delete ptr;

	char* color = "red";
	cout << "c: " << color[1] << endl;
	Beta aBetaObject;
	int x = 1;
	int y = 2;
	aBetaObject.setX(&x);
	aBetaObject.setY(&y);
	cout << "I/II Implement the copy constructor for class Alpha" << endl;
	cout << "x: " << *aBetaObject.getX() << ", y: " << *aBetaObject.getY() << endl;
	Alpha a1 = aBetaObject;
	cout << "a: " << a1.getA() << ", b: " << a1.getB() << endl;

	Alpha a2;
	a2 = aBetaObject;
	cout << "III: implement the assignment operator override for class Alpha" << endl;
	cout << "a: " << a2.getA() << ", b: " << a2.getB() << endl;
	return 0;
}

