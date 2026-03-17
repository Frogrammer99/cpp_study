////////////#include <iostream>
////////////
////////////int main() {
////////////	int sum = 0;
////////////
////////////	auto a = [&sum](int x, int y) {sum = x + y; };
////////////
////////////	a(2, 3);
////////////
////////////	std::cout << sum << std::endl;
////////////}
///////////////////////////////////////////////////////
////////////#include <iostream>
////////////#include <vector>
////////////#include <algorithm>
////////////
////////////int main() {
////////////	std::vector<int> v = { 1, 2, 3, 4, 5 };
////////////
////////////	std::for_each(v.begin(), v.end(), [](int x) {std::cout << x << " "; });
////////////}
////////////#include <iostream>
////////////
////////////template <typename T>
////////////void func(T x) {
////////////	std::cout << x << std::endl;
////////////}
////////////
////////////int main() {
////////////	int n = 3;
////////////	char c = 'a';
////////////
////////////	func(n);
////////////	func(c);
////////////}
//////////////////////////////////////////////////////////////////////////
////////////#include <iostream>
////////////
////////////int main() {
////////////	int a = 1;
////////////	int b = 2;
////////////
////////////	int& ref = a;
////////////	std::cout << ref << std::endl;
////////////
////////////	ref = b;
////////////	b = 20;
////////////	a = 222;
////////////	std::cout << ref << std::endl;
////////////}
///////////////////////////////////////////////////////////////////////
//////////#include <iostream>
//////////#include <vector>
//////////#include <random>
//////////
//////////class random {
//////////private:
//////////	std::mt19937& getEngine();
//////////public:
//////////	int randNum();
//////////};
//////////std::mt19937& random::getEngine() {
//////////	static std::random_device rd;
//////////	static std::mt19937 gen(rd());
//////////	return gen;
//////////}
//////////int random::randNum() {
//////////	std::uniform_int_distribution<int> dis(0, 9);
//////////	return dis(getEngine());
//////////}
//////////
//////////class Word {
//////////private:
//////////	std::string eng = "";
//////////	std::string kor = "";
//////////public:
//////////	Word(std::string eng, std::string kor) { this->eng = eng; this->kor = kor; }
//////////	std::string getEng() { return eng; }
//////////	std::string getKor() { return kor; }
//////////};
//////////
//////////class wordVector {
//////////private: 
//////////	std::vector<Word> v;
//////////public:
//////////	void pushWords();
//////////	std::string getKorWord(int index);
//////////	std::string getEngWord(int index);
//////////};
//////////void wordVector::pushWords() {
//////////	v.push_back(Word("sex", "성교"));
//////////	v.push_back(Word("apple", "사과"));
//////////	v.push_back(Word("bottle", "병"));
//////////	v.push_back(Word("gun", "총"));
//////////	v.push_back(Word("death", "죽음"));
//////////	v.push_back(Word("cat", "고양이"));
//////////	v.push_back(Word("dog", "개"));
//////////	v.push_back(Word("turtle", "거북이"));
//////////	v.push_back(Word("knife", "칼"));
//////////	v.push_back(Word("bat", "박쥐"));
//////////}
//////////std::string wordVector::getKorWord(int index) {
//////////	return v[index].getKor();
//////////}
//////////std::string wordVector::getEngWord(int index) {
//////////	return v[index].getEng();
//////////}
//////////
//////////class Game {
//////////public:
//////////	void execute();
//////////};
//////////void Game::execute() {
//////////	random r;
//////////	wordVector wV;
//////////	wV.pushWords();
//////////	int prev[4] = { 100, 100, 100, 100 };
//////////	int randNum = 100;
//////////	int prbl = 0;
//////////	int answer = 0;
//////////	int select;
//////////
//////////	std::cout << "영어 어휘 테스트 시작. 0번을 입력하면 종료." << std::endl;
//////////	while (1) {
//////////		prbl = r.randNum();
//////////		std::cout << wV.getEngWord(prbl) << "?" << std::endl;
//////////
//////////		answer = r.randNum() % 4;
//////////		prev[answer] = prbl;
//////////
//////////		for (int i = 0; i < 4; ++i) {
//////////			if (i == answer) {
//////////				std::cout << "(" << i + 1 << ") " << wV.getKorWord(prbl) << " ";
//////////				continue;
//////////			}
//////////			while (1) {
//////////				randNum = r.randNum();
//////////				if (randNum != prev[0] && randNum != prev[1] && randNum != prev[2] && randNum != prev[3])
//////////					break;
//////////			}
//////////			std::cout << "(" << i + 1 << ") " << wV.getKorWord(randNum) << " ";
//////////			prev[i] = randNum;
//////////		}
//////////		std::cout << std::endl;
//////////
//////////		std::cout << "정답: ";
//////////		std::cin >> select;
//////////		if (select == 0)
//////////			break;
//////////
//////////		if (select == answer + 1)
//////////			std::cout << "Correct!!" << std::endl;
//////////		else
//////////			std::cout << "InCorrect!!" << std::endl;
//////////		
//////////		for (int i = 0; i < 3; ++i)
//////////			prev[i] = 100;
//////////	}
//////////}
//////////
//////////int main() {
//////////	Game g;
//////////	g.execute();
//////////
//////////}
/////////////////////////////////////////////////////////
////////#include <iostream>
////////
////////template <typename T>
////////T biggest(T* arr, int size) {
////////	int biggest = arr[0];
////////
////////	for (int i = 1; i < size; ++i) {
////////		if (arr[i] > biggest)
////////			biggest = arr[i];
////////	}
////////
////////	return biggest;
////////}
////////
////////int main() {
////////	int x[] = { 1, 10, 100, 5, 4 };
////////	std::cout << biggest(x, 5) << std::endl;
////////}
////////////////////////////////////////////////////
//////#include <iostream>
//////
//////template <typename T>
//////bool equalArrays(T* arr1, T* arr2, int bothSize) {
//////	bool isEqual = true;
//////
//////	for (int i = 0; i < bothSize; ++i) {
//////		if (arr1[i] != arr2[i]) {
//////			isEqual = false;
//////			break;
//////		}
//////	}
//////
//////	return isEqual;
//////}
//////
//////int main() {
//////	int x[] = { 1, 10, 100, 5, 4 };
//////	int y[] = { 1, 10, 100, 5, 4 };
//////	int z[] = { 1, 2, 3, 4, 5 };
//////	if (equalArrays(x, y, 5))
//////		std::cout << "equal." << std::endl;
//////	else
//////		std::cout << "not equal" << std::endl;
//////
//////	if (equalArrays(x, z, 5))
//////		std::cout << "equal" << std::endl;
//////	else
//////		std::cout << "not equal" << std::endl;
//////}
///////////////////////////////////////////////////////////
////#include <iostream>
////
////template <typename T>
////void  reverseArray(T* arr, int size) {
////	int temp;
////	for (int i = 0; i < size - 1; ++i) {
////		for (int j = i + 1; j < size; ++j) {
////			if (arr[j] > arr[i]) {
////				temp = arr[i];
////				arr[i] = arr[j];
////				arr[j] = temp;
////			}
////		}
////	}
////}
////
////int main() {
////	int arr[100] = { 0, };
////
////	for (int i = 0; i < 100; ++i)
////		arr[i] = i;
////
////	reverseArray(arr, 100);
////
////	for (int i = 0; i < 100; ++i)
////		std::cout << arr[i] << " ";
////}
/////////////////////////////////////////////////////////////////
////#include <iostream>
////
////template <typename T>
////bool search(T element, T* arr, int size) {
////	bool isExist = false;
////
////	for (int i = 0; i < size; ++i) {
////		if (arr[i] == element) {
////			isExist = true;
////			break;
////		}
////	}
////
////	return isExist;
////}
////
////int main() {
////	int x[] = { 1, 10, 100, 5, 4 };
////	if (search(100, x, 5))
////		std::cout << "yes" << std::endl;
////}
/////////////////////////////////////////
////#include <iostream>
////
////template <typename T>
////T* concat(T* arr1, int size1, T* arr2, int size2) {
////	T* newArr = new T[size1 + size2];
////
////	for (int i = 0; i < size1; ++i)
////		newArr[i] = arr1[i];
////	for (int i = size1; i < size2 + size1; ++i)
////		newArr[i] = arr2[i - size1];
////
////	return newArr;
////}
////
////int main() {
////	int a[] = { 1, 2, 3 };
////	int b[] = { 4, 5, 6, 7, 8 };
////
////	int* newArr = concat(a, 3, b, 5);
////
////	for (int i = 0; i < 8; ++i)
////		std::cout << newArr[i] << " ";
////}
//////////////////////////////////////////////////////////////
//#include <iostream>
//
//template <typename T>
//T* remove(T* src, int sizeSrc, T* minus, int sizeMinus, int& retSize) {
//	int count = 0; // count delete elements
//	bool isExist = false;
//	for (int i = 0; i < sizeSrc; ++i) {
//		isExist = false;
//		for (int j = 0; j < sizeMinus; ++j)
//			if (src[i] == minus[j]) {
//				isExist = true;
//				break;
//			}
//		if (isExist == true)
//			++count;
//	}
//
//	retSize = sizeSrc - count;
//	if (retSize <= 0)
//		return nullptr;
//
//	int index = 0;
//	T* newArr = new T[retSize];	
//
//	for (int i = 0; i < sizeSrc; ++i) { // Input elements to newArr
//		isExist = false;
//		for (int j = 0; j < sizeMinus; ++j) {
//			if (src[i] == minus[j]) {
//				isExist = true;
//				break;
//			}
//		}
//		if (isExist == false) {
//			newArr[index] = src[i];
//			++index;
//		}
//	}
//
//	return newArr;
//}
//
//int main() {
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int b[] = {2, 3, 5, 99, 0, 22};
//	int size;
//
//	int* newArr = remove(a, 8, b, 6, size);
//
//	for (int i = 0; i < size; ++i)
//		std::cout << newArr[i] << " ";
//
//	delete[] newArr;
//}
////////////////////////////////////////////////////
