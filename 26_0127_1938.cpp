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
//	int getRadius();
//	void setRadius(int r);
//};
//Circle::Circle() : Circle(1) {}
//Circle::Circle(int r) {
//	radius = r;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int Circle::getRadius() {
//	return radius;
//}
//void Circle::setRadius(int r) {
//	radius = r;
//}
//
//void swap(Circle& c1, Circle& c2) {
//	int temp;
//	temp = c1.getRadius();
//	c1.setRadius(c2.getRadius());
//	c2.setRadius(temp);
//}
//
//int main() {
//	Circle c1(20), c2(30);
//	cout << "c1: " << c1.getArea() << "  c2: " << c2.getArea() << endl;
//
//	swap(c1, c2);
//	cout << "c1: " << c1.getArea() << "  c2: " << c2.getArea() << endl;
//	
//}
//////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//void half(double& num) {
//	num /= 2;
//}
//
//int main() {
//	double n = 20;
//	half(n);
//	cout << n;
//}
////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//void combine(string t1, string t2, string& t3) {
//	t3 = t1 + " " + t2;
//}
//
//int main() {
//	string text1 = "I Love You";
//	string text2 = "very much";
//	string text3;
//	combine(text1, text2, text3);
//	cout << text3;
//}
////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//bool bigger(int a, int b, int& big) {
//	if (a == b) {
//		big = a;
//		return true;
//	}
//	else {
//		if (a > b) 
//			big = a;
//		else 
//			big = b;
//		return false;
//	}
//}
//
//int main() {
//	int a, b;
//	int big;
//
//	cout << "정수 2개 입력: ";
//	cin >> a >> b;
//	
//	if (bigger(a, b, big))
//		cout << "두 수가 같습니다" << endl;
//	else
//		cout << big << endl;
//}
/////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle(int r);
//	int getRadius();
//	void setRadius(int r);
//	void show();
//};
//Circle::Circle(int r) {
//	radius = r;
//}
//int Circle::getRadius() {
//	return radius;
//}
//void Circle::setRadius(int r) {
//	radius = r;
//}
//void Circle::show() {
//	cout << "반지름이 " << radius << "인 원" << endl;
//}
//
//void increaseBy(Circle& a, Circle& b) {
//	int r = a.getRadius() + b.getRadius();
//	a.setRadius(r);
//}
//
//int main() {
//	Circle x(10), y(5);
//	increaseBy(x, y);
//	x.show();
//}
////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//char* find(string& s, char c, bool& success) {
//	int len = s.length();
//	for (int i = 0; i < len; i++) {
//		if (s[i] == c) {
//			success = true;
//			return &s[i];
//		}
//	}
//	success = false;
//	return nullptr;
//}
//
////char& find(string s, char c, bool& success) {
////	int len = s.length();
////	for (int i = 0; i < len; i++) {
////		if (s[i] == c) {
////			success = true;
////			return s[i];
////		}
////	}
////	success = false;
////}
//
//int main() {
//	string s = "Mike";
//	bool b = false;
//	char* loc = find(s, 'M', b);
//
//	if (b == false) {
//		cout << "발견 실패" << endl;
//		return -1;
//	}
//	*loc = 'm';
//	cout << s << endl;
//}
////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//int main() {
//	int num = 5;
//	int& n = num;
//	int& n2 = n;
//}
