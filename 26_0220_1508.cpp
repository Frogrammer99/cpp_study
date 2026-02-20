//#include <iostream>
//
//class Point {
//private:
//	int x, y;
//public:
//	Point(int x = 0, int y = 0);
//	void showPoint();
//	void setPoint(int x, int y);
//};
//Point::Point(int x, int y) {
//	this->x = x;
//	this->y = y;
//}
//void Point::showPoint() {
//	std::cout << "X: " << x << "Y: " << y << std::endl;
//}
//void Point::setPoint(int x, int y) {
//	this->x = x;
//	this->y = y;
//}
//
//class ColorPoint : public Point {
//private:
//	int color;
//public:
//	void showColor();
//};
//void ColorPoint::showColor() {
//	std::cout << "Color: " << color << std::endl;
//}
//
//int main() {
//	ColorPoint cp;
//	cp.setPoint(3, 5);
//	Point* Bp = &cp;
//	Bp->showPoint();
//
//	Point p(33, 55);
//	ColorPoint* Dp = (ColorPoint*) & p;
//	Dp->showPoint();
//}
////////////////////////////////////////
//#include <iostream>
//
//class Point {
//protected:
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
//	std::cout << "X: " << x << " Y:" << y << std::endl;
//}
//
//class ColorPoint : public Point {
//private:
//	std::string color;
//public:
//	void setColor(std::string color);
//	void showColor();
//	bool equals(const ColorPoint& cp);
//};
//void ColorPoint::setColor(std::string color) {
//	this->color = color;
//}
//void ColorPoint::showColor() {
//	std::cout << "Color: " << color << std::endl;
//}
//bool ColorPoint::equals(const ColorPoint& cp) {
//	return (this->x == cp.x && this->y == cp.y && this->color == cp.color);
//}
//
//int main() {
//	ColorPoint cp;
//	cp.set(3, 4);
//	cp.showPoint();
//}
////////////////////////////////////////////
//#include <iostream>
//
//class Point {
//private:
//	int x, y;
//public:
//	Point(int x, int y);
//};
//Point::Point(int x, int y) {
//	this->x = x;
//	this->y = y;
//}
//
//class ColorPoint : public Point {
//private:
//	std::string color;
//public:
//	ColorPoint(std::string color);
//};
//ColorPoint::ColorPoint(std::string color) {
//	this->color = color;
//}
//
//int main() {
//	ColorPoint cp("Red");
//}
/////////////////////////////////////////////////////
#include <iostream>
#include <string>

class TV {
private:
	int size;
public:
	TV();
	TV(int size);
	int getSize();
};
TV::TV() {
	size = 20;
}
TV::TV(int size) {
	this->size = size;
}
int TV::getSize() {
	return size;
}

class WideTV : public TV {
private:
	bool videoIn;
public:
	WideTV(int size, bool videoIn);
	bool getVideoIn();
};
WideTV::WideTV(int size, bool videoIn) : TV(size) {
	this->videoIn = videoIn;
}
bool WideTV::getVideoIn() {
	return videoIn;
}

class SmartTV : public WideTV {
private:
	std::string ipAddr;
public:
	SmartTV(std::string ipAddr, int size);
	std::string getIpAddr();
};
SmartTV::SmartTV(std::string ipAddr, int size) : WideTV(size, true) {
	this->ipAddr = ipAddr;
}
std::string SmartTV::getIpAddr() {
	return ipAddr;
}

int main() {
	SmartTV sm("192.0.0.1", 32);
	std::cout << "Size: " << sm.getSize() << std::endl;
	std::cout << "VideoIn: " << sm.getVideoIn() << std::endl;
	std::cout << "IP: " << sm.getIpAddr() << std::endl;
}