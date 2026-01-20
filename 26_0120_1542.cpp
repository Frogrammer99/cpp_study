#include <iostream>
#include <string>
#include <random>
using namespace std;

class player {
private:
	string name;
	string word;
public:
	player();
	void setname(string name);
	void inputword(string word);
	string outputword();
	string getname();
};
player::player() {
}
void player::setname(string name) {
	this->name = name;
}
void player::inputword(string word) {
	this->word = word;
}
string player::outputword() {
	return this->word;
}
string player::getname() {
	return name;
}

class wordgame {
private:
	int players;
	string startwords[7] = { "아버지", "효자손", "식칼", "접착제", "햄버거", "아저씨", "학교" };
public:
	wordgame(int players);
	bool iscorrect(player& p1, player& p2);
	void game();
	mt19937& getengine();
	int randomnum();
};
wordgame::wordgame(int players) {
	this->players = players;
}
bool wordgame::iscorrect(player& p1, player& p2) {
	string s1 = p1.outputword();
	string s2 = p2.outputword();
	int len1 = s1.length();

	if ((s1[len1 - 2] == s2[0]) && (s1[len1 - 1] == s2[1]))
		return true;
	else
		return false;
}
mt19937& wordgame::getengine() {
	static random_device rd;
	static mt19937 gen(rd());
	return gen;
}
int wordgame::randomnum() {
	uniform_int_distribution<int>dis(0, 6);
	return dis(getengine());
}
void wordgame::game() {
	player* arr = new player[players];
	string start = startwords[randomnum()];
	int turn = 0;
	string word;
	bool result = true;

	for (int i = 0; i < players; i++) {
		string name;
		cout << "참가자의 이름을 입력하세요. 빈칸불가: ";
		cin >> name;
		arr[i].setname(name);
	
	}
	cout << "시작하는 단어는 " << start << "입니다." << endl;

	while (1) {
		cout << arr[turn % players].getname() << ": ";
		cin >> word;
		arr[turn % players].inputword(word);

		if (turn != 0) {
			result = iscorrect(arr[(turn - 1) % players], arr[turn % players]);
		}
		else {
			int len1 = start.length();

			if ((start[len1 - 2] == word[0]) && (start[len1 - 1] == word[1]))
				result = true;
			else
				result = false;
		}

		if (result == false) {
			cout << arr[turn % players].getname() << " 실패!" << endl;
			break;
		}
		turn++;
	}
	delete[]arr;
}

int main() {
	int numbers;

	cout << "끝말 잇기 게임을 시작한다!" << endl;
	cout << "게임에 참가하는 인원은 몇 명이지? ";
	cin >> numbers;

	wordgame g(numbers);
	g.game();

	return 0;
}
//////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Color {
//private:
//	int red, green, blue;
//public:
//	Color() { red = green = blue = 0; }
//	Color(int r, int g, int b) { red = r; green = g; blue = b; }
//	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
//	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
//};
//
//int main() {
//	Color screenColor(255, 0, 0);
//	Color* p;
//	p = &screenColor;
//	p->show();
//	Color colors[3];
//	p = colors;
//
//	p[0].setColor(255, 0, 0);
//	p[1].setColor(0, 255, 0);
//	p[2].setColor(0, 0, 255);
//
//	for (int i = 0; i < 3; i++) {
//		p[i].show();
//	}
//}
///////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//int main() {
//	int* arr = new int[5];
//	int sum = 0;
//	double avg = 0;
//
//	for (int i = 0; i < 5; i++) {
//		cout << "정수 입력: ";
//		cin >> arr[i];
//		sum += arr[i];
//	}
//
//	avg = sum / 5.0;
//
//	cout << "평균: " << avg << endl;
//}
//////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	int index = 0;
//	int count = 0;
//	cout << "문자열 입력: ";
//	getline(cin, s, '\n');
//
//	while (1) {
//		index = s.find('a', index);
//		if (index != -1)
//			count++;
//		else
//			break;
//		index++;
//
//	}
//
//	cout << "문자 a는 " << count << "개 있습니다." << endl;
//}
///////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Sample {
//private:
//	int* p;
//	int size;
//public:
//	Sample(int n);
//	void read();
//	void write();
//	int big();
//	~Sample();
//};
//Sample::Sample(int n) {
//	size = n; 
//	p = new int[n];
//}
//Sample::~Sample() {
//
//}
//void Sample::read() {
//	for (int i = 0; i < size; i++) {
//		cout << "정수 입력: ";
//		cin >> p[i];
//	}
//}
//void Sample::write() {
//	for (int i = 0; i < size; i++)
//		cout << p[i] << " ";
//}
//int Sample::big() {
//	int big = p[0];
//	for (int i = 1; i < size; i++) {
//		if (p[i] > big)
//			big = p[i];
//	}
//	return big;
//}
//
//int main() {
//	Sample s(10);
//	s.read();
//	s.write();
//	cout << "가장 큰 수는 " << s.big() << endl;
//}
////////////////////////////////////////////
//#include <iostream>
//#include <string>
//#include <random>
//using namespace std;
//
//mt19937& getEngine() {
//	random_device rd;
//	mt19937 gen(rd());
//	return gen;
//}
//
//int randomSelect(int len) {
//	uniform_int_distribution<int>dis(0, len - 1);
//	return dis(getEngine());
//}
//int randomAlpha() {
//	if (randomSelect(2) == 1) {
//		uniform_int_distribution<int>dis(65, 90);
//		return dis(getEngine());
//	}
//	else {
//		uniform_int_distribution<int>dis(97, 122);
//		return dis(getEngine());
//	}
//}
//
//int main() {
//	string s;
//	int len;
//	while (1) {
//		cout << "아래에 영문 한 줄을 입력." << endl;
//		getline(cin, s, '\n');
//		if (s == "exit")
//			break;
//		len = s.length();
//		s[randomSelect(len)] = char(randomAlpha());
//		cout << s << endl;
//	}
//}
/////////////////////////////////////////////////////
  