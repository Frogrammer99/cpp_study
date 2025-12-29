//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string name, address, age;
//
//	cout << "name?: ";
//	getline(cin, name, '\n');
//
//	cout << "address?: ";
//	getline(cin, address, '\n');
//
//	cout << "age?: ";
//	getline(cin, age, '\n');
//
//	cout << name << " " << address << " " << age << endl;
//	return 0;
//}
// ===========================================================
//2
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string str;
//	cout << "Input String: ";
//	getline(cin, str, '\n');
//
//	for (int i = 0; i < str.length(); i++) {
//		for (int j = 0; j <= i; j++) {
//			cout << str[j];
//		}
//		cout << endl;
//	}
//}
// ===========================================================
//3
//#include <iostream>
//using namespace std;
//
//int main() {
//	int k, n = 0;
//	int sum = 0;
//	cout << "1부터 N까지의 합, N을 입력: ";
//	cin >> n;
//	for (k = 1; k <= n; k++) {
//		sum += k;
//	}
//	cout << sum;
//}
//4
// ==========================================================
//#include <iostream>
//using namespace std;
//
//int main() {
//	int num, item;
//	while (1) {
//		cout << "which? 1, 2, 3, quit:4";
//		cin >> num;
//		if (num <= 0 || num > 4)
//			cout << "Incorrect!" << endl;
//		else if (num == 4) {
//			cout << "Terminate" << endl;
//			break;
//		}
//		else {
//			cout << "how many?";
//			cin >> item;
//			cout << "menu " << num << "quantity " << item << endl;
//		}
//
//	}
//}
// ==============================================================
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s1 = "에스프레소", s2 = "아메리카노", s3 = "카푸치노";
//	string order;
//	int number;
//	int v1 = 2000, v2 = 2300, v3 = 2500;
//	int income = 0;
//
//	while (1) {
//		cout << "Order: ";
//		cin >> order >> number;
//		if (order.compare(s1) == 0) {
//			cout << v1 * number << endl;
//			income += v1 * number;
//		}
//		else if (order.compare(s2) == 0) {
//			cout << v2 * number << endl;
//			income += v2 * number;
//		}
//		else if (order.compare(s3) == 0) {
//			cout << v3 * number << endl;
//			income += v3 * number;
//		}
//		else
//			cout << "Incorrect!" << endl;
//
//		if (income >= 20000) {
//			cout << "Closed" << endl;
//			break;
//		}
//
//	}
//}
// ============================================================================
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char input[30];
	char num1[10], oper[10], num2[10];
	int inum1, inum2;
	int lock = 0;
	int count = 0;

	while (1) {
		cout << "? ";
		cin.getline(input, 30, '\n');
		if (strcmp(input, "quit") == 0)
			break;
		for (int i = 0; i < 30; i++) {
			if (input[i] == ' ' || input[i] == '\0') {
				if (count == 0) {
					for (int j = lock; j < i; j++) {
						num1[j - lock] = input[j];
						if (j == i - 1)
							num1[j - lock + 1] = '\0';
					}
				}
				if (count == 1) {
					for (int j = lock+1; j < i; j++) {
						oper[j - lock - 1] = input[j];
						if (j == i - 1)
							oper[j - lock] = '\0';
					}
				}
				if (count == 2) {
					for (int j = lock+1; j < i; j++) {
						num2[j - lock - 1] = input[j];
						if (j == i - 1)
							num2[j - lock] = '\0';
					}
				}
				if (count == 2)
					break;
				lock = i;
				count++;
			}
		}
		inum1 = atoi(num1);
		inum2 = atoi(num2);

		if (oper[0] == '+')
			cout << inum1 << " + " << inum2 << " = " << inum1 + inum2 <<endl;
		else if (oper[0] == '-')
			cout << inum1 << " - " << inum2 << " = " << inum1 - inum2 << endl;
		else if (oper[0] == '*')
			cout << inum1 << " * " << inum2 << " = " << inum1 * inum2 << endl;
		else if (oper[0] == '/')
			cout << inum1 << " / " << inum2 << " = " << inum1 / inum2 << endl;
		lock = 0;
		count = 0;
	}
}