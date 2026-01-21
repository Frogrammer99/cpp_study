//#include <iostream>
//#include <string>
//using namespace std;
//
//class Reverse {
//private:
//	string s;
//public:
//	void inputString();
//	string getString();
//	void reverseString();
//};
//void Reverse::inputString() {
//	getline(cin, s, '\n');
//}
//string Reverse::getString() {
//	return s;
//}
//void Reverse::reverseString() {
//	for (int i = s.length() - 1; i >= 0; i--)
//		cout << s[i];
//}
//
//int main() {
//	Reverse r;
//	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";
//	while (1) {
//		cout << endl;
//		cout << ">>";
//		r.inputString();
//		if (r.getString() == "exit")
//			break;
//		r.reverseString();
//	}
//}
////////////////////////////////////////////////////////////////////////////
//#include <iostream>	
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	void setRadius(int radius);
//	double getArea();
//};
//void Circle::setRadius(int radius) {
//	this->radius = radius;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle* cA = new Circle[3];
//	int value = 0;
//	int count = 0;
//
//	for (int i = 0; i < 3; i++) {
//		cout << i + 1 << "번째 반지름 입력 :";
//		cin >> value;
//		cA[i].setRadius(value);
//		if (cA[i].getArea() > 100)
//			count++;
//	}
//
//	cout << "면적이 100보다 큰 원의 개수는 " << count << "개이다." << endl;
//}
/////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	void setRadius(int radius);
//	double getArea();
//};
//void Circle::setRadius(int radius) {
//	this->radius = radius;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	int num, radius;
//	int count = 0;
//	cout << "원의 개수: ";
//	cin >> num;
//	Circle* cA = new Circle[num];
//
//	for (int i = 0; i < num; i++) {
//		cout << "원 " << i + 1 << "의 반지름: ";
//		cin >> radius;
//		cA[i].setRadius(radius);
//
//		if (cA[i].getArea() > 100)
//			count++;
//	}
//
//	cout << "면적이 100보다 큰 원의 개수는 " << count << "개 입니다." << endl;
//	delete []cA;
//}
//////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//private:
//	string name;
//	string tel;
//public:
//	Person();
//	string getName();
//	string getTel();
//	void set(string name, string tel);
//
//};
//Person::Person(){}
//string Person::getName() {
//	return name;	
//}
//string Person::getTel() {
//	return tel;
//}
//void Person::set(string name, string tel) {
//	this->name = name;
//	this->tel = tel;
//}
//
//int main() {
//	string name, tel;
//	int num = 99;
//	Person* list = new Person[3];
//
//	cout << "이름과 전화번호를 입력해 주세요" << endl;
//
//	for (int i = 0; i < 3; i++) {
//		cout << "사람 " << i + 1 << ": ";
//		cin >> name;
//		cin >> tel;
//		list[i].set(name, tel);
//	}
//	
//	cout << "모든 사람의 이름은 " << list[0].getName() << ", " << list[1].getName() << ", " << list[2].getName() << endl;
//	cout << "전화번호를 검색합니다. 이름을 입력하세요: ";
//	cin >> name;
//
//	for (int i = 0; i < 3; i++) {
//		if (list[i].getName() == name)
//			num = i;
//		if (i == 2 && num == 99) {
//			cout << "탐색 실패, 해당 이름이 존재하지 않음";
//			delete []list;
//			return -1;
//		}
//	}
//
//	cout << "전화번호는 " << list[num].getTel() << endl;
//	delete []list;
//}
/////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//private:
//	string name;
//public:
//	Person();
//	Person(string name);
//	void setName(string name);
//	string getName();
//};
//Person::Person(){}
//Person::Person(string name) {
//	this->name = name;
//}
//string Person::getName() {
//	return name;
//}
//void Person::setName(string name) {
//	this->name = name;
//}
//
//class Family {
//private:
//	Person* p;
//	string Fname;
//	int size;
//public:
//	Family(string name, int size);
//	void setName(int index, string name);
//	void show();
//	~Family();
//};
//Family::Family(string name, int size) {
//	this->size = size;
//	p = new Person[size];
//	Fname = name;
//}
//Family::~Family(){}
//void Family::setName(int index, string name) {
//	p[index] = name;
//}
//void Family::show() {
//	cout << Fname << "가족은 다음과 같이 " << size << "명 입니다." << endl;
//	for (int i = 0; i < size; i++)
//		cout << p[i].getName() << "\t";
//}
//
//int main() {
//	Family* simpson = new Family("Simpson", 3);
//	simpson->setName(0, "Mr. Simpson");
//	simpson->setName(1, "Mrs. Simpson");
//	simpson->setName(2, "Bart Simpson");
//	simpson->show();
//	delete simpson;
//}
///////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Container {
//private:
//	int size;
//public:
//	Container();
//	void fill();
//	void consume();
//	int getSize();
//};
//Container::Container() {
//	size = 10;
//}
//void Container::fill() {
//	size = 10;
//}
//void Container::consume() {
//	size -= 1;
//}
//int Container::getSize() {
//	return size;
//}
//
//class CoffeeVendingMachine {
//private:
//	Container tong[3];	// 0: coffee   1: water   2: sugar
//	void fill();
//	void selectEspresso();
//	void selectAmericano();
//	void selectSugarCoffee();
//	void show();
//public:
//	void run();
//};
//void CoffeeVendingMachine::fill() {
//	for (int i = 0; i < 3; i++)
//		tong[i].fill();
//}
//void CoffeeVendingMachine::selectEspresso() {
//	tong[0].consume();
//	tong[1].consume();
//}
//void CoffeeVendingMachine::selectAmericano() {
//	tong[0].consume();
//	tong[1].consume();
//	tong[1].consume();
//}
//void CoffeeVendingMachine::selectSugarCoffee() {
//	tong[0].consume();
//	tong[1].consume();
//	tong[1].consume();
//	tong[2].consume();
//}
//void CoffeeVendingMachine::show() {
//	cout << "커피 " << tong[0].getSize() << ", ";
//	cout <<  "물 " << tong[1].getSize() << ", ";
//	cout << "설탕 " << tong[2].getSize() << endl;
//}
//void CoffeeVendingMachine::run() {
//	int menu;
//	while (1) {
//		cout << "메뉴를 눌러주세요( 1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기) >>";
//		cin >> menu;
//		if (menu == 1) {
//			cout << "에스프레소 드세요.";
//			selectEspresso();
//		}
//		else if (menu == 2) {
//			cout << "아메리카노 드세요.";
//			selectAmericano();
//		}
//		else if (menu == 3) {
//			cout << "설탕커피 드세요.";
//			selectSugarCoffee();
//		}
//		else if (menu == 4) {
//			show();
//		}
//		else if (menu == 5) {
//			fill();
//			show();
//		}
//	}
//}
//
//int main() {
//	CoffeeVendingMachine M;
//	M.run();
//}
//////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//	string name;
//public:
//	void setCircle(string name, int radius);
//	double getArea();
//	string getName();
//};
//void Circle::setCircle(string name, int radius) {
//	this->name = name;
//	this->radius = radius;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//string Circle::getName() {
//	return name;
//}
//
//class CircleManager {
//private:
//	Circle* p;
//	int size;
//public:
//	CircleManager(int size);
//	~CircleManager();
//	void searchByName();
//	void SearchByArea();
//};
//CircleManager::CircleManager(int size) {
//	this->size = size;
//	p = new Circle[size];
//	string name;
//	int radius;
//	for (int i = 0; i < size; i++) {
//		cout << "원 " << i + 1 << "의 이름과 반지름: ";
//		cin >> name >> radius;
//		p[i].setCircle(name, radius);
//	}
//}
//CircleManager::~CircleManager() {	
//	delete []p;
// }
//void CircleManager::searchByName() {
//	string name;
//	cout << "검색하고자 하는 원의 이름: ";
//	cin >> name;
//	for (int i = 0; i < size; i++) {
//		if (p[i].getName() == name) {
//			cout << p[i].getName() <<"의 면적은 " << p[i].getArea() << endl;
//			break;
//		}
//		if (i == size - 1)
//			cout << "이름이 일치하는 원이 존재하지 않습니다." << endl;
//	}
//}
//void CircleManager::SearchByArea() {
//	int area;
//	cout << "최소면적을 정수로 입력하세요: ";
//	cin >> area;
//	cout << area << "보다 큰 원을 검색합니다." << endl;
//
//	for (int i = 0; i < size; i++) {
//		if (p[i].getArea() > area) {
//			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
//		}
//	}
//}
//
//int main() {
//	int size;
//	cout << "원의 개수: ";
//	cin >> size;
//
//	CircleManager C(size);
//	C.searchByName();
//	C.SearchByArea();
//}
//////////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//#include <locale>
//using namespace std;
//
//class Histogram {
//private:
//	string s;
//public:
//	Histogram(string s);
//	void put(string s);
//	void putc(char c);
//	void print();
//};
//Histogram::Histogram(string s) {
//	this->s = s;
//}
//void Histogram::put(string s) {
//	this->s += s;
//}
//void Histogram::putc(char c) {
//	s += c;
//}
//void Histogram::print() {
//	cout << s << endl;
//
//	int len = s.length();
//	int count = 0;
//	char alpha = 'a';
//	int hist = 0;
//
//	for (int i = 0; i < len; i++)
//		s[i] = tolower(s[i]);
//
//	for (int i = 0; i < len; i++) {
//		if (isalpha(s[i]))
//			count++;
//	}
//
//	cout << "총 알파벳 수: " << count << endl;
//	cout << endl << endl;
//
//	for (int i = 0; i < 26; i++) {
//		hist = 0;
//		for (int j = 0; j < len; j++) {
//			if (s[j] == alpha)
//				hist++;
//		}
//		cout << alpha << " (" << hist << ")" << "\t:";
//
//		for (int j = 0; j < hist; j++)
//			cout << '*';
//		cout << endl;
//		alpha++;
//	}
//}
//
//int main() {
//	Histogram H("Wise men say, only fools rush in But I can't help, ");
//	H.put("falling in love with you");
//	H.putc('-');
//	H.put("Elvis Presley");
//	H.print();
//}
/////////////////////////////////////////////////////////////////////
#include <iostream>
#include <random>
using namespace std;

