//#include <iostream>
//using namespace std;
//
//class point {
//	int x, y;
//public:
//	point();
//	point(int a, int b);
//};
//point::point() : point(0, 0){}
//point::point(int a, int b) {
//	x = a;
//	y = b;
//}

//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	int width;
//	int height;
//	Rectangle();
//	Rectangle(int a, int b);
//	Rectangle(int a);
//	bool isSquare();
//};
//Rectangle::Rectangle() : Rectangle(1) {}
//Rectangle::Rectangle(int a) : Rectangle(a, a) {}
//Rectangle::Rectangle(int a, int b) {
//	width = a;
//	height = b;
//}
//bool Rectangle::isSquare() {
//	if (width == height)
//		return 1;
//	else
//		return 0;
//}
//
//int main() {
//	Rectangle rect1;
//	Rectangle rect2(3, 5);
//	Rectangle rect3(3);
//
//	if (rect1.isSquare())
//		cout << "rect1은 정사각형이다." << endl;
//	if (rect2.isSquare())
//		cout << "rect2은 정사각형이다." << endl;
//	if (rect3.isSquare())
//		cout << "rect3은 정사각형이다." << endl;
//}
//#include <iostream>
//using namespace std;
//
//class circle {
//public:
//	int radius;
//	circle();
//	circle(int r);
//	~circle();
//	double getArea();
//};
//circle::circle() {
//	radius = 1;
//	cout << "원 생성" << endl;
//}
//circle::circle(int r) {
//	radius = r;
//	cout << r << " 원 생성" << endl;
//}
//circle::~circle() {
//	cout << "반지름 " << radius << "원 소멸" << endl;
//}
//double circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int main() {
//	circle donut;
//	circle pizza(30);
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea();
//};
//Circle::Circle() {
//	radius = 1;
//	cout << "반지름 " << radius << " 원 생성" << endl;
//}
//Circle::Circle(int r) {
//	radius = r;
//	cout << "반지름 " << radius << " 원 생성" << endl;
//}
//Circle::~Circle() {
//	cout << "반지름 " << radius << " 원 소멸" << endl;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//Circle globalDonut(1000);
//Circle globalPizza(2000);
//
//void f() {
//	Circle fDonut(100);
//	Circle fPizza(200);
//}
//
//int main() {
//	Circle mainDonut;
//	Circle mainPizza(30);
//	f();
//}






