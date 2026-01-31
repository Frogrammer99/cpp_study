//#include <iostream>
//using namespace std;
//
//class Accumulator {
//private:
//	int value;
//public:
//	Accumulator(int value);
//	Accumulator& add(int n);
//	int get();
//};
//Accumulator::Accumulator(int value) {
//	this->value = value;
//}
//Accumulator& Accumulator::add(int n) {
//	value += n;
//	return *this;
//}
//
//int Accumulator::get() {
//	return value;
//}
//
//int main() {
//	Accumulator acc(10);
//	acc.add(5).add(6).add(7);
//	cout << acc.get();
//}
//////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Buffer {
//private:
//	string text;
//public:
//	Buffer(string text);
//	void add(string text);
//	void print();
//};
//Buffer::Buffer(string text) {
//	this->text = text;
//}
//void Buffer::add(string text) {
//	this->text += text;
//}
//void Buffer::print() {
//	cout << text << endl;
//}
//
//Buffer& append(Buffer& b, string text) {
//	b.add(text);
//	return b;
//}
//
//int main() {
//	Buffer buf("Hello");
//	Buffer& temp = append(buf, "Guys");
//	temp.print();
//	buf.print();
//}
/////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book {
//private:
//	string title;
//	int price;
//public:
//	Book(const string title, int price);
//	~Book();
//	void set(string title, int price);
//	void show();
//};
//Book::Book(const string title, int price) {
//	this->title = title;
//	this->price = price;
//}
//Book::~Book() {}
//void Book::set(string title, int price) {
//	this->title = title;
//	this->price = price;
//}
//void Book::show() {
//	cout << title << ' ' << price << "원" << endl;
//}
//
//int main() {
//	Book cpp("명품 C++", 10000);
//	Book java = cpp;
//	java.set("명품 JAVA", 12000);
//	cpp.show();
//	java.show();
//}
//#include <iostream>
//using namespace std;
//
//class Dept {
//private:
//	int size;
//	int* score;
//public:
//	Dept(int size);
//	//Dept(const Dept& dept);
//	~Dept();
//	int getSize();
//	void read();
//	bool isOver60(int index);
//};
//Dept::Dept(int size) {
//	this->size = size;
//	score = new int[size] {0, };
//}
///*/Dept::Dept(const Dept& dept) {
//	this->size = dept.size;
//	this->score = new int[this->size];
//	for (int i = 0; i < size; i++)
//		this->score[i] = dept.score[i];
//}*/
//Dept::~Dept() {
//	delete[]score;
//}
//int Dept::getSize() {
//	return size;
//}
//void Dept::read() {
//	cout << size << "개 점수 입력: ";
//	for (int i = 0; i < size; i++) {
//		cin >> score[i];
//	}
//}
//bool Dept::isOver60(int index) {
//	if (score[index] > 60)
//		return true;
//	return false;
//}
//int countPass(Dept& dept) {
//	int count = 0;
//	for (int i = 0; i < dept.getSize(); i++) {
//		if (dept.isOver60(i))
//			count++;
//	}
//	return count;
//}
//
//int main() {
//	Dept com(10);
//	com.read();
//	int n = countPass(com);
//	cout << "60점 이상은 " << n << "명" << endl;
//}
///////////////////////////////////////////////