class Player {
private:
	string name;
public:
	string getName();
	void setName(string name);
};

string Player::getName() {
	return name;
}
void Player::setName(string name) {
	this->name = name;
}

class Gambling {
private:
	Player p[2];
public:
	mt19937& getEngine();
	int gamble();
	void game();
};
mt19937& Gambling::getEngine() {
	static random_device rd;
	static mt19937 gen(rd());
	return gen;
}
int Gambling::gamble() {
	uniform_int_distribution<int>dis(0, 2);
	return dis(getEngine());
}
void Gambling::game() {
	string name;
	char button;
	int turn = 0;
	int num[3];

	cout << "***** 갬블링을 시작한다. *****" << endl;
	
	for (int i = 0; i < 2; i++) {
		cout << i+1 << "번째 선수 이름: ";
		cin >> name;
		p[i].setName(name);
		cin.ignore();
	}

	while (1) {
		cout << p[turn % 2].getName() << ": <Enter>";
		while (1) {
			button = cin.get();
			if (button == '\n')
				break;
			else
				cout << "Press Enter: ";
		}
		for (int i = 0; i < 3; i++)
			num[i] = gamble();
		cout << "\t\t" << num[0] << "\t" << num[1] << "\t" << num[2];
		if (num[0] == num[1]&& num[1] == num[2]) {
			cout << "\t" << p[turn % 2].getName() << " 승리." << endl;	
			break;
		}
		else
			cout << "\t" << p[turn % 2].getName() << " 실패." << endl;
		turn++;
	}
}

int main() {
	Gambling G;
	G.game();
}