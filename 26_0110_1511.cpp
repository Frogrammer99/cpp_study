//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Integer {
//private:
//	int n;
//public:
//	Integer(int number);
//	Integer(string s);
//	int get();
//	void set(int number);
//	bool isEven();
//};
//Integer::Integer(int number) {
//	n = number;
//}
//Integer::Integer(string s) {
//	n = stoi(s);
//}
//int Integer::get() {
//	return n;
//}
//void Integer::set(int number) {
//	n = number;
//}
//bool Integer::isEven() {
//	if (n % 2 == 0)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Integer n(30);
//	cout << n.get() << ' ';
//	n.set(50);
//	cout << n.get() << ' ';
//
//	Integer m("300");
//	cout << m.get() << ' ';
//	cout << m.isEven();
//}
///////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Oval {
//private:
//	int width, height;
//public:
//	Oval(int w, int h);
//	Oval();
//	~Oval();
//	int getWidth();
//	int getHeight();
//	void set(int w, int h);
//	void show();
//};
//Oval::Oval() : Oval(1, 1){}
//Oval::Oval(int w, int h) {
//	width = w;
//	height = h;
//}
//Oval::~Oval() {
//	cout << "==Destruction==  " << "width: " << width << " height: " << height << endl;
//}
//int Oval::getWidth() {
//	return width;
//}
//int Oval::getHeight() {
//	return height;
//}
//void Oval::set(int w, int h) {
//	width = w;
//	height = h;
//}
//void Oval::show() {
//	cout << "Width: " << width << " Height: " << height << endl;
//}
//
//int main() {
//	Oval a, b(3, 4);
//	a.set(10, 20);
//	a.show();
//	cout << b.getWidth() << ", " << b.getHeight() << endl;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Add {
//private:
//	int a, b;
//public:
//	void setValue(int x, int y);
//	int calculate();
//};
//class Sub {
//private:
//	int a, b;
//public:
//	void setValue(int x, int y);
//	int calculate();
//};
//class Mul {
//private:
//	int a, b;
//public:
//	void setValue(int x, int y);
//	int calculate();
//};
//class Div {
//private:
//	int a, b;
//public:
//	void setValue(int x, int y);
//	int calculate();
//};
//void Add::setValue(int x, int y) {
//	a = x;
//	b = y;
//}
//int Add::calculate() {
//	return a + b;
//}
//void Sub::setValue(int x, int y) {
//	a = x;
//	b = y;
//}
//int Sub::calculate() {
//	return a - b;
//}
//void Mul::setValue(int x, int y) {
//	a = x;
//	b = y;
//}
//int Mul::calculate() {
//	return a * b;
//}
//void Div::setValue(int x, int y) {
//	a = x;
//	b = y;
//}
//int Div::calculate() {
//	return a / b;
//}
//
//int main() {
//	int n1, n2;
//	char Oper;
//
//	Add a;
//	Sub s;
//	Mul m;
//	Div d;
//
//	while (1) {
//		cout << "두 정수와 연산자를 입력하세요 " << endl;
//		cin >> n1 >> n2 >> Oper;
//		if (Oper == '+') {
//			a.setValue(n1, n2);
//			cout << a.calculate() << endl;
//		}
//		else if (Oper == '-') {
//			s.setValue(n1, n2);
//			cout << s.calculate() << endl;
//		}
//		else if (Oper == '*') {
//			m.setValue(n1, n2);
//			cout << m.calculate() << endl;
//		}
//		else if (Oper == '/') {
//			d.setValue(n1, n2);
//			cout << d.calculate() << endl;
//		}
//		else if (Oper == 'q')
//			break;
//	}
//
//}
////////////////////////////////////////////////////////////////////////////

