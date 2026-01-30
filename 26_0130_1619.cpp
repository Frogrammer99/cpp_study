//#include <iostream>
//using namespace std;
//
//class MyIntStack {
//	int p[10];
//	int tos;
//public:
//	MyIntStack();
//	bool push(int n);
//	bool pop(int& n);
//};
//MyIntStack::MyIntStack() {
//	tos = -1;
//}
//bool MyIntStack::push(int n) {
//	tos++;
//	if (tos == 10) {
//		tos--;
//		return false;
//	}
//	p[tos] = n;
//	return true;
//}
//bool MyIntStack::pop(int& n) {
//	if (tos == -1)
//		return false;
//	n = p[tos];
//	tos--;
//	return true;
//}
//
//int main() {
//	MyIntStack a;
//	for (int i = 0; i < 11; i++) {
//		if (a.push(i))
//			cout << i << ' ';
//		else
//			cout << endl << i + 1 << " 번째 stack full" << endl;
//	}
//	int n;
//	for (int i = 0; i < 11; i++) {
//		if (a.pop(n))
//			cout << n << ' ';
//		else
//			cout << endl << i + 1 << "번째 stack empty";
//	}
//}
///////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class MyIntStack {
//private:
//	int* p;
//	int size;
//	int tos;
//public:
//	MyIntStack();
//	MyIntStack(int size);
//	MyIntStack(const MyIntStack& s);
//	~MyIntStack();
//	bool push(int n);
//	bool pop(int& n);
//};
//MyIntStack::MyIntStack() : MyIntStack(10){}
//MyIntStack::MyIntStack(int size) {
//	this ->size = size;
//	tos = -1;
//	p = new int[size];
//}
//MyIntStack::MyIntStack(const MyIntStack& s) {
//	this->p = new int[s.size];
//	this->size = s.size;
//	this->tos = s.tos;
//	if(this->tos >= 0)
//		for (int i = 0; i <= s.tos; i++)
//			this->p[i] = s.p[i];
//}
//MyIntStack::~MyIntStack() {
//	delete[]p;
//}
//bool MyIntStack::push(int n) {
//	tos++;
//	if (tos == size) {
//		tos--;
//		return false;
//	}
//	p[tos] = n;
//	return true;
//}
//bool MyIntStack::pop(int& n) {
//	if (tos == -1)
//		return false;
//	n = p[tos];
//	tos--;
//	return true;
//}
//
//int main() {
//	MyIntStack a(10);
//	a.push(10);
//	a.push(20);
//	MyIntStack b = a;
//	b.push(30);
//
//	int n;
//	a.pop(n);
//	cout << "A Pop: " << n << endl;
//	b.pop(n);
//	cout << "B pop:" << n << endl;
//}
////////////////////////////////////////////////////////////////
