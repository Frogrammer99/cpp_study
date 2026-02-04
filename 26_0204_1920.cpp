//#include <iostream>
//
//class Rect;
//bool equals(Rect r, Rect s);
//
//class Rect {
//private:
//	int width, height;
//public:
//	Rect(int width, int height);
//	friend bool equals(Rect r, Rect s);
//};
//Rect::Rect(int width, int height) {
//	this->width = width;
//	this->height = height;
//}
//bool equals(Rect r, Rect s) {
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Rect a(3, 4), b(4, 5);
//	if (equals(a, b))
//		std::cout << "equal" << std::endl;
//	else
//		std::cout << "not equal" << std::endl;
//}
//////////////////////////////////////////////////
//#include <iostream>
//
//class Rect;
//
//class RectManager {
//public:
//	bool equals(Rect r, Rect s);
//};
//
//class Rect {
//private:
//	int width, height;
//public:
//	Rect(int width, int height);
//	friend bool RectManager::equals(Rect r, Rect s);
//};
//Rect::Rect(int widht, int height) {
//	this->width = width;
//	this->height = height;
//}
//bool RectManager::equals(Rect r, Rect s) {
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		false;
//}
//
//int main() {
//	Rect a(3, 4), b(3, 4);
//	RectManager man;
//
//	if (man.equals(a, b))
//		std::cout << "equal" << std::endl;
//	else
//		std::cout << "not equal" << std::endl;
//}
/////////////////////////////////////////
//#include <iostream>
//
//class Rect;
//
//class RectManager {
//public:
//	bool equals(Rect r, Rect s);
//	void copy(Rect& dest, Rect& src);
//};
//
//class Rect {
//private:
//	int width, height;
//public:
//	Rect(int width, int heigth);
//	friend RectManager;
//};
//Rect::Rect(int width, int height) {
//	this->width = width;
//	this->height = height;
//}
//bool RectManager::equals(Rect r, Rect s) {
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		false;
//}
//void RectManager::copy(Rect& dest, Rect& src) {
//	dest.width = src.width;
//	dest.height = src.height;
//}
//
//
//int main() {
//	Rect a(3, 4), b(5, 6);
//	RectManager man;
//
//	man.copy(b, a);
//	if (man.equals(a, b))
//		std::cout << "equal" << std::endl;
//	else
//		std::cout << "not equal" << std::endl;
//}
////////////////////////////////////////////
