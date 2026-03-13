//#include <iostream>
//#include <string>
//
//class Seat {
//private:
//	std::string name;
//public:
//	Seat();
//	std::string getName();
//	void setSeat(std::string name);
//};
//Seat::Seat() {
//	name = "---";
//}
//std::string Seat::getName() {
//	return name;
//}
//void Seat::setSeat(std::string name) {
//	this->name = name;
//}
//
//class Schedule {
//private:
//	Seat* SeatPtr = new Seat[8];
//public:
//	~Schedule();
//	void book(int seatNum, std::string name);
//	void cancel(int seatNum, std::string name);
//	void show();
//};
//Schedule::~Schedule() {
//	delete[]SeatPtr;
//}
//void Schedule::book(int seatNum, std::string name) {
//	if (SeatPtr[seatNum - 1].getName() == "---")
//		SeatPtr[seatNum - 1].setSeat(name);
//	else
//		std::cout << "이미 예약된 좌석입니다." << std::endl;
//}
//void Schedule::cancel(int seatNum, std::string name) {
//	if (SeatPtr[seatNum - 1].getName() == name)
//		SeatPtr[seatNum - 1].setSeat("---");
//	else
//		std::cout << "이름 불일치." << std::endl;
//}
//void Schedule::show() {
//	for (int i = 0; i < 8; i++)
//		std::cout << "	" << SeatPtr[i].getName();
//	std::cout << std::endl;
//}
//
//class Console {
//public:
//	Console();
//	int selectMenu();
//	int selectHour();
//	int setSeatNum();
//	std::string setSeatName();
//};
//
//Console::Console() {
//	std::cout << "**** 한성항공에 오신것을 환영합니다 ****" << std::endl;
//}
//int Console::selectMenu() {
//	int select;
//	std::cout << "예약: 1, 취소:2, 보기:3, 끝내기:4 ==> ";
//	std::cin >> select;
//
//	return select;
//}
//int Console::selectHour() {
//	int select;
//	std::cout << "07시:1, 12시:2, 17시:3 ==> ";
//	std::cin >> select;
//
//	return select;
//}
//int Console::setSeatNum() {
//	int seatNum;
//	std::cout << "좌석번호: ";
//	std::cin >> seatNum;
//
//	return seatNum;
//}
//std::string Console::setSeatName() {
//	std::string name;
//	std::cout << "이름 입력: ";
//	std::cin >> name;
//
//	return name;
//}
//
//class AirlineBook {
//private:
//	Schedule* SchedulePtr = new Schedule[3];
//public:
//	~AirlineBook();
//	void execute();
//};
//AirlineBook::~AirlineBook() {
//	delete[]SchedulePtr;
//}
//void AirlineBook::execute() {
//	int select, seatNum;
//	std::string name;
//
//	Console IO;
//
//	while (1) {
//		select = IO.selectMenu();
//
//		if (select == 4)
//			break;
//		else if (select == 3) {
//			std::cout << "07시:";
//			SchedulePtr[0].show();
//			std::cout << "12시:";
//			SchedulePtr[1].show();
//			std::cout << "17시:";
//			SchedulePtr[2].show();
//		}
//		else if (select == 1) {
//			select = IO.selectHour();
//
//			if (select == 1) {
//				std::cout << "07시:";
//				SchedulePtr[0].show();
//				seatNum = IO.setSeatNum();
//				name = IO.setSeatName();
//
//				SchedulePtr[0].book(seatNum, name);
//			}
//			else if (select == 2) {
//				std::cout << "12시:";
//				SchedulePtr[1].show();
//				seatNum = IO.setSeatNum();
//				name = IO.setSeatName();
//
//				SchedulePtr[1].book(seatNum, name);
//			}
//			else if (select == 3) {
//				std::cout << "17시:";
//				SchedulePtr[2].show();
//				seatNum = IO.setSeatNum();
//				name = IO.setSeatName();
//
//				SchedulePtr[2].book(seatNum, name);
//			}
//		}
//		else if (select == 2) {
//			select = IO.selectHour();
//
//			if (select == 1) {
//				std::cout << "07시:";
//				SchedulePtr[0].show();
//				seatNum = IO.setSeatNum();
//				name = IO.setSeatName();
//
//				SchedulePtr[0].cancel(seatNum, name);
//			}
//			else if (select == 2) {
//				std::cout << "12시:";
//				SchedulePtr[1].show();
//				seatNum = IO.setSeatNum();
//				name = IO.setSeatName();
//
//				SchedulePtr[1].cancel(seatNum, name);
//			}
//			else if (select == 3) {
//				std::cout << "17시:";
//				SchedulePtr[2].show();
//				seatNum = IO.setSeatNum();
//				name = IO.setSeatName();
//
//				SchedulePtr[2].cancel(seatNum, name);
//			}
//		}
//	}
//}
//
//int main() {
//	AirlineBook AB;
//	AB.execute();
//}
//////////////////////////////////////////
//////////////////       리 팩 토 링         ////////////////////////////
//#include <iostream>
//#include <string>
//
//class Seat {
//private:
//	std::string name;
//public:
//	Seat();
//	std::string getName();
//	void setSeat(std::string name);
//};
//Seat::Seat() {
//	name = "---";
//}
//std::string Seat::getName() {
//	return name;
//}
//void Seat::setSeat(std::string name) {
//	this->name = name;
//}
//
//class Schedule {
//private:
//	Seat* SeatPtr = new Seat[8];
//public:
//	~Schedule();
//	void book(int seatNum, std::string name);
//	void cancel(int seatNum, std::string name);
//	void show();
//};
//Schedule::~Schedule() {
//	delete[]SeatPtr;
//}
//void Schedule::book(int seatNum, std::string name) {
//	if (SeatPtr[seatNum - 1].getName() == "---")
//		SeatPtr[seatNum - 1].setSeat(name);
//	else
//		std::cout << "이미 예약된 좌석입니다." << std::endl;
//}
//void Schedule::cancel(int seatNum, std::string name) {
//	if (SeatPtr[seatNum - 1].getName() == name)
//		SeatPtr[seatNum - 1].setSeat("---");
//	else
//		std::cout << "이름 불일치." << std::endl;
//}
//void Schedule::show() {
//	for (int i = 0; i < 8; i++)
//		std::cout << "	" << SeatPtr[i].getName();
//	std::cout << std::endl;
//}
//
//class Console {
//public:
//	Console();
//	int selectMenu();
//	int selectHour();
//	int setSeatNum();
//	std::string setSeatName();
//};
//
//Console::Console() {
//	std::cout << "**** 한성항공에 오신것을 환영합니다 ****" << std::endl;
//}
//int Console::selectMenu() {
//	int select;
//	std::cout << "예약: 1, 취소:2, 보기:3, 끝내기:4 ==> ";
//	std::cin >> select;
//
//	return select;
//}
//int Console::selectHour() {
//	int select;
//	std::cout << "07시:1, 12시:2, 17시:3 ==> ";
//	std::cin >> select;
//
//	return select;
//}
//int Console::setSeatNum() {
//	int seatNum;
//	std::cout << "좌석번호: ";
//	std::cin >> seatNum;
//
//	return seatNum;
//}
//std::string Console::setSeatName() {
//	std::string name;
//	std::cout << "이름 입력: ";
//	std::cin >> name;
//
//	return name;
//}
//
//class AirlineBook {
//private:
//	Schedule* SchedulePtr = new Schedule[3];
//public:
//	~AirlineBook();
//	void execute();
//};
//AirlineBook::~AirlineBook() {
//	delete[]SchedulePtr;
//}
//void AirlineBook::execute() {
//	int select, seatNum;
//	std::string times[3] = { "07시:", "12시", "17시" };
//	std::string name;
//
//	Console IO;
//
//	while (1) {
//		select = IO.selectMenu();
//
//		if (select == 4)
//			break;
//		else if (select == 3) {
//			std::cout << "07시:";
//			SchedulePtr[0].show();
//			std::cout << "12시:";
//			SchedulePtr[1].show();
//			std::cout << "17시:";
//			SchedulePtr[2].show();
//		}
//		else if (select == 1) {
//			select = IO.selectHour();
//
//			std::cout << times[select - 1];
//			SchedulePtr[select - 1].show();
//			seatNum = IO.setSeatNum();
//			name = IO.setSeatName();
//
//			SchedulePtr[select - 1].book(seatNum, name);
//			
//		}
//		else if (select == 2) {
//			select = IO.selectHour();
//
//			std::cout << times[select - 1];
//			SchedulePtr[select - 1].show();
//			seatNum = IO.setSeatNum();
//			name = IO.setSeatName();
//
//			SchedulePtr[select - 1].cancel(seatNum, name);
//		}
//	}
//}
//
//int main() {
//	AirlineBook AB;
//	AB.execute();
//}
// 
////////////////////////////////////////
//#include <iostream>
//
//class shape {
//public:
//	void paint() {
//		draw();
//	}
//	virtual void draw() {
//		std::cout << "shape::draw() called" << std::endl;
//	}
//};
//
//class Circle : public shape {
//public:
//	virtual void draw() {
//		std::cout << "Circle::draw() called" << std::endl;
//	}
//};
//
//int main() {
//	shape* sPtr = new Circle();
//	sPtr->draw();
//	delete sPtr;
//}
///////////////////////////////////////////////////////
