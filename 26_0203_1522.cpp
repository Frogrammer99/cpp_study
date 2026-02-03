//#include <iostream>
//using namespace std;
//
//int add(int* arr, int size) {
//	int sum = 0;
//	
//	for (int i = 0; i < size; i++)
//		sum += arr[i];
//	return sum;
//}
//int add(int* arr1, int size, int* arr2) {
//	int sum = 0;
//
//	for (int i = 0; i < size; i++)
//		sum += arr1[i];
//	for (int i = 0; i < size; i++)
//		sum += arr2[i];
//	return sum;
//}
//
//int main() {
//	int a[] = { 1, 2, 3, 4, 5 };
//	int b[] = { 6, 7, 8, 9, 10 };
//
//	int c = add(a, 5);
//	int d = add(a, 5, b);
//
//	cout << c << endl;
//	cout << d << endl;
//}
/////////////////////////////////////////////////////////////////
//#include <string>
//#include <iostream>
//using namespace std;
//
//class Person {
//private:
//	int id;
//	double weight;
//	string name;
//public:
//	Person(int id = 1, string name = "Grace", double weight = 20.5);
//	void show();
//};
//void Person::show() {
//	cout << id << ' ' << weight << ' ' << name << endl;
//}
//Person::Person(int id, string name, double weight) {
//	this->id = id;
//	this->name = name;
//	this->weight = weight;
//}
//
//int main() {
//	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
//	grace.show();
//	ashley.show();
//	helen.show();
//}
///////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//int big(int a, int b, int Max = 100) {
//	int big = 0;
//	if (a > b)
//		big = a;
//	else
//		big = b;
//
//	if (big < Max)
//		return big;
//	else
//		return Max;
//}
//
//int main() {
//	int x = big(3, 5);
//	int y = big(300, 60);
//	int z = big(30, 60, 50);
//	cout << x << ' ' << y << ' ' << z << endl;
//}
///////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class  MyVector {
//private:
//	int* mem;
//	int size;
//public:
//	MyVector(int n = 100, int val = 0);
//	~MyVector();
//	void show();
//};
//MyVector::MyVector(int n, int val) {
//	mem = new int[n];
//	size = n;
//	
//	for (int i = 0; i < size; i++)
//		mem[i] = val;
//}
//void MyVector::show() {
//	std::cout << size << std::endl;
//	std::cout << mem[0] << std::endl;
//	std::cout << std::endl;
//}
//MyVector::~MyVector() {
//	delete[]mem;
//}
//
//int main() {
//	MyVector t1, t2(200, 3);
//
//	t1.show();
//	t2.show();
//} ******************* New 를 사용하면 할당해제 할 생각부터 해야한다!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ***********************************************
//#include <iostream>
//
//class ArrayUtility {
//private:
//
//public:
//	static void intToDouble(int* source, double* dest, int size);
//	static void doubleToInt(double* source, int* dest, int size);
//};
//void ArrayUtility::intToDouble(int* source, double* dest, int size) {
//	for (int i = 0; i < size; i++)
//		dest[i] = source[i];
//}
//void ArrayUtility::doubleToInt(double* source, int* dest, int size) {
//	for (int i = 0; i < size; i++)
//		dest[i] = source[i];
//}
//
//
//int main() {
//	int x[] = { 1, 2, 3, 4, 5 };
//	double y[5];
//	double z[] = { 9.9, 8.8, 7.7, 6.6, 5.5 };
//
//	ArrayUtility::intToDouble(x, y, 5);
//	for (int i = 0; i < 5; i++)
//		std::cout << y[i] << ' ';
//	std::cout << std::endl;
//
//	ArrayUtility::doubleToInt(z, x, 5);
//	for (int i = 0; i < 5; i++)
//		std::cout << x[i] << ' ';
//	std::cout << std::endl;
//}
//////////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class ArrayUtility2 {
//private:
//public:
//	static int* concat(int* s1, int* s2, int size);
//	static int* remove(int* s1, int* s2, int size, int& retSize);
//};
//int* ArrayUtility2::concat(int* s1, int* s2, int size) {
//	int* s3 = new int[size * 2];
//
//	for (int i = 0; i < size; i++)
//		s3[i] = s1[i];
//	for (int i = 0; i < size; i++)
//		s3[i + size] = s2[i];
//	
//	return s3;
//}
//int* ArrayUtility2::remove(int* s1, int* s2, int size, int& retSize) {
//	int* s4 = new int[size];
//	bool isExist = false;
//	int count = 0;
//
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			if (s1[i] == s2[j]) {
//				isExist = true;
//				break;
//			}
//		}
//		if (isExist)
//			isExist = false;
//		else {
//			s4[count] = s1[i];
//			count++;
//		}
//	}
//	retSize = count;
//	if (retSize == 0)
//		return NULL;
//	return s4;
//}
//
//int main() {
//	int num;
//	std::cout << "배열의 크기 입력: ";
//	std::cin >> num;
//
//	int* s1 = new int[num];
//	int* s2 = new int[num];
//
//	std::cout << "정수를 " << num << "개 입력. 배열 x에 삽입:  ";
//	for (int i = 0; i < 5; i++)
//		std::cin >> s1[i];
//	std::cout << "정수를 " << num << "개 입력. 배열 y에 삽입:  ";
//	for (int i = 0; i < 5; i++)
//		std::cin >> s2[i];
//
//	std::cout << "합친 정수 배열 출력." << std::endl;
//	int* newArr = ArrayUtility2::concat(s1, s2, num);
//	for (int i = 0; i < num * 2; i++)
//		std::cout << newArr[i] << ' ';
//	std::cout << std::endl;
//
//	int rSize = 0;
//	std::cout << "배열 x[]에서 배열 y[]를 뺀 결과 출력. 개수는 " << rSize << std::endl;
//	int* subArr = ArrayUtility2::remove(s1, s2, 5, rSize);
//	for (int i = 0; i < rSize; i++)
//		std::cout << subArr[i] << ' ';
//	std::cout << std::endl;
//
//	delete newArr;
//	delete subArr;
//}
///////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <random>
//
//class Random {
//public:
//	static std::mt19937& getEngine();
//	static int randNum();
//	static char randAlpha();
//	static double randDouble();
//};
//std::mt19937& Random::getEngine() {
//	std::random_device rd;
//	std::mt19937 gen(rd());
//
//	return gen;
//}
//int Random::randNum() {
//	std::uniform_int_distribution<int> dis(0, 100);
//	
//	return dis(getEngine());
//}
//char Random::randAlpha() {
//	std::uniform_int_distribution<int> dis(0, 1);
//	int select = dis(getEngine());
//
//	if (select == 0) {
//		std::uniform_int_distribution<int> dis(65, 90);
//		return dis(getEngine());
//	}
//	else {
//		std::uniform_int_distribution<int> dis(97, 122);
//		return dis(getEngine());
//	}
//}
//double Random::randDouble() {
//	std::uniform_real_distribution<double> dis(0, 1);
//	return dis(getEngine());
//}
//
//int main() {
//	std::cout << "1에서 100까지의 랜덤 정수 10개 출력." << std::endl;
//	for (int i = 0; i < 10; i++) {
//		std::cout << Random::randNum() << ' ';
//	}
//	std::cout << std::endl;
//
//	std::cout << "랜덤 알파벳 10개 출력." << std::endl;
//	for (int i = 0; i < 10; i++) {
//		std::cout << Random::randAlpha() << ' ';
//	}
//	std::cout << std::endl;
//
//	std::cout << "0에서 1까지의 랜덤 실수 10개 출력." << std::endl;
//	for (int i = 0; i < 10; i++) {
//		std::cout << Random::randDouble() << ' ';
//	}
//	std::cout << std::endl;
//}
//#include <iostream>
//#include <string>
//
//class Trace {
//private:
//	static inline std::string tags[100];
//	static inline std::string infs[100];
//	static inline int count = 0;
//public:
//	static void put(std::string tag, std::string inf);
//	static void print(std::string tag);
//	static void print();
//};
//void Trace::put(std::string tag, std::string inf) {
//	tags[count] = tag;
//	infs[count] = inf;
//	count++;
//}
//void Trace::print(std::string tag) {
//	std::cout << "-----" << tag << "의 정보를 출력합니다." << "-----" << std::endl;
//
//	for (int i = 0; i < count; i++) {
//		if (tags[i] == tag)
//			std::cout << tags[i] << ": " << infs[i] << std::endl;
//	}
//}
//void Trace::print() {
//	std::cout << "----- 모든 Trace 정보를 출력합니다. -----" << std::endl;
//
//	for (int i = 0; i < count; i++)
//		std::cout << tags[i] << ": " << infs[i] << std::endl;
//}
//
//void f() {
//	int a, b, c;
//	std::cout << "두 개의 정수를 입력하세요: ";
//	std::cin >> a >> b;
//	Trace::put("f()", "정수를 입력 받았음");
//	c = a + b;
//	Trace::put("f()", "합 계산");
//	std::cout << "합은 " << c << std::endl;
//}
//
//int main() {
//	Trace::put("main()", "프로그램 시작합니다");
//	f();
//	Trace::put("main()", "종료");
//
//	Trace::print("f()");
//	Trace::print();
//}
///////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//
//class Board {
//private:
//	static inline std::string writings[100];
//	static inline int count = 0;
//public:
//	static void add(std::string writing);
//	static void print();
//	
//};
//void Board::add(std::string writing) {
//	writings[count] = writing;
//	count++;
//}
//void Board::print() {
//	std::cout << "******* 게시판 입니다 *******" << std::endl;
//	for (int i = 0; i < count; i++)
//		std::cout << i << ": " << writings[i] << std::endl;
//}
//
//int main() {
//	Board::add("중간고사는 감독 없는 자율 시험입니다.");
//	Board::add("코딩 라운지 많이 이용해 주세요.");
//	Board::print();
//	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요.");
//	Board::print();
//}
///////////////////////////////////////////////////////
