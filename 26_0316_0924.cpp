////////#include <iostream>
////////#include <algorithm>
////////
////////int main() {
////////	int arr[] = { 11, 42, 13, 45 };
////////
////////	std::sort(arr, arr + 4);
////////
////////	for (int i = 0; i < 4; ++i) {
////////		std::cout << arr[i] << " ";
////////	}
////////}
//////
//////#include <iostream>
//////#include <vector>
//////#include <algorithm>
//////
//////int main() {
//////	std::vector<int> v;
//////	int n;
//////	std::cout << "5개의 정수를 입력하세요: ";
//////	for (int i = 0; i < 5; ++i) {
//////		std::cin >> n;
//////		v.push_back(n);
//////	}
//////
//////	sort(v.begin(), v.end());
//////
//////	std::vector<int>::iterator it;
//////
//////	for (it = v.begin(); it != v.end(); ++it) {
//////		std::cout << *it << ' ';
//////	}
//////	std::cout << std::endl;
//////}
/////////////////////////////////////////////////////////////////////////
////#include <iostream>
////#include <vector>
////
////int square(int x) {
////	return x * x;
////}
////
////int main() {
////	auto c = 'a';
////	auto pi = 3.14;
////	auto ten = 10;
////	auto* p = &ten;
////	std::cout << c << " " << pi << " " << ten << " " << *p << std::endl;
////	
////	auto ret = square(3);
////	std::cout << *p << " " << ret << std::endl;
////
////	std::vector<int> v = { 1, 2, 3, 4, 5 };
////	std::vector<int>::iterator it;
////	for (it = v.begin(); it != v.end(); ++it)
////		std::cout << *it << ' ';
////	std::cout << std::endl;
////
////	for (auto ait = v.begin(); ait != v.end(); ++ait)
////		std::cout << *ait << ' ';
////
////}
///////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//
//int main() {
//	[](int x, int y) -> void {std::cout << x + y; } (2, 3);
//	auto love = [](std::string a, std::string b)->void {
//		std::cout << a << "보다 " << b << "가 좋아" << std::endl;
//		};
//
//	love("Java", "C++");
//	love("리코", "나나치");
//}
////////////////////////////////////
//#include <iostream>
//
//int main() {
//	double pi = 3.14;
//
//	auto calc = [pi](int r) {return pi * r * r; };
//
//	std::cout << calc(3) << std::endl;
//}
//////////////////////////////////////////////////
//#include <iostream>
//
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int sum = 0;
//
//	auto arrSum = [&sum, arr] {
//		for (int i = 0; i < 5; ++i)
//			sum += arr[i];
//		};
//
//	arrSum();
//
//	std::cout << sum << std::endl;
//}
///////////////////////////////////////////////////
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//void print(int n) {
//	std::cout << n << " ";
//}
//
//int main() {
//	std::vector<int> v = { 1, 2, 3, 4, 5 };
//
//	std::for_each(v.begin(), v.end(), print);
//}
//#include <iostream>
//
//void func1() {
//	std::cout << "func1 called" << std::endl;
//}
//void func2(int n) {
//	std::cout << n << std::endl;
//}
//void func_print(void(*func)()) {
//	func();
//}
//void func_print2(void (*func)(int), int n) {
//	func(n);
//}
//
//int main() {
//	func_print(func1);
//	func_print2(func2, 5);
//}
//////////////////////////////////////////
#include <iostream>
#include <vector>
#include <algorithm>

void print(int n) {
	std::cout << n << " ";
}

int main() {
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	std::for_each(v.begin(), v.end(), print);
}