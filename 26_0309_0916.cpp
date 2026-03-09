////////////#include <iostream>
////////////#include <random>
////////////
////////////class GameObject {
////////////protected:
////////////	int distance;
////////////	int x, y;
////////////public:
////////////	GameObject(int startX, int startY, int distance) { x = startX; y = startY; this->distance = distance; }
////////////	virtual ~GameObject() {};
////////////	virtual void move() = 0;
////////////	virtual char getShape() const = 0;
////////////	int getX() const { return x; }
////////////	int getY() const { return y; }
////////////	bool collide(const GameObject* p);
////////////};
////////////bool GameObject::collide(const GameObject* p) {
////////////	return ((this->x == p->getX()) && (this->y == p->getY()));
////////////}
////////////
////////////class Human :public GameObject {
////////////private:
////////////	bool canMove = true;
////////////	char direction;
////////////	static const int defaultX = 0;
////////////	static const int defaultY = 9;
////////////	static const int distance = 1;
////////////public:
////////////	Human();
////////////	virtual ~Human() override {}
////////////	virtual void move() override;
////////////	virtual char getShape() const override;
////////////	void setDirection(char c);
////////////	bool getCanMove() const;
////////////
////////////};
////////////Human::Human() : GameObject(defaultX, defaultY, distance) {}
////////////void Human::move() {
////////////	if (direction == 'a') {
////////////		if (x == 0) {
////////////			canMove = false;
////////////			return;
////////////		}
////////////		x -= distance;
////////////	}
////////////	else if (direction == 'w') {
////////////		if (y == 0) {
////////////			canMove = false;
////////////			return;
////////////		}
////////////		y -= distance;
////////////	}
////////////	else if (direction == 's') {
////////////		if (y == 9) {
////////////			canMove = false;
////////////			return;
////////////		}
////////////		y += distance;
////////////	}
////////////	else if (direction == 'd') {
////////////		if (x == 19) {
////////////			canMove = false;
////////////			return;
////////////		}
////////////		x += distance;
////////////	}
////////////	canMove = true;
////////////}
////////////void Human::setDirection(char c) {
////////////	direction = c;
////////////}
////////////bool Human::getCanMove() const {
////////////	return canMove;
////////////}
////////////char Human::getShape() const {
////////////	return 'H';
////////////}
////////////
////////////class Monster :public GameObject {
////////////private:
////////////	std::mt19937& getEngine();
////////////	int randNum();
////////////	static const int defaultX = 9;
////////////	static const int defaultY = 4;
////////////	static const int distance = 2;
////////////public:
////////////	Monster();
////////////	virtual ~Monster() override {}
////////////	virtual void move() override;
////////////	virtual char getShape() const override;
////////////
////////////};
////////////Monster::Monster() : GameObject(defaultX, defaultY, distance) {}
////////////std::mt19937& Monster::getEngine() {
////////////	static std::random_device rd;
////////////	static std::mt19937 gen(rd());
////////////	return gen;
////////////}
////////////int Monster::randNum() {
////////////	std::uniform_int_distribution<int> dis(0, 3);
////////////	return dis(getEngine());
////////////}
////////////void Monster::move() {
////////////	int move = randNum() % 4; //0: up, 1: down, 2:left, 3:right
////////////
////////////	while (1) {
////////////		if (move == 0) { // UP
////////////			if (y > 7) {
////////////				move += 1;
////////////				move %= 4;
////////////				continue;
////////////			}
////////////			y += distance;
////////////			break;
////////////		}
////////////		else if (move == 1) { // DOWN
////////////			if (y < 2) {
////////////				move += 1;
////////////				move %= 4;
////////////				continue;
////////////			}
////////////			y -= distance;
////////////			break;
////////////		}
////////////		else if (move == 2) { // LEFT
////////////			if (x < 2) {
////////////				move += 1;
////////////				move %= 4;
////////////				continue;
////////////			}
////////////			x -= distance;
////////////			break;
////////////		}
////////////		else if (move == 3) { // RIGHT
////////////			if (x > 17) {
////////////				move += 1;
////////////				move %= 4;
////////////				continue;
////////////			}
////////////			x += distance;
////////////			break;
////////////		}
////////////	}
////////////}
////////////char Monster::getShape() const {
////////////	return 'M';
////////////}
////////////
////////////class Food : public GameObject {
////////////private:
////////////	std::mt19937& getEngine();
////////////	int randNum();
////////////	const static int defaultX = 15;
////////////	const static int defaultY = 0;
////////////	const static int distance = 1;
////////////public:
////////////	Food() : GameObject(defaultX, defaultY, distance) {}
////////////	virtual ~Food() override {}
////////////	virtual void move();
////////////	virtual char getShape() const;
////////////};
////////////std::mt19937& Food::getEngine() {
////////////	static std::random_device rd;
////////////	static std::mt19937 gen(rd());
////////////	return gen;
////////////}
////////////int Food::randNum() {
////////////	std::uniform_int_distribution<int> dis(0, 3);
////////////	return dis(getEngine());
////////////}
////////////void Food::move() {
////////////	int move = randNum() % 4; //0: up, 1: down, 2:left, 3:right
////////////
////////////	while (1) {
////////////		if (move == 0) { // UP
////////////			if (y == 9) {
////////////				move += 1;
////////////				move %= 4;
////////////				continue;
////////////			}
////////////			y+= distance;
////////////			break;
////////////		}
////////////		else if (move == 1) { // DOWN
////////////			if (y == 0) {
////////////				move += 1;
////////////				move %= 4;
////////////				continue;
////////////			}
////////////			y -= distance;
////////////			break;
////////////		}
////////////		else if (move == 2) { // LEFT
////////////			if (x == 0) {
////////////				move += 1;
////////////				move %= 4;
////////////				continue;
////////////			}
////////////			x -= distance;
////////////			break;
////////////		}
////////////		else if (move == 3) { // RIGHT
////////////			if (x == 19) {
////////////				move += 1;
////////////				move %= 4;
////////////				continue;
////////////			}
////////////			x += distance;
////////////			break;
////////////		}
////////////	}
////////////}
////////////char Food::getShape() const {
////////////	return 'F';
////////////}
////////////
////////////class Game {
////////////private:
////////////	char map[200];
////////////public:
////////////	Game();
////////////	void showMap() const;
////////////	char getDirection() const;
////////////	void updateMap(const GameObject* h, const GameObject* m, const GameObject* f);
////////////	void execute();
////////////};
////////////Game::Game() {
////////////	for (int i = 0; i < 200; i++)
////////////		map[i] = '-';
////////////}
////////////void Game::showMap() const {
////////////	for (int i = 0; i < 200; ++i) {
////////////		std::cout << map[i];
////////////		int line = (i - 19) % 20;
////////////		if (line == 0)
////////////			std::cout << std::endl;
////////////	}
////////////}
////////////char Game::getDirection() const {
////////////	char direction;
////////////	std::cout << "왼쪽(a), 아래(s), 위(w), 오른쪽(d): ";
////////////	std::cin >> direction;
////////////
////////////	return direction;
////////////}
////////////void Game::updateMap(const GameObject* h, const GameObject* m, const GameObject* f) {
////////////	for (int i = 0; i < 200; i++)
////////////		map[i] = '-';
////////////
////////////	int HumanIndex = h->getY() * 20 + h->getX();
////////////	int MonsterIndex = m->getY() * 20 + m->getX();
////////////	int FoodIndex = f->getY() * 20 + f->getX();
////////////
////////////	map[FoodIndex] = f->getShape();
////////////	map[HumanIndex] = h->getShape();
////////////	map[MonsterIndex] = m->getShape();
////////////}
////////////void Game::execute() {
////////////	std::cout << "** Human의 Food 먹기 게임을 시작합니다. **" << std::endl;
////////////	GameObject* hPtr = new Human();
////////////	Human* downHPtr = (Human*)hPtr;
////////////	GameObject* mPtr = new Monster();
////////////	GameObject* fPtr = new Food();
////////////
////////////	int turn = 1;
////////////
////////////	while (1) {
////////////		updateMap(hPtr, mPtr, fPtr);
////////////		showMap();
////////////
////////////		while (1) {
////////////			char direction = getDirection();
////////////			downHPtr->setDirection(direction);
////////////			hPtr->move();
////////////			if (downHPtr->getCanMove())
////////////				break;
////////////		}
////////////		mPtr->move();
////////////		if (turn == 4 || turn == 5)
////////////			fPtr->move();
////////////
////////////		if (hPtr->collide(mPtr)) {
////////////			updateMap(hPtr, mPtr, fPtr);
////////////			showMap();
////////////			std::cout << "Eaten By Monster" << std::endl << "Game Over";
////////////			break;
////////////		}
////////////		else if (hPtr->collide(fPtr)) {
////////////			updateMap(hPtr, mPtr, fPtr);
////////////			showMap();
////////////			std::cout << "Success to Eat Food" << std::endl << "Clear!";
////////////			break;
////////////		}
////////////		else if (mPtr->collide(fPtr)) {
////////////			updateMap(hPtr, mPtr, fPtr);
////////////			showMap();
////////////			std::cout << "Monster Eat the Food" << std::endl << "Game Over";
////////////			break;
////////////		}
////////////		++turn;
////////////	}
////////////}
////////////
////////////int main() {
////////////	Game g;
////////////	g.execute();
////////////}
//////////#include <iostream>
//////////#include <string>
//////////
//////////class Converter {
//////////protected:
//////////	double ratio;
//////////	virtual double convert(double src) = 0;    //src를 다른 단위로 변환한다.
//////////	virtual std::string getSourceString() const = 0; // src 단위 명칭
//////////	virtual std::string getDestString() const = 0;   // dest 단위 명칭
//////////public:
//////////	Converter(double ratio) { this->ratio = ratio; }
//////////	void run();
//////////};
//////////void Converter::run() {
//////////	double src;
//////////	std::cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
//////////	std::cout << getSourceString() << "을 입력하세요: ";
//////////	std::cin >> src;
//////////	std::cout << "변환결과: " << convert(src) << getDestString() << std::endl; 
//////////}
//////////
//////////class WonToDollar : public Converter {
//////////public:
//////////	WonToDollar(double ratio);
//////////	virtual double convert(double src) override;
//////////	virtual std::string getSourceString() const override;
//////////	virtual std::string getDestString() const override;
//////////};
//////////WonToDollar::WonToDollar(double ratio) : Converter(ratio){}
//////////double WonToDollar::convert(double src) {
//////////	return src / ratio;
//////////}
//////////std::string WonToDollar::getSourceString() const {
//////////	return "원";
//////////}
//////////std::string WonToDollar::getDestString() const {
//////////	return "달러";
//////////}
//////////
//////////class KmToMile : public Converter{
//////////public:
//////////	KmToMile(double ratio);
//////////	virtual double convert(double src) override;
//////////	virtual std::string getSourceString() const override;
//////////	virtual std::string getDestString() const override;
//////////};
//////////KmToMile::KmToMile(double ratio) : Converter(ratio) {}
//////////double KmToMile::convert(double src) {
//////////	return src / ratio;
//////////}
//////////std::string KmToMile::getSourceString() const {
//////////	return "Km";
//////////}
//////////std::string KmToMile::getDestString() const {
//////////	return "Mile";
//////////}
//////////
//////////int main() {
//////////	KmToMile toMile(1.609344);
//////////	toMile.run();
//////////}
////////////////////////////////////////////////////////////////////////////////////////////////
////////#include <iostream>
////////#include <string>
////////
////////class LoopAdder {
////////private:
////////	std::string name;
////////	int x, y, sum;
////////	void read();
////////	void write() const;
////////protected:
////////	LoopAdder(std::string name = "") { this->name = name; }
////////	int getX() const { return x; }
////////	int getY() const { return y; }
////////	virtual int calculate() = 0;
////////public:
////////	void run();
////////};
////////void LoopAdder::read() {
////////	std::cout << name << ":" << std::endl;
////////	std::cout << "처음 수에서 두 번째 수까지 더합니다. 두 수를 입력하세요: ";
////////	std::cin >> x >> y;
////////}
////////void LoopAdder::write() const {
////////	std::cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다" << std::endl;
////////}
////////void LoopAdder::run() {
////////	read();
////////	sum = calculate();
////////	write();
////////}
////////
////////class ForLoopAdder : public LoopAdder {
////////public:
////////	ForLoopAdder(std::string name) : LoopAdder(name) {}
////////	virtual int calculate();
////////};
////////int ForLoopAdder::calculate() {
////////	int x = getX();
////////	int y = getY();
////////	int sum = 0;
////////
////////	for (x; x <= y; x++) {
////////		sum += x;
////////	}
////////
////////	return sum;
////////}
////////class WhileLoopAdder : public LoopAdder {
////////public:
////////	WhileLoopAdder(std::string name) : LoopAdder(name) {}
////////	virtual int calculate();
////////};
////////int WhileLoopAdder::calculate() {
////////	int x = getX();
////////	int y = getY();
////////	int sum = 0;
////////
////////	while (x <= y) {
////////		sum += x;
////////		++x;
////////	}
////////
////////	return sum;
////////}
////////
////////class DoWhileLoopAdder : public LoopAdder {
////////public:
////////	DoWhileLoopAdder(std::string name) : LoopAdder(name) {}
////////	virtual int calculate();
////////};
////////int DoWhileLoopAdder::calculate() {
////////	int x = getX();
////////	int y = getY();
////////	int sum = 0;
////////
////////	do {
////////		sum += x;
////////		++x;
////////	} while (x <= y);
////////
////////	return sum;
////////}
////////
////////
////////int main() {
////////	WhileLoopAdder whileLoop("While Loop");
////////	DoWhileLoopAdder doWhileLoop("Do While Loop");
////////
////////	whileLoop.run();
////////	doWhileLoop.run();
////////}
///////////////////////////////////////////////////////////////////
//////#include <iostream>
//////
//////class AbstractGate {
//////protected:
//////	bool x, y;
//////public:
//////	void set(bool x, bool y) { this->x = x; this->y = y; }
//////	virtual bool operation() = 0;
//////};
//////
//////class ANDGate : public AbstractGate {
//////public:
//////	virtual bool operation();
//////};
//////bool ANDGate::operation() {
//////	return (x && y);
//////}
//////
//////class ORGate : public AbstractGate {
//////public:
//////	virtual bool operation();
//////};
//////bool ORGate::operation() {
//////	return (x || y);
//////}
//////
//////class XORGate : public AbstractGate {
//////public:
//////	virtual bool operation();
//////};
//////bool XORGate::operation() {
//////	return ((x && !y) || (!x && y));
//////}
//////
//////int main() {
//////	ANDGate andGate;
//////	ORGate orGate;
//////	XORGate xorGate;
//////
//////	andGate.set(true, false);
//////	orGate.set(true, false);
//////	xorGate.set(true, false);
//////	std::cout.setf(std::ios::boolalpha);
//////	std::cout << andGate.operation() << std::endl;
//////	std::cout << orGate.operation() << std::endl;
//////	std::cout << xorGate.operation() << std::endl;
//////}
/////////////////////////////////////////////////////////////////////
////#include <iostream>
////
////class AbstractStack {
////public:
////	virtual bool push(int n) = 0;
////	virtual bool pop(int& n) = 0;
////	virtual int size() const = 0;
////};
////
////class IntStack : public AbstractStack {
////private:
////	int stack[100];
////	int index = -1;
////public:
////	virtual bool push(int n) override;
////	virtual bool pop(int& n) override;
////	virtual int size() const override;
////};
////
////bool IntStack::push(int n) {
////	if (index == 99)
////		return false;
////	++index;
////	stack[index] = n;
////	return true;
////}
////bool IntStack::pop(int& n) {
////	if (index == -1)
////		return false;
////	n = stack[index];
////	--index;
////	return true;
////}
////int IntStack::size() const {
////	return index + 1;
////}
////
////int main() {
////	AbstractStack* sP = new IntStack();
////
////	for (int i = 0; i < 100; i++) {
////		sP->push(i);
////	}
////	std::cout << sP->size() << std::endl;
////
////	int pop = 0;
////	for (int i = 99; i >= 0; --i) {
////		sP->pop(pop);
////		std::cout << pop << " ";
////		if (i % 10 == 0)
////			std::cout << std::endl;
////	}
////
////	std::cout << sP->size() << std::endl;
////}
/////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//
//class Printer {
//protected:
//	std::string model;
//	std::string manufacturer;
//	int printedCount = 0, availableCount;
//public:
//	Printer(std::string model, std::string manufacturer, int availableCount) { this->model = model; this->manufacturer = manufacturer; this->availableCount = availableCount; }
//	virtual void print(int pages) = 0;
//	virtual void show() const = 0;
//};
//
//class InkPrinter : public Printer {
//private:
//	int availableInk;
//public:
//	InkPrinter(std::string model, std::string manufacturer, int availableCount, int availableInk);
//	virtual void print(int pages) override;
//	virtual void show() const override;
//};
//InkPrinter::InkPrinter(std::string model, std::string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) {
//	this->availableInk = availableInk;
//}
//void InkPrinter::print(int pages) {
//	if (pages > availableCount) {
//		std::cout << "용지 부족." << std::endl;
//		return;
//	}
//	else if (pages > availableInk) {
//		std::cout << "잉크 부족." << std::endl;
//		return;
//	}
//	availableCount -= pages;
//	printedCount += pages;
//	availableInk -= pages;
//}
//void InkPrinter::show() const {
//	std::cout << "잉크젯: " << model << ", " << manufacturer << ", 남은 종이 " << availableCount << "장, 남은 잉크 " << availableInk << std::endl;
//}
//
//class LaserPrinter : public Printer {
//private:
//	int availableToner;
//public:
//	LaserPrinter(std::string model, std::string manufacturer, int availableCount, int availableToner);
//	virtual void print(int pages) override;
//	virtual void show() const override;
//};
//LaserPrinter::LaserPrinter(std::string model, std::string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) {
//	this->availableToner = availableToner;
//}
//void LaserPrinter::print(int pages) {
//	if (pages > availableCount) {
//		std::cout << "용지 부족." << std::endl;
//		return;
//	}
//	else if (pages > availableToner) {
//		std::cout << "토너 부족." << std::endl;
//		return;
//	}
//	availableCount -= pages;
//	printedCount += pages;
//	availableToner -= pages;
//}
//void LaserPrinter::show() const {
//	std::cout << "레이저: " << model << ", " << manufacturer << ", 남은 종이 " << availableCount << "장, 남은 토너 " << availableToner << std::endl;
//}
//
//int main() {
//	int select, pages;
//	char op;
//
//	Printer* iPtr = new InkPrinter("Officejet V40", "HP", 5, 10);
//	Printer* lPtr = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
//
//	std::cout << "현재 작동중인 2대의 프린터는 아래와 같다" << std::endl;
//	iPtr->show();
//	lPtr->show();
//
//	while (1) {
//		std::cout << "프린터(1: 잉크젯, 2: 레이저)와 매수 입력: ";
//		std::cin >> select >> pages;
//		if (select == 1)
//			iPtr->print(pages);
//		else
//			lPtr->print(pages);
//		iPtr->show();
//		lPtr->show();
//
//		std::cout << "계속 프린트 하시겠습니까?(y/n): ";
//		std::cin >> op;
//		if (op == 'n')
//			break;
//	}
//
//}
////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

class Editor {
private:
	Editor* nextPtr = nullptr;
public:
	void insert(Editor* gPtr);
	virtual void show() = 0;
	void deleteGraphic();
	Editor* nextGraphic();
};
void Editor::insert(Editor* gPtr) {
	nextPtr = gPtr;
}
void Editor::deleteGraphic() {
	delete nextPtr;
}
Editor* Editor::nextGraphic() {
	return nextPtr;
}

class Line : public Editor {
public:
	virtual void show() override;
};
void Line::show() {
	std::cout << "LINE" << std::endl;
}

class Rect : public Editor {
public:
	virtual void show() override;
};
void Rect::show() {
	std::cout << "RECT" << std::endl;
}

class Circle : public Editor {
public:
	virtual void show() override;
};
void Circle::show() {
	std::cout << "CIRCLE" << std::endl;
}

