//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea();
//	int getRadius();
//	void setRadius(int radius);
//};
//Circle::Circle() : Circle(1){}
//Circle::Circle(int r) {
//	radius = r;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행 radius = " << radius << endl;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int Circle::getRadius() {
//	return radius;
//}
//void Circle::setRadius(int radius) {
//	this->radius = radius;
//}
//
//void increase(Circle c) {
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//}
//
//int main() {
//	Circle waffle(30);
//	increase(waffle);
//	cout << waffle.getRadius() << endl;
//}
///////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	void setRadius(int radius);
//	double getArea();
//};
//Circle::Circle() : Circle(1){}
//Circle::Circle(int r) {
//	radius = r;
//}
//void Circle::setRadius(int radius) {
//	this->radius = radius;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//Circle getCircle() {
//	Circle tmp(30);
//	return tmp;
//}
//
//int main() {
//	Circle c;
//	cout << c.getArea() << endl;
//
//	c = getCircle();
//	cout << c.getArea() << endl;
//}
//////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main() {
//	Circle c1;
//	Circle& refc = c1;
//	refc.setRadius(10);
//	cout << refc.getArea() << " " << c1.getArea() << endl;
//}
//////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//bool average(int* arr, int size, int& avg) {
//	if (size <= 0)
//		return false;
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//		sum += arr[i];
//	avg = sum / size;
//	return true;
//}
//
//int main() {
//	int x[] = { 0, 1, 2, 3,4 ,5 };
//	int avg;
//	if (average(x, 6, avg))
//		cout << "평균은 " << avg << endl;
//	else
//		cout << "매개 변수 오류" << endl;
//
//	if (average(x, -2, avg))
//		cout << "평균은 " << avg << endl;
//	else
//		cout << "매개 변수 오류" << endl;
//}
//////////////////////////////////////////////////////////////////////////
