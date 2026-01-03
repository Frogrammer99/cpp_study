//#include <iostream>
//using namespace std;
//
//class Tower {
//private:
//	int height;
//public:
//	Tower();
//	Tower(int h);
//	int getHeight();
//};
//Tower::Tower() : Tower(1){}
//Tower::Tower(int h) { height = h; }
//int Tower::getHeight() {
//	return height;
//}
//
//int main() {
//	Tower myTower;
//	Tower seoulTower(100);
//	cout << "높이는 " << myTower.getHeight() << " 미터" << endl;
//	cout << "높이는 " << seoulTower.getHeight() << " 미터" << endl;
//}
//////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
	int year, month, day;
public:
	Date(int y, int m, int d);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};
Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
Date::Date(string s) {
	string Sy, Sm, Sd;
	int count = 0;
	int lock = 0;

	for (int i = 0; i < s.length() + 1; i++) {
		if (s[i] == '/' || s[i] == '\0') {
			for (int j = lock; j < i; j++) {
				if (count == 0)
					Sy += s[j];
				if (count == 1)
					Sm += s[j];
				if (count == 2)
					Sd += s[j];
			}
			count++;
			lock = i + 1;
		}
	}
	year = stoi(Sy);
	month = stoi(Sm);
	day = stoi(Sd);
}
void Date::show() {
	cout << year << "년" << month << "월" << day << "일" << endl;
}
int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << "," << birth.getDay() << endl;
}