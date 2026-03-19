////////////#include <iostream>
////////////
////////////class Comparable {
////////////public:
////////////	virtual bool operator> (const Comparable& op2) = 0;
////////////	virtual bool operator< (const Comparable& op2) = 0;
////////////	virtual bool operator== (const Comparable& op2) = 0;
////////////};
////////////
////////////class Circle : public Comparable {
////////////private:
////////////	int radius;
////////////public:
////////////	Circle(int radius) { this->radius = radius; }
////////////	int getRadius() { return radius; }
////////////	virtual bool operator> (const Comparable& op2);
////////////	virtual bool operator< (const Comparable& op2);
////////////	virtual bool operator== (const Comparable& op2);
////////////};
////////////bool Circle::operator> (const Comparable& op2) {
////////////	Circle* ptr = (Circle*)&op2;
////////////	return (this->getRadius() > ptr->getRadius());
////////////}
////////////bool Circle::operator< (const Comparable& op2) {
////////////	Circle* ptr = (Circle*)&op2;
////////////	return (this->getRadius() < ptr->getRadius());
////////////}
////////////bool Circle::operator== (const Comparable& op2) {
////////////	Circle* ptr = (Circle*)&op2;
////////////	return (this->getRadius() == ptr->getRadius());
////////////}
////////////
////////////template <typename T>
////////////T bigger(T a, T b) {
////////////	if (a > b)
////////////		return a;
////////////	else
////////////		return b;
////////////}
////////////
////////////int main() {
////////////	int a = 20, b = 50, c;
////////////	c = bigger(a, b);
////////////	std::cout << c << std::endl;
////////////
////////////	Circle waffle(10), pizza(20), y;
////////////	y = bigger(waffle, pizza);
////////////	std::cout << y.getRadius() << std::endl;
////////////}
///////////////////////////////////////////////////////////////////////////////////////////
//////////#include <iostream>
//////////#include <vector>
//////////
//////////class InputVector {
//////////private:
//////////	std::vector<int> v;
//////////public:
//////////	void push(int n) { v.push_back(n); }
//////////	double getAVG();
//////////	void printElements();
//////////	void execute();
//////////};
//////////double InputVector::getAVG() {
//////////	double avg = 0;
//////////	std::vector<int>::iterator it;
//////////
//////////	for (it = v.begin(); it != v.end(); ++it)
//////////		avg += *it;
//////////	avg /= v.size();
//////////
//////////	return avg;
//////////}
//////////void InputVector::printElements() {
//////////	std::vector<int>::iterator it;
//////////
//////////	for (it = v.begin(); it != v.end(); ++it)
//////////		std::cout << *it << ' ';
//////////	std::cout << std::endl;
//////////}
//////////void InputVector::execute() {
//////////	int n;
//////////	
//////////	while (1) {
//////////		std::cout << "정수를 입력하세요(0 입력 시 종료): ";
//////////		std::cin >> n;
//////////		if (n == 0)
//////////			break;
//////////		push(n);
//////////		printElements();
//////////		std::cout << "평균: " << getAVG() << std::endl;
//////////	}
//////////}
//////////
//////////int main() {
//////////	InputVector v;
//////////	v.execute();
//////////}
////////////////////////////////////////////////////
////////#include <iostream>
////////#include <string>
////////#include <vector>
////////#include <random>
////////
////////class Random {
////////private:
////////	std::mt19937& getEngine();
////////public:
////////	int randNum(int max);
////////};
////////std::mt19937& Random::getEngine() {
////////	static std::random_device rd;
////////	static std::mt19937 gen(rd());
////////	return gen;
////////}
////////int Random::randNum(int max) {
////////	std::uniform_int_distribution<int> dis(0, max);
////////	return dis(getEngine());
////////}
////////
////////class Nation {
////////private:
////////	std::string nation;
////////	std::string capital;
////////public:
////////	Nation(std::string nation, std::string capital) { this->nation = nation; this->capital = capital; }
////////	std::string getNation() { return nation; }
////////	std::string getCapital() { return capital; }
////////};
////////
////////class NationQuiz {
////////private:
////////	std::vector<Nation> v;
////////public:
////////	void pushNation();
////////	void quiz();
////////	void run();
////////};
////////void NationQuiz::pushNation() {
////////	std::string nation, capital;
////////	std::cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << std::endl;
////////	
////////	while (1) {
////////		bool isExist = false;
////////
////////		std::cout << "나라와 수도를 입력(no no 입력 시 종료)" << std::endl;
////////		std::cout << v.size() + 1 << ": ";
////////		std::cin >> nation >> capital;
////////		if (nation == "no" && capital == "no")
////////			break;
////////		
////////		std::vector<Nation>::iterator it;
////////		for (it = v.begin(); it != v.end(); ++it) {
////////			if (capital == it->getCapital()) {
////////				std::cout << "already Exist!" << std::endl;
////////				isExist = true;
////////			}
////////		}
////////
////////		if (isExist == true)
////////			continue;
////////
////////		v.push_back(Nation(nation, capital));
////////	}
////////}
////////void NationQuiz::quiz() {
////////	Random r;
////////	std::string nation, capital;
////////	std::string answer;
////////	int randNum;
////////	int size = v.size();
////////
////////	switch (size) {
////////	case 0:
////////		std::cout << "Vector is Empty." << std::endl;
////////		break;
////////	default:
////////		while (1) {
////////			randNum = r.randNum(v.size() - 1);
////////			nation = v[randNum].getNation();
////////			capital = v[randNum].getCapital();
////////
////////			std::cout << nation << "의 수도는?(exit 입력 시 종료) ";
////////			std::cin >> answer;
////////
////////			if (answer == "exit")
////////				break;
////////
////////			if (answer == capital)
////////				std::cout << "correct!" << std::endl;
////////			else
////////				std::cout << "InCorrect!" << std::endl;
////////
////////		}
////////		break;
////////	}
////////}
////////
////////void NationQuiz::run() {
////////	std::cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << std::endl;
////////
////////	int select;
////////	while (1) {
////////		std::cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 ===> ";
////////		std::cin >> select;
////////		if (select == 3)
////////			break;
////////		else if (select == 1)
////////			pushNation();
////////		else if (select == 2)
////////			quiz();
////////	}
////////}
////////
////////int main() {
////////	NationQuiz nQ;
////////	nQ.run();
////////}
/////////////////////////////////////////////////////////////////////////////////////
//////#include <iostream>
//////#include <string>
//////#include <vector>
//////
//////class Book {
//////private:
//////	int year;
//////	std::string bookName, author;
//////public:
//////	Book(int year, std::string bookName, std::string author) { this->year = year; this->bookName = bookName; this->author = author; }
//////	std::string getAuthor() { return author; }
//////	int getYear() { return year; }
//////	std::string getBookName() { return bookName; }
//////};
//////
//////class ManageSystem {
//////private:
//////	std::vector<Book> bookV;
//////public:
//////	void pushBooks();
//////	void search();
//////	void run();
//////};
//////void ManageSystem::pushBooks() {
//////	int year;
//////	std::string bookName, author;
//////	std::cout << "입고할 책을 입력. 년도에 -1을 입력하면 입고를 종료." << std::endl;
//////
//////	while (1) {
//////		std::cout << "Year: ";
//////		std::cin >> year;
//////		if (year == -1)
//////			break;
//////		std::cout << "BookName: ";
//////		std::cin.ignore();
//////		getline(std::cin, bookName, '\n');
//////		std::cout << "Author: ";
//////		std::cin >> author;
//////
//////		std::cout << std::endl;
//////		bookV.push_back(Book(year, bookName, author));
//////	}
//////
//////	std::cout << "총 입고된 책은 " << bookV.size() << "입니다." << std::endl;
//////}
//////void ManageSystem::search() {
//////	int year;
//////	std::string author;
//////
//////	std::cout << "검색하고자 하는 저자 이름을 입력하세요: ";
//////	std::cin >> author;
//////
//////	std::vector<Book>::iterator it;
//////	for (it = bookV.begin(); it != bookV.end(); ++it) {
//////		if (it->getAuthor() == author) {
//////			std::cout << it->getYear() << "년도 " << it->getBookName() << " " << it->getAuthor() << std::endl;
//////		}
//////	}
//////
//////	std::cout << "검색하고자 하는 년도를 입력하세요: ";
//////	std::cin >> year;
//////
//////	for (it = bookV.begin(); it != bookV.end(); ++it) {
//////		if (it->getYear() == year) {
//////			std::cout << it->getYear() << "년도 " << it->getBookName() << " " << it->getAuthor() << std::endl;
//////		}
//////	}
//////}
//////
//////void ManageSystem::run() {
//////	pushBooks();
//////	search();
//////}
//////
//////int main() {
//////	ManageSystem ms;
//////	ms.run();
//////}
/////////////////////////////////////////////////////////////////
////#include <iostream>
////#include <string>
////#include <map>
////
////class ScoreManage {
////private:
////	std::map<std::string, int> scores;
////public:
////	void insertScore();
////	void searchScore();
////	void run();
////};
////void ScoreManage::insertScore() {
////	int score;
////	std::string name;
////	std::cout << "이름과 점수: ";
////	std::cin >> name >> score;
////
////	scores.insert(make_pair(name, score));
////}
////void ScoreManage::searchScore() {
////	std::string name;
////	std::cout << "이름: ";
////	std::cin >> name;
////
////	if (scores.find(name) == scores.end())
////		std::cout << "존재하지 않음." << std::endl;
////	else
////		std::cout << name << "의 점수는 " << scores.at(name) << std::endl;
////}
////void ScoreManage::run() {
////	std::cout << "***** 점수 관리 프로그램 시작 *****" << std::endl;
////
////	int select;
////	while (1) {
////		std::cout << "입력: 1, 조회: 2, 종료: 3 ==> ";
////		std::cin >> select;
////
////		if (select == 3)
////			break;
////		else if (select == 1)
////			insertScore();
////		else if (select == 2)
////			searchScore();
////	}
////}
////
////int main() {
////	ScoreManage sm;
////	sm.run();
////}
//////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//#include <map>
//
//class CipherManage {
//private:
//	std::map<std::string, std::string> cipherM;
//public:
//	void insertCipher();
//	void examine();
//	void run();
//};
//void CipherManage::insertCipher() {
//	std::string name, cipher;
//	std::cout << "이름과 암호 입력: ";
//	std::cin >> name >> cipher;
//
//	cipherM.insert(make_pair(name, cipher));
//}
//void CipherManage::examine() {
//	std::string name, cipher;
//	std::cout << "이름: ";
//	std::cin >> name;
//
//	while (1) {
//		if (cipherM.find(name) == cipherM.end()) {
//			std::cout << "이름 존재하지 않음" << std::endl;
//			break;
//		}
//		std::cout << "암호: ";
//		std::cin >> cipher;
//
//		if (cipherM[name] == cipher) {
//			std::cout << "Correct" << std::endl;
//			break;
//		}
//		else
//			std::cout << "InCorrect" << std::endl;
//	}
//
//}
//void CipherManage::run() {
//	std::cout << "***** 암호 관리 프로그램 시작 *****" << std::endl;
//
//	bool run = true;
//	int select;
//	while (run) {
//		std::cout << "삽입: 1, 검사: 2, 종료: 3 ===> ";
//		std::cin >> select;
//
//		switch (select) {
//		case 1:
//			insertCipher();
//			break;
//		case 2:
//			examine();
//			break;
//		case 3:
//			run = false;
//			break;
//		}
//	}
//}
//
//int main() {
//	CipherManage cm;
//	cm.run();
//
//}
///////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <vector>

