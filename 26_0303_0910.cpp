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