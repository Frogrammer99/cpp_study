//#include <iostream>
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	donut.radius = 1;
//	double area = donut.getArea();
//	cout << "donut의 면적은 " << area << endl;
//
//	Circle pizza;
//	pizza.radius = 30;
//	area = pizza.getArea();
//	cout << "pizza의 면적은 " << area << endl;
//}
//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	int width;
//	int height;
//	double getArea();
//};
//double Rectangle::getArea() {
//	return width * height;
//}
//
//int main() {
//	Rectangle rect;
//	rect.width = 3;
//	rect.height = 4;
//	cout << "사각형의 면적은 " << rect.getArea() << endl;
//}
//#include <iostream>
//using namespace std;
//
//class circle {
//public:
//	int radius;
//	circle();
//	circle(int r);
//	double getArea();
//};
//circle::circle() {
//	radius = 1;
//	cout << "반지름: " << radius << " 원 생성" << endl;
//}
//circle::circle(int r) {
//	radius = r;
//	cout << "반지름: " << radius << " 원 생성" << endl;
//}
//double circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	circle r1;
//	double area1 = r1.getArea();
//	cout << "r1 " << area1 << endl;
//
//	circle r2;
//	r2.radius = 10;
//	double area2 = r2.getArea();
//	cout << "r2 " << area2 << endl;
//
//	circle r3(100);
//	double area3 = r3.getArea();
//	cout << "r3 " << area3 << endl;
//}
//#include <iostream>
//using namespace std;
//
//class circle {
//public:
//	int radius;
//	circle();
//	circle(int r);
//	double getArea();
//};
//
//circle::circle() : circle(1) {
//	cout << "delegating contructor" << endl;
//}
//
//circle::circle(int r) {
//	radius = r;
//	cout << "construct, radius: " << radius << endl;
//}
//
//double circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	circle r1;
//	cout << r1.getArea() << endl;
//
//	circle r2(20);
//	cout << r2.getArea() << endl;
//}
