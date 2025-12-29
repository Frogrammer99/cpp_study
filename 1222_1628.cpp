//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//	char input[30];
//	char num1[10], oper[10], num2[10];
//	int inum1, inum2;
//	int lock = 0;
//	int count = 0;
//
//	while (1) {
//		cout << "? ";
//		cin.getline(input, 30, '\n');
//		if (strcmp(input, "quit") == 0)
//			break;
//		for (int i = 0; i < 30; i++) {
//			if (input[i] == ' ' || input[i] == '\0') {
//				if (count == 0) {
//					for (int j = lock; j < i; j++) {
//						num1[j - lock] = input[j];
//						if (j == i - 1)
//							num1[j - lock + 1] = '\0';
//					}
//				}
//				if (count == 1) {
//					for (int j = lock + 1; j < i; j++) {
//						oper[j - lock - 1] = input[j];
//						if (j == i - 1)
//							oper[j - lock] = '\0';
//					}
//				}
//				if (count == 2) {
//					for (int j = lock + 1; j < i; j++) {
//						num2[j - lock - 1] = input[j];
//						if (j == i - 1)
//							num2[j - lock] = '\0';
//					}
//				}
//				if (count == 2)
//					break;
//				lock = i;
//				count++;
//			}
//		}
//		inum1 = atoi(num1);
//		inum2 = atoi(num2);
//
//		if (oper[0] == '+')
//			cout << inum1 << " + " << inum2 << " = " << inum1 + inum2 << endl;
//		else if (oper[0] == '-')
//			cout << inum1 << " - " << inum2 << " = " << inum1 - inum2 << endl;
//		else if (oper[0] == '*')
//			cout << inum1 << " * " << inum2 << " = " << inum1 * inum2 << endl;
//		else if (oper[0] == '/')
//			cout << inum1 << " / " << inum2 << " = " << inum1 / inum2 << endl;
//		lock = 0;
//		count = 0;
//	}
//}
// 위 코드를 보다 간단하게 
// c++에서는 atoi보다는 stoi를 많이 쓴다.
//#include <iostream>
//#include <sstream>
//#include <string>
//using namespace std;
//
//int main() {
//	string input;
//	int num1, num2;
//	char oper;
//
//	while (1) {
//		cout << "?: ";
//		getline(cin, input, '\n');
//
//		if (input == "quit")
//			break;
//		stringstream ss(input);
//
//		ss >> num1 >> oper >> num2;
//
//		if (oper == '+')
//			cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
//		else if(oper == '-')
//			cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
//		else if(oper == '*')
//			cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
//		else if(oper == '/')
//			cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
//	}
//}
// ========================================================================
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string input;
//	int alphabet[26] = { 0, };
//
//	getline(cin, input, ';');
//
//	for (int i = 0; i < input.length(); i++)
//		input[i] = tolower(input[i]);
//	
//	for (int i = 0; i < 26; i++) {
//		for (int j = 0; j < input.length(); j++) {
//			if (input[j] == i + 97)
//				alphabet[i]++;
//		}
//	}
//
//	for (int i = 0; i < 26; i++) {
//		cout << char(i + 97) << " (" << alphabet[i] << ") :";
//		for (int j = 0; j < alphabet[i]; j++)
//			cout << "*";
//		cout << endl;
//	}
//}
