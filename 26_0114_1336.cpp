//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	double getArea();
//};
//Circle::Circle() : Circle(1) {}
//Circle::Circle(int r) {
//	radius = r;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	Circle* p = &donut;
//	double area = p->getArea();
//
//	cout << area << endl;
//}
//////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	double getArea();
//};
//Circle::Circle(): Circle(1){}
//Circle::Circle(int r) {
//	radius = r;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	Circle pizza(30);
//
//	cout << donut.getArea() << endl;
//
//	Circle* ptr = &donut;
//	cout << ptr->getArea() << endl;
//	cout << (*ptr).getArea() << endl;
//
//	ptr = &pizza;
//	cout << ptr->getArea() << endl;
//	cout << (*ptr).getArea() << endl;
//}
///////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	double getArea();
//	void setRadius(int r);
//};
//Circle::Circle() : Circle(1){}
//Circle::Circle(int r) {
//	radius = r;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//void Circle::setRadius(int r) {
//	radius = r;
//}
//
//int main() {
//	Circle CircleArray[3];
//
//	CircleArray[0].setRadius(10);
//	CircleArray[1].setRadius(20);
//
//	for (int i = 0; i < 3; i++) {
//		cout << "Circle " << i << "의 면적은 " << CircleArray[i].getArea() << endl;
//	}
//
//	Circle* ptr;
//	ptr = CircleArray;
//	cout << endl << endl;
//	for (int i = 0; i < 3; i++) {
//		cout << "Circle " << i << "의 면적은 " << ptr->getArea() << endl;
//		ptr++;
//	}
//}
////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	void setRadius(int r);
//	double getArea();
//};
//Circle::Circle() : Circle(1) {}
//Circle::Circle(int r) {
//	radius = r;
//}
//void Circle::setRadius(int r) {
//	radius = r;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle CircleArray[3] = { Circle(10), Circle(20), Circle() };
//	Circle* ptr = CircleArray;
//
//	for (int i = 0; i < 3; i++)
//		cout << CircleArray[i].getArea() << endl;
//
//	cout << endl << endl;
//
//	for (int i = 0; i < 3; i++)
//		cout << (ptr++)->getArea() << endl;
//}
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	void setRadius(int r);
	double getArea();
};
Circle::Circle() : Circle(1) {};
Circle::Circle(int r) {
	radius = r;
}
void Circle::setRadius(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle Circles[2][3];
	Circle (* ptr)[3] = Circles;

	Circles[0][0].setRadius(1);
	Circles[0][1].setRadius(2);
	Circles[0][2].setRadius(3);
	Circles[1][0].setRadius(4);
	Circles[1][1].setRadius(5);
	Circles[1][2].setRadius(6);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << Circles[i][j].getArea() << endl;
		}
	}

}