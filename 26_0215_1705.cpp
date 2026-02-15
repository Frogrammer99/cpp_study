//#include <iostream>
//#include <string>
//
//class Point {
//private:
//	int x, y;
//public:
//	void set(int x, int y);
//	void showPoint();
//};
//void Point::set(int x, int y) {
//	this->x = x;
//	this->y = y;
//}
//void Point::showPoint() {
//	std::cout << "(" << x << ", " << y << ")" << std::endl;
//}
//
//class ColorPoint : public Point {
//private:
//	std::string color;
//public:
//	void setColor(std::string color);
//	void showColorPoint();
//};
//void ColorPoint::setColor(std::string color) {
//	this->color = color;
//}
//void ColorPoint::showColorPoint() {
//	std::cout << color << ":";
//	showPoint();
//}
//
//int main() {
//	//Point p;
//	ColorPoint cp;
//	cp.set(3, 4);
//	cp.setColor("Red");
//	cp.showColorPoint();
//}
/////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

class Point {
private:
	int x, y;
public:
	void set(int x, int y);
	void showPoint();
};
void Point::set(int x, int y) {
	this->x = x;
	this->y = y;
}
void Point::showPoint() {
	std::cout << "(" << x << "," << y << ")" << std::endl;
}

class ColorPoint : public Point {
private:
	std::string color;
public:
	void setColor(std::string color);
	void showColorPoint();
};
void ColorPoint::setColor(std::string color) {
	this->color = color;
}
void ColorPoint::showColorPoint() {
	std::cout << color << ": ";
	showPoint();
}

int main() {
	ColorPoint cp;
	ColorPoint* cPtr = &cp;
	Point* ptr = cPtr;

	ptr->set(3, 4);
	ptr->showPoint();
	cPtr->setColor("Red");
	cPtr->showColorPoint();
}