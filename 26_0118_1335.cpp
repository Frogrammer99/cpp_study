//#include <iostream>
//using namespace std;
//
//int main() {
//	int* p = new int;
//
//	if (!p) {
//		cout << "메모리 할당 불가" << endl;
//		return -1;
//	}
//
//	*p = 5;
//
//	int n = *p;
//	cout << "*p: " << *p << endl;
//	cout << "n: " << n << endl;
//
//	delete p;
//}
///////////////////////////////////////////////
//#include <iostream>	
//using namespace std;
//
//int main() {
//	int arr[2][3] = {
//		{1, 2, 3},
//		{44, 55, 66}
//	};
//
//	int (*ptr)[3] = arr;
//
//	cout << "debuging....." << endl;
//
//	return 0;
//
//}
//////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "입력할 정수의 개수: ";
//	int n;
//	cin >> n;
//	if (n <= 0)
//		return 0;
//	int* p = new int[n];
//	if (!p)
//		return 0;
//
//	for (int i = 0; i < n; i++) {
//		cout << i + 1 << "번째 정수: ";
//		cin >> p[i];
//	}
//
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += p[i];
//
//	cout << "평균: " << sum / n << endl;
//
//	delete[]p;
//}
///////////////////////////////////////////////
//#include <iostream>	
//using namespace std;
//
//int main() {
//	int* array = new int[20]();
//
//	for (int i = 0; i < 20; i++)
//		cout << array[i] << "  ";
//
//	cout << endl << endl;
//
//	for (int i = 0; i < 20; i++)
//		cout << *(array++) << " ";
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int* pArray = new int[4] {1, 2, 3, 4};
//
//	delete[]pArray;
//
//}
////////////////////////////////////////////////////
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
//	Circle* c1 = new Circle(30);
//
//	cout << c1->getArea() << endl;
//	cout << (*c1).getArea() << endl;
//	delete c1;
//} 
//////////////////////////////////////////////////
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
//	void setRadius(int r);
//	double getArea();
//};
//Circle::Circle() : Circle(1) {};
//Circle::Circle(int r) {
//	radius = r;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행" << endl;
//}
//void Circle::setRadius(int r) {
//	radius = r;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle* p, * q;
//	p = new Circle;
//	q = new Circle(30);
//	cout << p->getArea() << endl << q->getArea() << endl;
//	delete p;
//	delete q;
//}
/////////////////////////////////////////////////////////////
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
//	void setRadius(int r);
//	double getArea();
//};
//Circle::Circle() : Circle(1) {};
//Circle::Circle(int r) {
//	radius = r;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행" << endl;
//}
//void Circle::setRadius(int r) {
//	radius = r;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	int radius;
//
//	while (1) {
//		cout << "정수 반지름 입력(음수면 종료): ";
//		cin >> radius;
//		if (radius < 0)
//			break;
//		Circle* ptr = new Circle(radius);
//		cout << "면적: " << ptr->getArea() << endl;
//		delete ptr;
//	}
//}
//////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle(int r);
//	double getArea();
//};
//Circle::Circle(int r) {
//	radius = r;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle* ptr = new Circle[3]{ Circle(10), Circle(20), Circle(30) };
//	Circle* p = new Circle(10);
//
//	cout << ptr[0].getArea() << endl;
//	cout << (ptr + 2)->getArea() << endl;
//	cout << (*p).getArea() << endl;
//}
////////////////////////////////////////////////////////////
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
//Circle::Circle() : Circle(1) {};
//Circle::Circle(int r) {
//	radius = r;
//	cout << "생성자 호출 radius = " << radius << endl;
//}
//void Circle::setRadius(int r) {
//	radius = r;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle* ptr = new Circle[3];
//
//	for (int i = 0; i < 3; i++) {
//		ptr[i].setRadius((i + 1) * 10);
//	}
//
//	for (int i = 0; i < 3; i++)
//		cout << ptr[i].getArea() << endl;
//
//	Circle* p = ptr;
//
//	for (int i = 0; i < 3; i++)
//		cout << (*p++).getArea() << endl;
//
//	p -= 3;
//
//	for (int i = 0; i < 3; i++)
//		cout << (p++)->getArea() << endl;
//
//	delete[]ptr;
//}
///////////////////////////////////////////////////
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
	cout << "생성하고자 하는 원의 수: ";
	int n, radius;
	cin >> n;
	if (n < 0)
		return 0;

	Circle* arr = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << " 의 반지름: ";
		cin >> radius;
		arr[i].setRadius(radius);
	}

	Circle* ptr = arr;

	for (int i = 0; i < n; i++)
		cout << (ptr++)->getArea() << endl;

	delete arr;
}