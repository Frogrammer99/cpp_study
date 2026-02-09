//#include <string>
//
//class Food;
//
//class Person {
//private:
//	int id;
//public:
//	void shopping(Food food) {
//	}
//	int get() {
//		return id;
//	}
//};
//
//class Food {
//private:
//	int price;
//	std::string name;
//public:
//	Food(std::string name, int pirce);
//	friend void Person::shopping(Food food);
//	void buy();
//};
//
//void Person::shopping(Food food) {
//	if (food.price < 1000)
//		food.buy();
//}
///////////////////////////////////////////
//class Sample {
//public:
//	int x;
//	Sample(int x) { this->x = x; }
//	friend bool isZero(Sample& a) {
//		if (a.x == 0) return true;
//		else return false;
//	}
//};
//
//int main() {
//	Sample a(5), b(6);
//	bool ret = a.isZero(b);
//}
//#include <string>
//#include <iostream>
//
//class Book {
//private:
//	std::string title;
//	int price, pages;
//public:
//	Book(std::string title = "", int price = 0, int pages = 0);
//	void show();
//	std::string getTitle();
//	void operator+= (int op2);
//	void operator-= (int op2);
//};
//Book::Book(std::string title, int price, int pages) {
//	this->title = title;
//	this->price = price;
//	this->pages = pages;
//}
//void Book::show() {
//	std::cout << title << ' ' << price << "원 " << pages << " 페이지" << std::endl;
//}
//std::string Book::getTitle() {
//	return title;
//}
//void Book::operator+= (int op2) {
//	this->price += op2;
//}
//void Book::operator -= (int op2) {
//	this->price -= op2;
//}
//
////int main() {
////	Book a("청춘", 20000, 300), b("미래", 30000, 500);
////	a += 500;
////	b -= 500;
////	a.show();
////	b.show();
////}
////
