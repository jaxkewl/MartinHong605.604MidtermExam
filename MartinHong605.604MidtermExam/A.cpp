class A {
private: int x;
		 int y;

public: A() { x = 0; y = 0; }
		void setX(const int& n) { x = n; }
		int getX() const { return x; }
		void setY(const int& n) { y = n; }
		int getY() const { return y; }
		int aFunc() const { return x * y; }
};