#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string array;
	int Count = 0;
	getline(cin, array);
	Count = count(array.begin(), array.end(), 'x');

	cout << Count << endl;

	return 0;
}