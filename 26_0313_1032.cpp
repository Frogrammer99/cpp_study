//////#include <iostream>
//////
//////template <typename T>
//////class MyStack {
//////private:
//////	int tos;
//////	T data[100];
//////public:
//////	MyStack();
//////	void push(T element);
//////	T pop();
//////};
//////
//////template <typename T>
//////MyStack<T>::MyStack() {
//////	tos = -1;
//////}
//////template <typename T>
//////void MyStack<T>::push(T element) {
//////	if (tos == 99) {
//////		std::cout << "Stack is Full." << std::endl;
//////		return;
//////	}
//////	++tos;
//////	data[tos] = element;
//////}
//////template <typename T>
//////T MyStack<T>::pop() {
//////	if (tos == -1) {
//////		std::cout << "Stack is Empty." << std::endl;
//////		return T();
//////	}
//////	T retData = data[tos];
//////	--tos;
//////	return retData;
//////}
//////
//////class Point {
//////private:
//////	int x, y;
//////public:
//////	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
//////	void show() { std::cout << '(' << x << ',' << y << ')' << std::endl; }
//////};
//////
//////int main() {
//////	MyStack<int*> ipStack;
//////	int* p = new int[3];
//////	for (int i = 0; i < 3; i++)
//////		p[i] = i * 10;
//////	ipStack.push(p);
//////	int* q = ipStack.pop();
//////	for (int i = 0; i < 3; i++)
//////		std::cout << q[i] << ' ';
//////	std::cout << std::endl;
//////	delete[]p;
//////
//////	MyStack<Point> pointStack;
//////	Point a(2, 3), b;
//////	pointStack.push(a);
//////	b = pointStack.pop();
//////	b.show();
//////
//////	MyStack<Point*> pStack;
//////	pStack.push(new Point(10, 20));
//////	Point* pPoint = pStack.pop();
//////	pPoint->show();
//////
//////	MyStack<std::string> stringStack;
//////	std::string s = "c++";
//////	stringStack.push(s);
//////	stringStack.push("java");
//////	std::cout << stringStack.pop() << ' ';
//////	std::cout << stringStack.pop() << std::endl;
//////}
///////////////////////////////////////////////////////////////////////////////////////////
////#include <iostream>
////
////template <typename T1, typename T2>
////class GClass {
////	T1 data1;
////	T2 data2;
////public:
////	GClass();
////	void set(T1 a, T2 b);
////	void get(T1& a, T2& b);
////};
////template <typename T1, typename T2>
////GClass<T1, T2>::GClass() {
////	data1 = 0;
////	data2 = 0;
////}
////template<typename T1, typename T2>
////void GClass<T1, T2>::set(T1 a, T2 b) {
////	data1 = a; 
////	data2 = b;
////}
////template<typename T1, typename T2>
////void GClass<T1, T2>::get(T1& a, T2& b) {
////	a = data1;
////	b = data2;
////}
////
////int main() {
////	int a;
////	double b;
////	GClass <int, double> x;
////	x.set(2, 0.5);
////	x.get(a, b);
////	std::cout << "a = " << a << '\t' << "b= " << b << std::endl;
////	
////	char c;
////	float d;
////	GClass<char, float> y;
////	y.set('m', 12.5);
////	y.get(c, d);
////	std::cout << "c= " << c << '\t' << "d= " << d << std::endl;
////}
////////////////////////////////////////////////////////////////
////#include <iostream>
////#include <vector>
////
////int main() {
////	std::vector<int> v;
////
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////
////	for (int i = 0; i < v.size(); i++)
////		std::cout << v[i] << " ";
////	std::cout << std::endl;
////
////	v[0] = 10;
////	int m = v[2];
////	v[2] = 5;
////
////	for (int i = 0; i < v.size(); i++)
////		std::cout << v[i] << " ";
////	std::cout << std::endl;
////}
////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//	std::vector<std::string> sv;
//	std::string name;
//
//	std::cout << "이름을 5개 입력: " << std::endl;
//	for (int i = 0; i < 5; i++) {
//		std::cout << i + 1 << ": ";
//		getline(std::cin, name);
//		sv.push_back(name);
//	}
//	name = sv.at(0);
//	for (int i = 1; i < sv.size(); i++) {
//		if (name < sv[i])
//			name = sv[i];
//	}
//
//	std::cout << "사전 순으로 가장 뒤에 나오는 이름은 " << name << "이다." << std::endl;
//}
////////////////////////////////////////////////////////
//#include <iostream>
//#include <vector>
//
//int main() {
//	std::vector<int> v;
//
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//
//	std::vector<int>::iterator it;
//
//	for (it = v.begin(); it != v.end(); ++it) {
//		int n = *it;
//		std::cout << n << ' ';
//	}
//}
/////////////////////////////////////////////////////////////
//#include <iostream>
//#include <vector>
//
//int main() {
//
//	std::vector<int> v;
//
//	for (int i = 0; i < 100; ++i)
//		v.push_back(i);
//
//	std::vector<int>::iterator it;
//
//	for (it = v.begin(); it != v.end(); ++it)
//		*it *= 2;
//
//	for (int i = 0; i < v.size(); ++i) {
//		std::cout << v[i] << ' ';
//		if (i % 10 == 0)
//			std::cout << std::endl;
//	}
//}
//#include <iostream>
//#include <string>
//#include <map>
//
//int main() {
//	std::map<std::string, std::string> dic;
//
//	dic.insert(std::make_pair("love", "사랑"));
//	dic.insert(std::make_pair("apple", "사과"));
//	dic["cherry"] = "체리";
//
//	std::cout << "저장된 단어 개수 " << dic.size() << std::endl;
//
//	std::string eng;
//	while (true) {
//		std::cout << "찾고 싶은 단어: ";
//		getline(std::cin, eng);
//		if (eng == "exit")
//			break;
//
//		if (dic.find(eng) == dic.end())
//			std::cout << "없음" << std::endl;
//		else
//			std::cout << dic[eng] << std::endl;
//	}
//	std::cout << "종료." << std::endl;
//}
///////////////////////////////////////////////////
