//#include <iostream>
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle(int radius = 0);
//	int getRadius();
//	void setRadius(int radius);
//	double getArea();
//};
//Circle::Circle(int radius) {
//	this->radius = radius;
//}
//int Circle::getRadius() {
//	return radius;
//}
//void Circle::setRadius(int radius) {
//	this->radius = radius;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//class NamedCircle : public Circle {
//private:
//	std::string name;
//public:
//	NamedCircle(int radius, std::string name);
//	std::string getName();
//	static inline std::string maxShow(int num, NamedCircle** arr);
//};
//NamedCircle::NamedCircle(int radius, std::string name) : Circle(radius) {
//	this->name = name;
//}
//std::string NamedCircle::getName() {
//	return name;
//}
//
//std::string NamedCircle::maxShow(int num, NamedCircle** arr) {
//	int max = arr[0][0].getRadius();
//	std::string maxName = arr[0][0].getName();
//	if (num == 1)
//		return maxName;
//	else
//		for (int i = 1; i < num; i++) {
//			if (max < arr[i][0].getRadius()) {
//				max = arr[i][0].getRadius();
//				maxName = arr[i][0].getName();
//			}
//		}
//	return maxName;
//}
//
//int main() {
//	int num, radius;
//	std::string name, maxName;
//	std::cout << "개수: ";
//	std::cin >> num;
//
//	NamedCircle** ptr = new NamedCircle* [num];
//	std::cout << num << "개의 정수 반지름과 이름을 입력!" << std::endl;
//
//	for (int i = 0; i < num; i++) {
//		std::cout << i << ": ";
//		std::cin >> radius >> name;
//		ptr[i] = new NamedCircle(radius, name);
//	}
//	maxName = NamedCircle::maxShow(num, ptr);
//
//	std::cout << maxName << std::endl;
//}
/////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class Point {
//private:
//	int x, y;
//public:
//	Point(int x, int y);
//	int getX();
//	int getY();
//protected:
//	void move(int x, int y);
//};
//Point::Point(int x, int y) {
//	this->x = x;
//	this->y = y;
//}
//int Point::getX() {
//	return x;
//}
//int Point::getY() {
//	return y;
//}
//void Point::move(int x, int y) {
//	this->x = x;
//	this->y = y;
//}
//
//class ColorPoint : public Point {
//private:
//	std::string color;
//public:
//	ColorPoint(int x = 0, int y = 0, std::string color = "Black");
//	void setPoint(int x, int y);
//	void setColor(std::string color);
//	void show();
//};
//ColorPoint::ColorPoint(int x, int y, std::string color) : Point(x, y) {
//	this->color = color;
//}
//void ColorPoint::setPoint(int x, int y) {
//	this->move(x, y);
//}
//void ColorPoint::setColor(std::string color) {
//	this->color = color;
//}
//void ColorPoint::show() {
//	std::cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점이다." << std::endl;
//}
//
////int main() {
////	ColorPoint cp(5, 5, "RED");
////	cp.setPoint(10, 20);
////	cp.setColor("BLUE");
////	cp.show();
////}
//
//int main() {
//	ColorPoint zeroPoint;
//	zeroPoint.show();
//
//	ColorPoint cp(5, 5);
//	cp.setPoint(10, 20);
//	cp.setColor("BLUE");
//	cp.show();
//}
/////////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class BaseArray {
//private:
//	int capacity;
//	int* mem;
//protected:
//	BaseArray(int capacity = 100);
//	~BaseArray();
//	void put(int index, int val);
//	int get(int index);
//	int getCapacity();
//};
//BaseArray::BaseArray(int capacity) {
//	this->capacity = capacity;
//	mem = new int[capacity];
//}
//BaseArray::~BaseArray() {
//	delete[]mem;
//}
//void BaseArray::put(int index, int val) {
//	mem[index] = val;
//}
//int BaseArray::get(int index) {
//	return mem[index];
//}
//int BaseArray::getCapacity() {
//	return capacity;
//}
//
//class MyQueue : public BaseArray {
//private:
//	int qP = -1;
//	int oP = -1;
//	int len = -1;
//public:
//	MyQueue(int capacity);
//	void enqueue(int val);
//	int dequeue();
//	int capacity();
//	int length();
//};
//MyQueue::MyQueue(int capacity) : BaseArray(capacity) {
//}
//void MyQueue::enqueue(int val) {
//	qP++;
//	len++;
//	put(qP, val);
//}
//int MyQueue::dequeue() {
//	oP++;
//	int num = get(oP);
//	len--;
//
//	return num;
//}
//int MyQueue::capacity() {
//	return getCapacity();
//}
//int MyQueue::length() {
//	return len + 1;
//}
//
//class MyStack : public BaseArray {
//private:
//	int sP = -1;
//public:
//	MyStack(int capacity);
//	void push(int val);
//	int pop();
//	int capacity();
//	int length();
//};
//MyStack::MyStack(int capacity) : BaseArray(capacity) {};
//void MyStack::push(int val) {
//	sP++;
//	put(sP, val);
//}
//int MyStack::pop() {
//	int num = get(sP);
//	sP--;
//
//	return num;
//}
//int MyStack::capacity() {
//	return getCapacity();
//}
//int MyStack::length() {
//	return sP + 1;
//}
//
//int main() {
//	MyStack mStack(100);
//	int n;
//	std::cout << "스택에 삽입할 5개의 정수를 입력하라: ";
//	for (int i = 0; i < 5; i++) {
//		std::cin >> n;
//		mStack.push(n);
//	}
//	std::cout << "스택용량: " << mStack.capacity() << ", 스택 크기: " << mStack.length() << std::endl;
//	std::cout << "스택의 모든 원소를 팝하여 출력한다: ";
//	while (mStack.length() != 0) {
//		std::cout << mStack.pop() << ' ';
//	}
//	std::cout << std::endl << "스택의 현재 크기: " << mStack.length() << std::endl;
//}
// 
//int main() {
//	MyQueue mQ(100);
//	int n;
//	std::cout << "큐에 삽입할 5개의 정수 입력: ";
//	for (int i = 0; i < 5; i++) {
//		std::cin >> n;
//		mQ.enqueue(n);
//	}
//	std::cout << "큐의 용량: " << mQ.capacity() << ", 큐의 크기: " << mQ.length() << std::endl;
//	std::cout << "큐의 원소를 순서대로 제거하여 출력한다.: ";
//	while (mQ.length() != 0) {
//		std::cout << mQ.dequeue() << ' ';
//	}
//	std::cout << std::endl << "큐의 현재 크기: " << mQ.length() << std::endl;
//}
/////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class BaseMemory {
//private:
//	char* mem;
//protected:
//	BaseMemory(int size); // 생성자가 Protected! 틀로만 사용하라는 것! 캡슐화! 즉, 해당 class는 내부 동작에만 관여한다.
//	~BaseMemory();
//	void writeBase(int index, char c);
//	char readBase(int index);
//};
//BaseMemory::BaseMemory(int size) {
//	mem = new char[size];
//}
//BaseMemory::~BaseMemory() {
//	delete[]mem;
//}
//void BaseMemory::writeBase(int index, char c) {
//	mem[index] = c;
//}
//char BaseMemory::readBase(int index) {
//	return mem[index];
//}
//
//class Rom : public BaseMemory {
//public:
//	Rom(int size, char* arr, int arrlen);
//	char read(int index);
//};
//Rom::Rom(int size, char* arr, int arrlen) : BaseMemory(size) {
//	for (int i = 0; i < arrlen; i++) {
//		writeBase(i, arr[i]);
//	}
//}
//char Rom::read(int index) {
//	return readBase(index);
//}
//
//class Ram : public BaseMemory {
//private:
//	int rP = -1;
//public:
//	Ram(int size);
//	void write(int index, char c);
//	char read(int index);
//};
//Ram::Ram(int size) : BaseMemory(size) {};
//void Ram::write(int index, char c) {
//	writeBase(index, c);
//}
//char Ram::read(int index) {
//	return readBase(index);
//}
//
//int main() {
//	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
//	Rom biosRom(1024 * 10, x, 5);
//	Ram mainMemory(1024 * 1024);
//
//	for (int i = 0; i < 5; i++)
//		mainMemory.write(i, biosRom.read(i));
//	for (int i = 0; i < 5; i++)
//		std::cout << mainMemory.read(i);
//}
//////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//
//class Printer {
//private:
//	std::string model;
//	std::string manufacturer;
//	int printCounted;
//	int availableCount;
//protected:
//	Printer(std::string model, std::string manufacturer, int availableCount);
//	bool print(int pages);
//	void state();
//};
//Printer::Printer(std::string model, std::string manufacturer, int availableCount) {
//	this->model = model;
//	this->manufacturer = manufacturer;
//	this->availableCount = availableCount;
//	printCounted = 0;
//}
//bool Printer::print(int pages) {
//	if (availableCount < pages) {
//		std::cout << "용지가 부족합니다." << std::endl;
//		return false;
//	}
//	printCounted += pages;
//	availableCount -= pages;
//	return true;
//}
//void Printer::state() {
//	std::cout << model << ", " << manufacturer << ", 남은 종이 " << availableCount;
//}
//
//class InkPrinter : public Printer {
//private:
//	int availableInk;
//public:
//	InkPrinter(std::string model, std::string manufacturer, int availableCount, int availableInk);
//	void printInk(int pages);
//	void InkState();
//};
//InkPrinter::InkPrinter(std::string model, std::string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) {
//	this->availableInk = availableInk;
//}
//void InkPrinter::printInk(int pages) {
//	if (availableInk < pages) {
//		std::cout << "잉크가 부족합니다." << std::endl;
//		return;
//	}
//	if (print(pages)) {
//		availableInk -= pages;
//		std::cout << "프린트하였습니다." << std::endl;
//	}
//}
//void InkPrinter::InkState() {
//	std::cout << "잉크젯: ";
//	state();
//	std::cout << ", " << "남은 잉크 " << availableInk << std::endl;
//}
//
//class LaserPrinter : public Printer {
//private:
//	int availableToner;
//public:
//	LaserPrinter(std::string model, std::string manufacturer, int availableCount, int availableToner);
//	void printLaser(int pages);
//	void LaserState();
//};
//LaserPrinter::LaserPrinter(std::string model, std::string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) {
//	this->availableToner = availableToner;
//}
//void LaserPrinter::printLaser(int pages) {
//	if (availableToner < pages) {
//		std::cout << "토너가 부족합니다." << std::endl;
//		return;
//	}
//	if (print(pages)) {
//		availableToner -= pages;
//		std::cout << "프린트하였습니다." << std::endl;
//	}
//	
//}
//void LaserPrinter::LaserState() {
//	std::cout << "레이저: ";
//	state();
//	std::cout << ", " << "남은 토너 " << availableToner << std::endl;
//}
//
//class ManagePrinter {
//private:
//	std::string model, manufacturer;
//	int availableCount, availableInk, availableToner;
//	int select, pages;
//	char answer;
//public:
//	void execute();
//};
//void ManagePrinter::execute() {
//	std::cout << "사용할 잉크 프린터의 사양을 기입해주세요." << std::endl;
//	std::cout << "모델: ";
//	getline(std::cin, model, '\n');
//	std::cout << "제조사: ";
//	getline(std::cin, manufacturer, '\n');
//	std::cout << "용지 수: ";
//	std::cin >> availableCount;
//	std::cin.ignore();
//	std::cout << "잉크 양: ";
//	std::cin >> availableInk;
//	std::cin.ignore();
//
//	InkPrinter Ink(model, manufacturer, availableCount, availableInk);
//
//	std::cout << "사용할 레이저 프린터의 사양을 기입해주세요." << std::endl;
//	std::cout << "모델: ";
//	getline(std::cin, model, '\n');
//	std::cout << "제조사: ";
//	getline(std::cin, manufacturer, '\n');
//	std::cout << "용지 수: ";
//	std::cin >> availableCount;
//	std::cin.ignore();
//	std::cout << "토너 양: ";
//	std::cin >> availableToner;
//	std::cin.ignore();
//
//	LaserPrinter Laser(model, manufacturer, availableCount, availableToner);
//
//	std::cout << std::endl << std::endl << "현재 작동 중인 프린터는 다음과 같다. " << std::endl;
//	Ink.InkState();
//	Laser.LaserState();
//
//	while (1) {
//		std::cout << "프린터(1: 잉크젯, 2: 레이저)와 매수 입력: ";
//		std::cin >> select >> pages;
//
//		if (select == 1) {
//			Ink.printInk(pages);
//		}
//		else if (select == 2) {
//			Laser.printLaser(pages);
//		}
//		else {
//			std::cout << "잘못된 입력, 다시 입력바람." << std::endl;
//			continue;
//		}
//
//		Ink.InkState();
//		Laser.LaserState();
//
//		std::cout << "계속 프린트하시겠습니까? (y/n): ";
//		std::cin >> answer;
//		if (answer == 'n')
//			break;
//	}
//}
//
//int main() {
//	ManagePrinter mp;
//	mp.execute();
//}
///////////////////////////////////////////////////////////////////////
/*#include <iostream>
#include <string>

class Airplane {
private:
	std::string seats[8];
protected:
	Airplane();
	void book(int index, std::string name);
	void cancel(int index, std::string name);
	void state();
};
Airplane::Airplane() {
	for (int i = 0; i < 8; i++)
		seats[i] = "---";
}
void Airplane::book(int index, std::string name) {
	if (seats[index] == "---")
		seats[index] = name;
	else
		std::cout << "이미 예약된 자리입니다." << std::endl << std::endl;
}
void Airplane::cancel(int index, std::string name) {
	if (seats[index] == name)
		seats[index] = "---";
	else
		std::cout << "이름 불일치." << std::endl << std::endl;
}
void Airplane::state() {
	for (int i = 0; i < 8; i++)
		std::cout << "	" << seats[i];
	std::cout << std::endl;
}

class Plane_07 : public Airplane {
public:
	void book_07(int index, std::string name);
	void cancel_07(int index, std::string name);
	void state_07();
};
void Plane_07::book_07(int index, std::string name) {
	book(index, name);
}
void Plane_07::cancel_07(int index, std::string name) {
	cancel(index, name);
}
void Plane_07::state_07() {
	state();
}

class Plane_12 : public Airplane {
public:
	void book_12(int index, std::string name);
	void cancel_12(int index, std::string name);
	void state_12();
};
void Plane_12::book_12(int index, std::string name) {
	book(index, name);
}
void Plane_12::cancel_12(int index, std::string name) {
	cancel(index, name);
}
void Plane_12::state_12() {
	state();
}

class Plane_17 : public Airplane {
public:
	void book_17(int index, std::string name);
	void cancel_17(int index, std::string name);
	void state_17();
};
void Plane_17::book_17(int index, std::string name) {
	book(index, name);
}
void Plane_17::cancel_17(int index, std::string name) {
	cancel(index, name);
}
void Plane_17::state_17() {
	state();
}

class Manage {
public:
	void execute();
};
void Manage::execute() {
	int seat, select;
	std::string name;

	Plane_07 p07;
	Plane_12 p12;
	Plane_17 p17;

	std::cout << "***** 한성항공에 오신것을 환영합니다 *****" << std::endl;

	while (1) {
		std::cout << "예약:1, 취소:2, 보기:3, 끝내기:4 ===> ";
		std::cin >> select;
		if (select == 4)
			break;
		else if (select == 1) {
			std::cout << "07시:1, 12시:2, 17시:3 ===> ";
			std::cin >> select;

			if (select == 1) {
				std::cout << "07시:";
				p07.state_07();
				std::cout << "좌석번호: ";
				std::cin >> seat;
				std::cout << "이름 입력: ";
				std::cin >> name;
				p07.book_07(seat - 1, name);
			}
			else if (select == 2) {
				std::cout << "12시:";
				p12.state_12();
				std::cout << "좌석번호: ";
				std::cin >> seat;
				std::cout << "이름 입력: ";
				std::cin >> name;
				p12.book_12(seat - 1, name);
			}
			else if (select == 3) {
				std::cout << "17시:";
				p17.state_17();
				std::cout << "좌석번호: ";
				std::cin >> seat;
				std::cout << "이름 입력: ";
				std::cin >> name;
				p17.book_17(seat - 1, name);
			}
		}
		else if (select == 2) {
			std::cout << "07시:1, 12시:2, 17시:3 ===> ";
			std::cin >> select;
			if (select == 1) {
				std::cout << "07시: ";
				p07.state_07();
				std::cout << "좌석번호: ";
				std::cin >> seat;
				std::cout << "이름 입력: ";
				std::cin >> name;
				p07.cancel_07(seat - 1, name);
			}
			else if (select == 2) {
				std::cout << "12시: ";
				p12.state_12();
				std::cout << "좌석번호: ";
				std::cin >> seat;
				std::cout << "이름 입력: ";
				std::cin >> name;
				p12.cancel_12(seat - 1, name);
			}
			else if (select == 3) {
				std::cout << "17시: ";
				p17.state_17();
				std::cout << "좌석번호: ";
				std::cin >> seat;
				std::cout << "이름 입력: ";
				std::cin >> name;
				p17.cancel_17(seat - 1, name);
			}
		}
		else if (select == 3) {
			std::cout << "07시: ";
			p07.state_07();
			std::cout << "12시: ";
			p12.state_12();
			std::cout << "17시: ";
			p17.state_17();
			std::cout << std::endl;
		}
	}
}

int main() {
	Manage a;
	a.execute();
}
///!!!!!!!!!!!!!!! 아니!!!!! 왜 상속 단원인데 상속 필요없는 문제를 내는건데~~~!!!!!!!!!! 풀고나서 이상해서 다시 문제 봤더니 상속 필요없다고 되어있잖아!!!!!!!!!!!!!!*/
///////////////////// 오....그런데 이거 클래스 분할 문제 측면에서는 좋을지도? 기능별로 분할해서 클래스로 만들어보자
#include <iostream>
#include <string>

