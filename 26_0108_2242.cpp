#include <iostream>
#include <random>
using namespace std;

class EvenRandom {
public:
	mt19937& getEngine();
	int EvenRand();
	int EvenRand_Range(int min, int max);
};
mt19937& EvenRandom::getEngine() {
	static random_device rd;
	static mt19937 gen(rd());
	return gen;
}
int EvenRandom::EvenRand() {
	uniform_int_distribution<int>dis(0, 16383);
	return dis(getEngine()) * 2;
}
int EvenRandom::EvenRand_Range(int min, int max) {
	int n1, n2;
	if (min % 2 == 0)
		n1 = min / 2;
	else
		n1 = (min + 1) / 2;
	if (max % 2 == 0)
		n2 = max / 2;
	else
		n2 = (max - 1) / 2;
	uniform_int_distribution<int>dis(n1, n2);
	return dis(getEngine()) * 2;
}

int main() {
	EvenRandom r;
	cout << "=== 0부터 32767까지 짝수 ===" << endl;
	int num;
	for (int i = 0; i < 10; i++) {
		num = r.EvenRand();
		cout << num << "  ";
	}
	cout << endl << endl;
	cout << "=== 123부터 130까지의 짝수 ===" << endl;
	for (int i = 0; i < 10; i++) {
		num = r.EvenRand_Range(123, 130);
		cout << num << "  ";
	}
}