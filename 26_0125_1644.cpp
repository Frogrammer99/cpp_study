//#include <iostream>	
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle(const Circle& c);
//	Circle();
//	Circle(int r);
//	double getArea();
//};
//Circle::Circle(const Circle& c) {
//	this->radius = c.radius;
//	cout << "복사 생성자 실행 radius = " << radius << endl;
//}
//Circle::Circle() : Circle(1) {}
//Circle::Circle(int r) {
//	radius = r;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle src(30);
//	Circle dest(src);
//
//	cout << "원본의 면적: " << src.getArea() << endl;
//	cout << "사본의 면적: " << dest.getArea() << endl;
//}
///////////////////////////////////////////////////////////////
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//
//class Person {
//private:
//	char* name;
//	int id;
//public:
//	Person(int id, const char* name);
//	~Person();
//	void changName(const char* name);
//	void show();
//};
//Person::Person(int id, const char* name) {
//	this->id = id;
//	int len = strlen(name);
//	this->name = new char[len + 1];
//	strcpy(this->name, name);
//}
//Person::~Person() {
//	if (name)
//		delete[]name;
//}
//void Person::changName(const char* naem) {
//	if (strlen(this->name) < strlen(name))
//		return;
//	strcpy(this->name, name);
//}
//void Person::show() {
//	cout << id << ', ' << name;
//}
//
//int main() {
//	Person father(1, "Kitae");
//	Person daughter(father);
//
//	cout << "daughter 객체 생성 직후 ----" << endl;
//
//	father.show();
//	daughter.show();
//
//	daughter.changName("Grace");
//	cout << "daughter 이름을 Grace로 변경한 후 ----";
//	father.show();
//	daughter.show();
//
//	return 0;
//}
////////////////////////////////////////////////////////////////
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person {
//private:
//	char* name;
//	int id;
//public:
//	Person(int id, const char* name);
//	Person(const Person& Person);
//	~Person();
//	void changeName(const char* name);
//	void show();
//};
//Person::Person(int id, const char* name) {
//	this->id = id;
//	int len = strlen(name);
//	this->name = new char[len + 1];
//	strcpy(this->name, name);
//}
//Person::Person(const Person& Person) {
//	this->id = Person.id;
//	int len = strlen(Person.name);
//	this->name = new char[len + 1];
//	strcpy(this->name, Person.name);
//	cout << "복사 생성자 실행, 원본 객체의 이름: " << Person.name << endl;
//}
//Person::~Person() {
//	if (name)
//		delete[]name;
//}
//void Person::changeName(const char* name) {
//	if (strlen(name) > strlen(this->name))
//		return;
//	strcpy(this->name, name);
//}
//void Person::show() {
//	cout << id << ',' << name << endl;
//}
//
//int main() {
//	Person father(1, "Kitae");
//	Person daughter(father);
//
//	cout << "daughter 객체 생성 직후 ----" << endl;
//	father.show();
//	daughter.show();
//
//	daughter.changeName("Grace");
//	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
//	father.show();
//	daughter.show();
//
//	return 0;
//}
//////////////////////////////////////////////////////////////////////
