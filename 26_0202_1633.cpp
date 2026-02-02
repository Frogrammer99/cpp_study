//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	int money;
//	void addMoney(int money);
//	static inline int sharedMoney = 10;
//	static void addShared(int n);
//};
//void Person::addMoney(int money) {
//	this->money += money;
//}
//void Person::addShared(int n) {
//	sharedMoney += n;
//}
//
//int main() {
//	Person::addShared(50);
//	cout << Person::sharedMoney << endl;
//
//	Person han;
//	han.money = 100;
//	han.sharedMoney = 200;
//	Person::sharedMoney = 300;
//	Person::addShared(100);
//
//	cout << han.money << ' ' << Person::sharedMoney << endl;
//}
////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	static inline int numOfCircles;
//	int radius;
//public:
//	Circle(int r = 1);
//	~Circle();
//	double getArea();
//	static int getNumOfCircles();
//};
//Circle::Circle(int r) {
//	radius = r;
//	numOfCircles++;
//}
//Circle::~Circle() {
//	numOfCircles--;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int Circle::getNumOfCircles() {
//	return numOfCircles;
//}
//
//int main() {
//	Circle* p = new Circle[10];
//	cout << "생존하고 있는 원의 개수: " << Circle::getNumOfCircles() << endl;
//
//	delete[]p;
//	cout << "생존하고 있는 원의 개수: " << Circle::getNumOfCircles() << endl;
//}
//////////////////////////////////////////////////////////////////////////////////
//class PersonError {
//private:
//	int money;
//public:
//	static int getMoney();
//};
//int PersonError::getMoney() {
//	return money;
//}
//
//////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//#include <random>
//using namespace std;
//
//class Person {
//private:
//	string name;
//	int num;
//public:
//	Person(string name);
//	void setNum(int num);
//	int getNum();
//	string getName();
//};
//Person::Person(string name) {
//	this->name = name;
//}
//void Person::setNum(int num) {
//	this->num = num;
//}
//int Person::getNum() {
//	return num;
//}
//string Person::getName() {
//	return name;
//}
//
//class UpDown {
//private:
//	static inline string name[2] = { "김인수", "오은경" };
//public:
//	mt19937& getEngine();
//	int generateNum();
//	void Game();
//};
//mt19937& UpDown::getEngine() {
//	static random_device rd;
//	static mt19937 gen(rd());
//	return gen;
//}
//int UpDown::generateNum() {
//	uniform_int_distribution<int>dis(0, 99);
//	return dis(getEngine());
//}
//void UpDown::Game() {
//	Person p[2]{ name[0], name[1] };
//	int randNum = generateNum();
//	int answer = 0;
//	int min = 0, max = 99;
//	int turn = 0;
//	cout << "게임을 시작한다." << endl;
//
//	while (1) {;
//		cout << "답은 " << min << " 그리고 " << max << " 사이에 있다." << endl;
//		cout << p[turn % 2].getName() << ": ";
//		cin >> answer;
//
//		if (answer == randNum) {
//			cout << p[turn % 2].getName() << "이 승리했다." << endl;
//			return;
//		}
//
//		if (answer < randNum && answer > min)
//			min = answer;
//		else if (answer > randNum && answer <max)
//			max = answer;
//		turn++;
//	}
//}
//
//int main() {
//	UpDown G1;
//	G1.Game();
//}
//////////////////////////////////////////////////////////
