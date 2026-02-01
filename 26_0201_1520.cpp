//#include <iostream>
//using namespace std;
//
//int big(int a, int b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int big(int* arr, int size) {
//	int res = arr[0];
//	for (int i = 1; i < size; i++) {
//		if (res < arr[i])
//			res = arr[i];
//	}
//	return res;
//}
//
//int main() {
//	int array[5] = { 1, 9, -2, 8, 6 };
//	cout << big(2, 3) << endl;
//	cout << big(array, 5) << endl;
//}
//////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//void star(int a = 5);
//void msg(int id, string text = "");
//
//void star(int a) {
//	for (int i = 0; i < a; i++)
//		cout << '*';
//	cout << endl;
//}
//
//void msg(int id, string text) {
//	cout << id << ' ' << text << endl;
//}
//
//int main() {
//	star();
//	star(10);
//
//	msg(10);
//	msg(10, "Hello");
//}
/////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//void f(char c = '2', int line = 1) {
//	for (int i = 0; i < line; i++) {
//		for (int j = 0; j < 10; j++)
//			cout << c;
//		cout << endl;
//	}
//}
//
//int main() {
//	f();
//	f('%');
//	f('@', 5);
//}
////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//float square(float a) {
//	return a * a;
//}
//double square(double a) {
//	return a * a;
//}
//
//int main() {
//	cout << square(3.0);
//	cout << square(3.0f);
//}
////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//void msg(int id) {
//	cout << id << endl;
//}
//void msg(int id, string s = "") {
//	cout << id << ": " << s << endl;
//}
//
//int main() {
//	msg(5, "Good Morning");
//	msg(6);
//}
//////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	int money;
//	void addMoney(int money);
//	static inline int shareMoney = 10;
//	static void addShared(int n);
//};
//void Person::addMoney(int money) {
//	this->money += money;
//}
//void Person::addShared(int n) {
//	shareMoney += n;
//}
//
//int main() {
//	Person han;
//	han.money = 100;
//	han.shareMoney = 200;
//
//	Person lee;
//	lee.money = 150;
//	lee.addMoney(200);
//	lee.addShared(200);
//
//	cout << han.money << ' ' << lee.money << endl;
//	cout << han.shareMoney << ' ' << lee.shareMoney << endl;
//}
////////////////////////////////////////////////////////