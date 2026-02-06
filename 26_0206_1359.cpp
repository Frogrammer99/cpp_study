//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	Power& operator++ ();
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "K: " << kick << " P: " << punch << std::endl;
//}
//Power& Power::operator++() {
//	this->kick++;
//	this->punch++;
//	return *this;
//}
//
//int main() {
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = ++a;
//	a.show();
//	b.show();
//	++b = a;
//	b.show();
//
//	int n1 = 3, n2 = 3;
//	++n1 = n2;
//	std::cout << n1;
//}
/////////////////////////////////////////
//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	bool operator! ();
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "K: " << kick << " P: " << punch << std::endl;
//}
//bool Power::operator! () {
//	if (this->kick == 0 && this->punch == 0)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Power a, b(5, 5);
//	if (!a)
//		std::cout << "Power: 0" << std::endl;
//	else
//		std::cout << "Not Zero" << std::endl;
//
//	if (!b)
//		std::cout << "Power: 0" << std::endl;
//	else
//		std::cout << "Not Zero" << std::endl;
//}
/////////////////////////////////////////////////////
//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	Power operator++ (int);
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "K: " << kick << " P: " << punch << std::endl;
//}
//Power Power::operator++ (int) {
//	Power temp = *this;
//	this->kick++;
//	this->punch++;
//	return temp;
//}
//
//int main() {
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = a++;
//	a.show();
//	b.show();
//}
//////////////////////////////////////////////////////////////
//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	friend Power operator+ (int op1, Power op2);
//};
//
//void Power::show() {
//	std::cout << "K: " << kick << " P: " << punch << std::endl;
//}
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//Power operator+ (int op1, Power op2) {
//	Power temp;
//	temp.kick = op2.kick + op1;
//	temp.punch = op2.punch + op1;
//	return temp;
//}
//
//int main() {
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = 2 + a;
//	a.show();
//	b.show();
//}
/////////////////////////////////////////////////
//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	Power operator+ (int op2) const;
//	Power operator+ (const Power& op2) const;
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "K: " << kick << " P: " << punch << std:: endl;
//}
//Power Power::operator+ (int op2) const{
//	Power temp;
//	temp.kick = op2 + this->kick;
//	temp.punch = op2 + this->punch;
//	return temp;
//}
//Power Power::operator+ (const Power& op2) const{
//	Power temp;
//	temp.kick = this->kick + op2.kick;
//	temp.punch = this->punch + op2.punch;
//	return temp;
//}
//Power operator+ (int op1, const Power& p) {
//
//	return p + op1;
//}
//
//int main() {
//	Power a(3, 5), b;
//	b.show();
//
//	b = a + 2;
//	b.show();
//
//	b = (3 + a) + b;
//	b.show();
//}
/////////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	friend Power& operator++ (Power& op1);
//	friend Power operator++ (Power& op1, int);
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "K: " << kick << " P: " << punch << std::endl;
//}
//Power& operator++ (Power& op1) {
//	op1.kick++;
//	op1.punch++;
//	return op1;
//}
//Power operator++ (Power& op1, int) {
//	Power temp = op1;
//	op1.kick++;
//	op1.punch++;
//	
//	return temp;
//}
//
//int main() {
//	Power a(3, 5), b;
//	b = ++a;
//	a.show();
//	b.show();
//
//	b = a++;
//	a.show();
//	b.show();
//}
//////////////////////////////////////////////////////
//#include <iostream>
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0);
//	void show();
//	Power& operator<< (int n);
//};
//Power::Power(int kick, int punch) {
//	this->kick = kick;
//	this->punch = punch;
//}
//void Power::show() {
//	std::cout << "K: " << kick << " P: " << punch << std::endl;
//}
//Power& Power::operator<< (int n) {
//	this->kick += n;
//	this->punch += n;
//
//	return *this;
//}
//
//int main() {
//	Power a(3, 5);
//
//	a << 3 << 4 << 5 << 6;
//	a.show();
//}
//////////////////////////////////////////////
#include <iostream>

class Power {
private:
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0);
	friend std::ostream& operator<< (std::ostream& os, const Power& op2);
};
Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}
std::ostream& operator<< (std::ostream& os, const Power& op2) {
	os << "K: " << op2.kick << " P: " << op2.punch << std::endl;
	return os;
}

int main() {
	Power a(3, 4);

	std::cout << a;
}