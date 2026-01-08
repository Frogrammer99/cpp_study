//#include <iostream>	
//#include <random>
//using namespace std;
//
//class Random {
//private:
//
//public:
//	Random();
//	mt19937& getEngine();
//	int next();
//	int nextInRange(int n1, int n2);
//};
//Random::Random() { }
//
//mt19937& Random::getEngine() {
//	static random_device rd;
//	static mt19937 gen(rd());
//	return gen;
//}
//
//int Random::next() {
//	uniform_int_distribution<int> dis(0, 32767);
//	return dis(getEngine());
//}
//
//int Random::nextInRange(int n1, int n2) {
//	uniform_int_distribution<int>dis(n1, n2);
//	return dis(getEngine());
//}
//
//int main() {
//	Random r;
//	cout << "--0에서 32767까지의 정수 10개--" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.next();
//		cout << "n: " << n << "  ";
//	}
//	cout << endl << endl << "--2에서 4까지의 정수 10개--" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextInRange(2, 4);
//		cout << "n: " << n << "  ";
//	}
//}
#include <iostream>
#include <random>
using namespace std;

class Random {
public:
	mt19937& getEngine();
	int next();
	int nextInRange(int n1, int n2);
};
mt19937& Random::getEngine() {
	static random_device rd;
	static mt19937 gen(rd());
	return gen;
}
int Random::next() {
	uniform_int_distribution<int>dis(0, 32767);
	return dis(getEngine());
}
int Random::nextInRange(int n1, int n2) {
	uniform_int_distribution<int>dis(n1, n2);
	return dis(getEngine());
}

int main() {
	Random r;
	for (int i = 0; i < 10; i++) {
		int number = r.next();
		cout << number << "  ";
	}
	cout << endl << endl;
	for (int i = 0; i < 10; i++) {
		int number = r.nextInRange(0, 100);
		cout << number << "  ";
	}
}