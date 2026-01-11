#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	int value = 3;
	int array[3] = { 0, };
	int* ptr = &value;
	int* ptr2 = 0;
	int* ptr3 = NULL;
	int* ptr4 = nullptr;

	cout << typeid(&value).name() << endl;
	cout << sizeof(ptr) << endl;
	cout << typeid(array).name() << endl;
	cout << array << endl;
	cout << &array << endl;
	cout << *array << endl;
}