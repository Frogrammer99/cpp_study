//#include <iostream>
//
//class Adder {
//protected:
//	int add(int a, int b);
//};
//int Adder::add(int a, int b) {
//	return a + b;
//}
//
//class Subtractor {
//protected:
//	int minus(int a, int b);
//};
//int Subtractor::minus(int a, int b) {
//	return a - b;
//}
//
//class Cal : public Adder, public Subtractor {
//public:
//	int calc(char op, int a, int b);
//};
//int Cal::calc(char op, int a, int b) {
//	int res = 0;
//	switch (op) {
//	case '+': res = add(a, b);
//		break;
//	case '-': res = minus(a, b);
//		break;
//	}
//	return res;
//}
//
//int main() {
//	Cal a;
//	int num = a.calc('+', 1, 2);
//
//	std::cout << num << std::endl;
//}
/////////////////////////////////////////////
//
//class BaseIO {
//public:
//	int mode;
//};
//
//class In : public BaseIO {
//public:
//	int readPos;
//};
//
//class Out : public BaseIO {
//public:
//	int writePos;
//};
//
//class InOut : public In, public Out {
//public:
//	bool safe;
//};
//
//int main() {
//	InOut ioObj;
//
//	ioObj.readPos = 10;
//	ioObj.writePos = 20;
//	ioObj.safe = true;
//	ioObj.mode = 5; // mode가 중복되므로 오류 발생!
//}
//////////////////////////////////////////
