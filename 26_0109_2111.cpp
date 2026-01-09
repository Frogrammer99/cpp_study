#include <iostream>
#include <random>
using namespace std;

class Selectable_Random {
public:
	mt19937& getEngine();
	int EvenRand();
	int OddRand();
	int EvenRange(int min, int max);
	int OddRange(int min, int max);
};
mt19937& Selectable_Random::getEngine() {
	static random_device rd;
	static mt19937 gen(rd());
	return gen;
}
int Selectable_Random::EvenRand() {
	uniform_int_distribution<int>dis(0, 16383);
	return dis(getEngine()) * 2;
}
int Selectable_Random::OddRand() {
	uniform_int_distribution<int>dis(0, 16383);
	return (dis(getEngine()) * 2 + 1);
}
int Selectable_Random::EvenRange(int min, int max) {
	int start = (min + 1) / 2;
	int end = max / 2;
	uniform_int_distribution<int>dis(start, end);
	return dis(getEngine()) * 2;
}
int Selectable_Random::OddRange(int min, int max) {
	int start = (min + 1) / 2;
	int end = max / 2;
	uniform_int_distribution<int>dis(start, end);
	if (max % 2 == 0)
		return dis(getEngine()) * 2 - 1;
	else
		return dis(getEngine()) * 2 + 1;
}

int main() {
	Selectable_Random r;
	cout << "=== 0에서 32767까지의 짝수 정수 10개 ===" << endl;
	int number;
	for (int i = 0; i < 10; i++) {
		number = r.EvenRand();
		cout << number << "  ";
	}
	cout << endl << endl;
	cout << "=== 3에서 3245까지의 홀수 정수 10개 ===" << endl;
	for (int i = 0; i < 10; i++) {
		number = r.OddRange(3, 3245);
		cout << number << "  ";
	}


}