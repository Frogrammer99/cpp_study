////#include <iostream>
////
////void sortArray(int* arr, int size) {
////	int temp;
////	for (int i = 0; i < size; ++i) {
////		for (int j = i+1; j < size; ++j) {
////			if (arr[i] > arr[j]) {
////				temp = arr[i];
////				arr[i] = arr[j];
////				arr[j] = temp;
////			}
////		}
////	}
////}
////
////int binarySearch(int* arr, int size, int target) {
////	int start = 0;
////	int last = size - 1;
////	int middle;
////	while (start <= last) {
////		middle = (start + last) / 2;
////		if (arr[middle] == target) {
////			return middle;
////		}
////		
////		if (arr[middle] > target) {
////			last = middle - 1;
////		}
////		else {
////			start = middle + 1;
////		}
////	}
////	return -1;
////}
////
////int main() {
////	int arr[] = {1, 2, 112, 34, 54, 645, 75, 72, 45, 21, 1111, 32, 10, 12, 53};
////	int len = sizeof(arr) / sizeof(int);
////	std::cout << len << std::endl;
////	sortArray(arr, len);
////
////	for (int i = 0; i < len; ++i)
////		std::cout << arr[i] << " ";
////	std::cout << std::endl;
////
////	int target = binarySearch(arr, len, 645);
////	
////	if (target == -1)
////		std::cout << "Fail to Find" << std::endl;
////	else {
////		std::cout << "index: " << target << std::endl;
////		std::cout << arr[target];
////	}
////}
/////////////////////////////////////////////////////////////////////
////#include <iostream>
////
////void recursiveFunc(int num) {
////	if (num <= 0)
////		return;
////	printf("reculsive Call %d\n", num);
////	recursiveFunc(num - 1);
////}
////
////int main() {
////	recursiveFunc(5);
////}
////#include <iostream>
////
////int factorial(int num) {
////	if (num == 0)
////		return 1;
////	return num * factorial(num - 1);
////}
////
////int main() {
////
////	int fact = factorial(9);
////
////	std::cout << fact;
////}
///////////////////////////////////////////////////////////////////////////////
////#include <iostream>
////
//////fibo(1) = 0
//////fibo(2) = 1
//////fibo(n) = fibo(n-1) + fibo(n-2)
////int fibonacci(int num) {
////	if (num == 1)
////		return 0;
////	else if (num == 2)
////		return 1;
////	return fibonacci(num - 1) + fibonacci(num - 2);
////}
////
////int main() {
////	for (int i = 1; i < 15; ++i)
////		std::cout << fibonacci(i) << " ";
////}
////////////////////////////////////////////////////////////
//#include <iostream>
//
//int binarySearch(int* arr, int target, int start, int last) {
//	int middle = (start + last) / 2;
//
//	if (arr[middle] == target)
//		return middle;
//	if (start >= last)
//		return -1;
//
//	if (arr[middle] > target)
//		last = middle - 1;
//	else
//		start = middle + 1;
//
//	return binarySearch(arr, target, start, last);
//}
//
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 9, 11,  234, 324, 355 };
//	int start = 0;
//	int last = sizeof(arr) / sizeof(int) - 1;
//	int target = 11;
//
//	int index = binarySearch(arr, target, start, last);
//	
//	std::cout << arr[index];
//}