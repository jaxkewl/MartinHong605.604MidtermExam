#include "A.cpp"

class B : public A {
private: int z;

public: B() { z = 0; }
		void setZ(const int& n) { z = n; }
		int getZ() const { return z; }
		int bFunc() const { return getX() * getY() * getZ(); }
};
