//#include <iostream>	
//using namespace std;
//
//char c = 'a';
//
//char& find() {
//	return c;
//}
//
//char a = find();
//
//char& refer = find();
//
//int main() {
//	refer = 'M';
//	cout << refer << '\t' << c << '\t' << a << endl;
//	find() = 'b';
//
//	cout << find() << endl;
//
//}
/////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//char& find(char* arr, int index) {
//	return arr[index];
//}
//
//int main() {
//	char name[] = "Mike";
//	cout << name << endl;
//
//	find(name, 0) = 'S';
//	cout << name << endl;
//
//	char& refc = find(name, 2);
//	refc = 't';
//	cout << name << endl;
//	cout << refc << endl;
//}
////////////////////////////////////////////////////////