class Seat {
private:
	int seatNum;
	std::string name;
public:
	Seat();
	std::string getName();
	void setSeat(int seatNum, std::string name);
};
Seat::Seat() {
	seatNum = 0;
	name = "---";
}
std::string Seat::getName() {
	return name;
}
void Seat::setSeat(int seatNum, std::string name) {
	this->seatNum = seatNum;
	this->name = name;
}

class Schedule {
private:
	Seat* SeatPtr = new Seat[8];
public:
	~Schedule();
	void book(int seatNum, std::string name);
	void cancel(int seatNum, std::string name);
	void show();
};
Schedule::~Schedule() {
	delete[]SeatPtr;
}
void Schedule::book(int seatNum, std::string name) {
	if (SeatPtr[seatNum - 1].getName() == "---")
		SeatPtr[seatNum - 1].setSeat(seatNum, name);
	else
		std::cout << "이미 예약된 좌석입니다." << std::endl;
}
void Schedule::cancel(int seatNum, std::string name) {
	if (SeatPtr[seatNum - 1].getName() == name)
		SeatPtr[seatNum - 1].setSeat(seatNum, "---");
	else
		std::cout << "이름 불일치." << std::endl;
}
void Schedule::show() {
	for (int i = 0; i < 8; i++)
		std::cout << "	" << SeatPtr[i].getName();
	std::cout << std::endl;
}

class Console {
private:
	int seatNum, select;
	std::string name;
public:
	Console();
	void setSeatNum(int seatNum);
	void setName(std::string name);
	int getSeatNum();
	std::string getName();

};

class AirlineBook {
private:
	int seatNum;
	std::string name;
	Schedule* SchedulePtr = new Schedule[3];
public:
	~AirlineBook();
	void setSeatNum(int seatNum);
	void setName(std::string name);
	int getSeatNum();
	std::string getName();
	void execute();
};
AirlineBook::~AirlineBook() {
	delete[]SchedulePtr;
}
void AirlineBook::setSeatNum(int seatNum) {
	this->seatNum = seatNum;
}
void AirlineBook::setName(std::string name) {
	this->name = name;
}
int AirlineBook::getSeatNum() {
	return seatNum;
}
std::string AirlineBook::getName() {
	return name;
}
void AirlineBook::execute() {

}