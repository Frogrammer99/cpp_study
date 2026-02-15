//#include <iostream>
//
//class Circle {
//private:
//	int radius;
//	int count;
//	static inline int TotalCount = 0;
//public:
//	Circle(int radius = 0);
//	Circle(const Circle& c1);
//	~Circle();
//	void show();
//	Circle& operator++();
//	Circle operator++(int);
//	Circle& operator=(const Circle& c1);
//};
//Circle::Circle(int radius) {
//	this->radius = radius;
//	TotalCount++;
//	this->count = TotalCount;
//}
//Circle::Circle(const Circle& c1) {
//	this->radius = c1.radius;
//	TotalCount++;
//	this->count = TotalCount;
//}
//Circle::~Circle() {
//	std::cout << "Circle " << count << " 소멸" << std::endl;
//	if (this->count != -1)
//		TotalCount--;
//
//}
//void Circle::show() {
//	std::cout << radius << std::endl;
//}
//Circle& Circle::operator++() {
//	this->radius++;
//	return *this;
//}
//Circle Circle::operator++(int) {
//	Circle tmp = *this;
//	this->radius++;
//	return tmp;
//}
//Circle& Circle::operator=(const Circle& c1) {
//	this->radius = c1.radius;
//	return *this;
//}
//
//int main() {
//	Circle a(5), b(4);
//	++a;
//	b = a++;
//	a.show();
//	b.show();
//}
/////////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle(int radius = 0);
//	void show();
//	Circle& operator=(const Circle& c1);
//	friend Circle operator+ (int op1, const Circle& c1);
//};
//Circle::Circle(int radius) {
//	this->radius = radius;
//}
//void Circle::show() {
//	std::cout << this->radius << std::endl;
//}
//Circle& Circle::operator=(const Circle& c1) {
//	this->radius = c1.radius;
//	return *this;
//}
//Circle operator+ (int op1, const Circle& c1) {
//	Circle tmp;
//	tmp.radius = op1 + c1.radius;
//	return tmp;
//}
//
//int main() {
//	Circle a(5), b(4);
//	b = 1 + a;
//	a.show();
//	b.show();
//}
//////////////////////////////////////////////////////
//#include <iostream>
//
//class Statistics {
//private:
//	int size;
//	int index = 0;
//	int* arr;
//public:
//	Statistics(int size);
//	Statistics& operator<< (int value);
//	void operator>> (int& avg);
//	void operator~ ();
//};
//Statistics::Statistics(int size) {
//	this->size = size;
//	arr = new int[size];
//}
//Statistics& Statistics::operator<< (int value) {
//	arr[index] = value;
//	index++;
//	return *this;
//}
//void Statistics::operator>> (int& avg) {
//	int average = 0;
//	for (int i = 0; i < index; i++) {
//		average += arr[i];
//	}
//	avg = average / size;
//}
//void Statistics::operator~() {
//	for (int i = 0; i < index; i++)
//		std::cout << arr[i] << " ";
//	std::cout << std::endl;
//}
//
//int main() {
//	int size;
//	std::cout << "배열의 크기 입력: ";
//	std::cin >> size;
//	Statistics stat(size);
//
//	int* arr = new int[size];
//	std::cout << size - 2 << "개의 양의 정수 입력: ";
//	for (int i = 0; i < size - 2; i++)
//		std::cin >> arr[i];
//
//	for (int i = 0; i < size - 2; i++)
//		stat << arr[i];
//	stat << 100 << 200;
//	~stat;
//
//	int avg;
//	stat >> avg;
//	std::cout << "avg= " << avg << std::endl;
//}
/////////////////////////////////////////////////////
#include <iostream>

class Stack {
private:
	int arr[100];
	int sp = -1;
public:
	Stack& operator<< (int push);
	Stack& operator>> (int& pop);
	bool operator! ();
};
Stack& Stack::operator<< (int push) {
	++sp;
	arr[sp] = push;
	return *this;
}
Stack& Stack::operator>> (int& pop) {
	pop = arr[sp];
	--sp;
	return *this;
}
bool Stack::operator!() {
	return (sp == -1);
}

int main() {
	Stack stack;
	for (int i = 0; i < 33; i++)
		stack << 2 * i + 1 << 3 * i + 1 << 4 * i + 1;
	while (true) {
		if (!stack)
			break;
		int x;
		stack >> x;
		std::cout << x << ' ';
	}
}