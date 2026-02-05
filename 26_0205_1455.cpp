//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	Power operator+ (const Power& op2);
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "Kick: " << kick << " " << "Punch: " << punch << std::endl;
//}
//Power Power::operator+ (const Power& op2) {
//	Power temp;
//	temp.kick = this->kick + op2.kick;
//	temp.punch = this->punch + op2.punch;
//	return temp;
//}
//
//int main() {
//	Power a(3, 5), b(4, 6), c;
//	c = a + b;
//	a.show();
//	b.show();
//	c.show();
//}
//////////////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	bool operator== (const Power& op2) const;
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "Kick: " << kick << " Punch: " << punch << std::endl;
//}
//bool Power::operator== (const Power& op2) const {
//	if (this->kick == op2.kick && this->punch == op2.punch)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Power a(3, 5), b(3, 5);
//	a.show();
//	b.show();
//	if (a == b)
//		std::cout << "equal" << std::endl;
//	else
//		std::cout << "not equal" << std::endl;
//}
///////////////////////////////////////////////////////////
//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	Power& operator+= (Power op2);
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "Kick: " << kick << " Punch: " << punch << std::endl;
//}
//Power& Power::operator+= (Power op2) {
//	this->kick += op2.kick;
//	this->punch += op2.punch;
//
//	return *this;
//}
//
//int main() {
//	Power a(3, 5), b(4, 6), c;
//	a.show();
//	b.show();
//	c = a += b;
//	a.show();
//	c.show();
//
//	int n1 = 3, n2 = 5;
//	int n3 = 0;
//	n3 = n1 += n2;
//	std::cout << n1 << std::endl;
//	std::cout << n3 << std::endl;
//}
////////////////////////////////////////////////
//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	Power operator+ (int op2);
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "Kick: " << kick << " Punch: " << punch << std::endl;
//}
//Power Power::operator+ (int op2) {
//	Power temp;
//	temp.kick = this->kick + op2;
//	temp.punch = this->punch + op2;
//	return temp;
//}
//
//int main() {
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = a + 2;
//	a.show();
//	b.show();
//}
/////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	bool operator> (int n);
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "K: " << kick << " P: " << punch << std::endl;
//}
//bool Power::operator> (int n) {
//	return (this->kick > n && this->punch > n);
//}
//
//int main() {
//	Power a(3, 5);
//	if (a > 2)
//		std::cout << "true" << std::endl;
//	else
//		std::cout << "false" << std::endl;
//}
///////////////////////////////////////////////////////////////////
#include <iostream>

class Power {
private:
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0);
	void show();
	Power operator& (Power op2);
};
Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}
void Power::show() {
	std::cout << "K: " << kick << " P: " << punch << std::endl;
}
Power Power::operator& (Power op2) {
	Power temp;
	temp.kick = this->kick & op2.kick;
	temp.punch = this->punch & op2.punch;
	return temp;
}

int main() {
	Power a(3, 5), b(2, 11);
	Power c;
	c = a & b;
	c.show();
}