class Circle {
private:
	std::string name;
	int radius;
public:
	Circle(int radius, std::string name) { this->radius = radius; this->name = name; }
	double getRadius() { return 3.14 * radius * radius; }
	std::string getName() { return name; }
};

class CircleManage {
private:
	std::vector<Circle> cmVector;
public:
	void pushCircle();
	void deleteCircle();
	void printAll();
	void run();
};
void CircleManage::pushCircle() {
	int radius;
	std::string name;
	std::cout << "생성하고자 하는 원의 반지름과 이름: ";
	std::cin >> radius >> name;

	cmVector.push_back(Circle(radius, name));
}
void CircleManage::deleteCircle() {
	std::string name;
	std::cout << "삭제하고자 하는 원의 이름: ";
	std::cin >> name;

	std::vector<Circle>::iterator it;
	for (it = cmVector.begin(); it != cmVector.end();) {
		if (it->getName() == name)
			it = cmVector.erase(it);
		else
			++it;
	}
}
void CircleManage::printAll() {
	std::vector<Circle>::iterator it;
	for (it = cmVector.begin(); it != cmVector.end(); ++it)
		std::cout << it->getName() << std::endl;
}
void CircleManage::run() {
	std::cout << "원 관리 프로그램" << std::endl;

	int select;
	bool run = true;
	while (run) {
		std::cout << "삽입: 1, 삭제: 2, 모두보기: 3, 종료: 4 ==> ";
		std::cin >> select;

		switch (select) {
		case 1:
			pushCircle();
			break;
		case 2:
			deleteCircle();
			break;
		case 3:
			printAll();
			break;
		case 4:
			run = false;
			break;
		}
	}
}

int main() {
	CircleManage cm;
	cm.run();
}