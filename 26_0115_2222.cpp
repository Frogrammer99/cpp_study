//#include <iostream>
//using namespace std;
//
//class Sample {
//private:
//	int a;
//public:
//	Sample();
//	Sample(int x);
//	Sample(int x, int y);
//	int get();
//};
//Sample::Sample() : Sample(100) {}
//Sample::Sample(int x) {
//	a = x;
//	cout << a << ' ';
//}
//Sample::Sample(int x, int y) {
//	a = x * y;
//	cout << a << ' ';
//}
//int Sample::get() {
//	return a;
//}
//
//int main() {
//	int sum = 0;
//	Sample arr2D[2][2] = { {Sample(2,3), Sample(2, 4)},
//	                       {Sample(5), Sample()} };
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++)
//			sum += arr2D[i][j].get();
//	}
//
//	cout << sum;
//}
////////////////////////////////////////////////////////////////////
#include <iostream>	
using namespace std;

class Circle {

};

int main() {
	int* pInt = new int;
	char* pChar = new char;
	Circle* pCircle = new Circle;

	delete pInt;
	delete pChar;
	delete pCircle;
}