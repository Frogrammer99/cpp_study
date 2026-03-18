//#include <iostream>
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle(int radius = 1) { this->radius = radius; }
//	int getRadius() { return radius; }
//	void operator= (const Circle& op2);
//	bool operator> (const Circle& op2);
//};
//void Circle::operator=(const Circle& op2) {
//	this->radius = op2.radius;
//}
//bool Circle::operator > (const Circle& op2) {
//	return (this->radius > op2.radius);
//}
//
//template <typename T>
//T bigger(T a, T b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//int main() {
//	int a = 20, b = 50, c;
//	c = bigger(a, b);
//	std::cout << "20과 50 중 큰 값은 " << c << std::endl;
//	
//	Circle waffle(10), pizza(20), y;
//	y = bigger(waffle, pizza);
//	std::cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << std::endl;
//}
////////////////////////////////////////////////////////////////////
#include <iostream>

class Comparable {
public:
	virtual bool operator> (const Comparable& op2) = 0;
	virtual bool operator< (const Comparable& op2) = 0;
	virtual bool operator== (const Comparable& op2) = 0;
};

class Circle : public Comparable {
private:
	int radius;
public:
	Circle(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	virtual bool operator> (const Comparable& op2);
	virtual bool operator< (const Comparable& op2);
	virtual bool operator== (const Comparable& op2);
};
bool Circle::operator> (const Comparable& op2) {
	
}