#include <iostream>

class SortedArray {
//private:
//	int size;
//	int* p;
//	void sort();
//public:
//	SortedArray();
//	SortedArray(int arr[], int size);
//	SortedArray(const SortedArray& src);
//	~SortedArray();
//	SortedArray operator+ (const SortedArray& op2);
//	SortedArray& operator= (const SortedArray& op2);
//	void show();
//};
//void SortedArray::sort() {
//	int tmp;
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			if (p[i] < p[j]) {
//				tmp = p[i];
//				p[i] = p[j];
//				p[j] = tmp;
//			}
//		}
//	}
//}
//SortedArray::SortedArray() {
//	size = 0;
//	p = nullptr;
//}
//SortedArray::SortedArray(int arr[], int size) {
//	this->size = size;
//	p = new int[size];
//	for (int i = 0; i < size; i++)
//		p[i] = arr[i];
//	sort();
//}
//SortedArray::SortedArray(const SortedArray& src) {
//	this->size = src.size;
//	p = new int[this->size];
//	for (int i = 0; i < size; i++)
//		this->p[i] = src.p[i];
//}
//SortedArray::~SortedArray() {
//	delete[]p;
//}
//SortedArray SortedArray::operator+	(const SortedArray& op2) {
//	int tempSize = this->size + op2.size;
//	int* tempArr = new int[tempSize];
//	for (int i = 0; i < tempSize; i++) {
//		if (i < this->size)
//			tempArr[i] = this->p[i];
//		else
//			tempArr[i] = op2.p[i - this->size];
//	}
//	SortedArray temp(tempArr, tempSize);
//	delete[]tempArr;
//
//	return temp;
//}
//SortedArray& SortedArray::operator=(const SortedArray& op2) {
//	this->size = op2.size;
//	if (this->p != nullptr)
//		delete[]p;
//	this->p = new int[this->size];
//	for (int i = 0; i < this->size; i++)
//		this->p[i] = op2.p[i];
//
//	return *this;
//}
//void SortedArray::show() {
//	for (int i = 0; i < this->size; i++)
//		std::cout << p[i] << " ";
//	std::cout << std::endl;
//}
//
//int main() {
//	int n[] = { 2, 20, 6 };
//	int m[] = { 10, 7, 8, 30 };
//	SortedArray a(n, 3), b(m, 4), c;
//
//	c = a + b;
//
//	a.show();
//	b.show();
//	c.show();
//}
////////////////////////////////////////////////////
//#include <iostream>
//
//void sort(int* arr, int size) {
//	int tmp;
//
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			if (arr[i] < arr[j]) {
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[] = {1, 3, 2, 6, 12, 5, 64, 36, 11, 34, 93};
//	int len = sizeof(arr) / sizeof(int);
//
//	sort(arr, len);
//
//	for (int i = 0; i < len; i++)
//		std::cout << arr[i] << " ";
//}
/////////////////////////////////////////////////////
