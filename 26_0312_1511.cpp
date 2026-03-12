//////#include <iostream>
//////
//////class Circle {
//////private:
//////	int radius;
//////public:
//////	Circle(int radius = 1) { this->radius = radius; }
//////	int getRadius() const { return radius; }
//////};
//////
//////template <typename T>
//////void myswap(T& a, T& b) {
//////	T tmp;
//////	tmp = a;
//////	a = b;
//////	b = tmp;
//////}
//////
//////int main() {
//////	int a = 4, b = 5;
//////	myswap(a, b);
//////	std::cout << "a = " << a << ", " << "b = " << b << std::endl;
//////
//////	double c = 0.3, d = 12.5;
//////	myswap(c, d);
//////	std::cout << "c = " << c << ", " << "d = " << d << std::endl;
//////
//////	Circle donut(5), pizza(20);
//////	myswap(donut, pizza);
//////	std::cout << "donut 반지름 = " << donut.getRadius() << std::endl;
//////	std::cout << "pizza 반지름 = " << pizza.getRadius() << std::endl;
//////}
//////#include <iostream>
//////
//////template <typename T>
//////int bigger(T a, T b) {
//////	if (a > b)
//////		return a;
//////	else
//////		return b;
//////}
//////
//////int main() {
//////	int a = 10, b = 22;
//////	std::cout << bigger(a, b) << std::endl;
//////
//////	double c = 20.1, d = 234.2;
//////	std::cout << bigger(c, d) << std::endl;
//////}
////#include <iostream>
////
////template <typename T>
////T addArr(T* arr, int size) {
////	T sum = 0;
////	for (int i = 0; i < size; i++) {
////		sum += arr[i];
////	}
////	return sum;
////}
////
////int main() {
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////	int sum = addArr(arr, 10);
////
////	std::cout << sum << std::endl;
////
////	double doubleArr[] = { 1.1, 1.23, 3.123, 3.1 };
////	double doubleSum = addArr(doubleArr, 4);
////
////	std::cout << doubleSum << std::endl;
////}
////#include <iostream>
////
////template <typename T1, typename T2>
////void mCopy(T1* src, T2* dest, int size) {
////	for (int i = 0; i < size; i++) {
////		dest[i] = (T2)src[i];
////	}
////}
////
////int main() {
////	char arr1[4] = {'a', 'b', 'c', 'd'};
////	double arr2[4];
////	mCopy(arr1, arr2, 4);
////
////	for (int i = 0; i < 4; i++)
////		std::cout << arr2[i] << " ";
////}
///////////////////////////////////////////////////////////////
////#include <iostream>
////
////template <typename T>
////void Print(T* arr, int size) {
////	for (int i = 0; i < size; i++)
////		std::cout << arr[i] << " ";
////	std::cout << std::endl;
////}
////
////int main() {
////	double arr[5] = { 2.34, 324.1, 1.123, 2.45, 634.12 };
////	Print(arr, 5);
////	std::cout << std::endl;
////
////	char arr2[5] = { 1, 2, 3, 4, 5 };
////	Print(arr2, 5);
////}
/////////////////////////////////////////////
////#include <iostream>
////
////template <typename T>
////void Print(T* arr, int size) {
////	for (int i = 0; i < size; i++)
////		std::cout << arr[i] << " ";
////	std::cout << std::endl;
////}
////
////void Print(char* arr, int size) {
////	for (int i = 0; i < size; i++)
////		std::cout << (int)arr[i] << " ";
////	std::cout << std::endl;
////}
////
////int main() {
////	char arr[3] = { 1, 2, 3 };
////	Print(arr, 3);
////
//// }
////////////////////////////////////
//#include <iostream>
//
//template <typename T>
//class MyStack {
//private:
//	int tos;
//	T data[100];
//public:
//	MyStack();
//	void push(T element);
//	T pop();
//};
//
//template <typename T>
//MyStack<T>::MyStack() {
//	tos = -1;
//}
//template <typename T>
//void MyStack<T>::push(T element) {
//	if (tos == 99) {
//		std::cout << "Stack is Full." << std::endl;
//		return;
//	}
//	++tos;
//	data[tos] = element;
//}
//template <typename T>
//T MyStack<T>::pop() {
//	T retData;
//	if (tos == -1) {
//		std::cout << "Stack is Empty." << std::endl;
//		return -1;
//	}
//	retData = data[tos];
//	--tos;
//	return retData;
//}
//
//int main() {
//	MyStack<int> iStack;
//	iStack.push(3);
//	std::cout << iStack.pop() << std::endl;
//
//	MyStack<double> dStack;
//	dStack.push(3.3);
//	std::cout << dStack.pop() << std::endl;
//
//	MyStack<char>* ptr = new MyStack<char>();
//	ptr->push('c');
//	std::cout << ptr->pop() << std::endl;
//}
//////////////////////////////////////////////////////////
#include <iostream>
#include <string>

template <typename T>
class MyStack {
private:
	int tos;
	T data[100];
public:
	MyStack();
	void push(T element);
	T pop();
};
template <typename T>
MyStack<T>::MyStack() {
	tos = -1;
}
template <typename T>
void MyStack<T>::push(T element) {
	if (tos == 99) {
		std::cout << "Stack is Full." << std::endl;
		return;
	}
	++tos;
	data[tos] = element;
}
template <typename T>
T MyStack<T>::pop() {
	if (tos == -1) {
		std::cout << "Stack is Empty." << std::endl;
		return -1;
	}
	int retData = data[tos];
	--tos;
	return retData;
}

class Point {
private:
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	void show() { std::cout << '(' << x << ',' << y << ')' << std::endl; }
};

int main() {
	MyStack<int*> ipStack;
}