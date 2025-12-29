//1
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string array;
//	int count = 0;
//
//	getline(cin, array);
//
//	for (string::iterator it = array.begin(); it != array.end(); ++it) {
//		if (*it == 'x')
//			count++;
//	}
//
//	cout << count << endl;
//
//	return 0;
//}
// ===================================================================
//2
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//	char array1[20] = "PASSWORD";
//	char array2[20];
//
//	while (1) {
//		cin.getline(array2, 20, '\n');
//		if (strcmp(array1, array2) == 0) {
//			cout << "Correct!" << endl;
//			break;
//		}
//		else {
//			cout << "Input Password Again" << endl;
//		}
//	}
//	return 0;
//}
//===============================================================
//3
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s1 = "password";
//	string s2;
//
//	while (1) {
//		getline(cin, s2, '\n');
//		if (s1 == s2) {
//			cout << "correct!" << endl;
//			break;
//		}
//		else
//			cout << "Incorrect!" << endl;
//	}
//
//}
//=========================================================
//4
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s1 = "password";
//	string s2;
//
//	while (1) {
//		getline(cin, s2, '\n');
//		if (s1.compare(s2) == 0) {
//			cout << "correct" << endl;
//			break;
//		}
//		else
//			cout << "incorrect" << endl;
//	}
//}
//=======================================================
//5
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s1;
//	string s2;
//
//	cout << "Input New Password: ";
//	getline(cin, s1, '\n');
//	while (1) {
//		cout << "Input Again New Password: ";
//		getline(cin, s2, '\n');
//		if (s1.compare(s2) == 0) {
//			cout << "Correct!";
//			break;
//		}
//		else
//			cout << "Incorrect!" << endl;
//	}
//}
//==========================================
//6
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s1 = "yes";
//	string s2;
//
//	while (1) {
//		cout << "If You Want Quit. Input \"yes\": ";
//		getline(cin, s2, '\n');
//		if (s1.compare(s2) == 0) {
//			cout << "Quit...." << endl;
//			break;
//		}
//	}
//}
//============================================
//7
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//	char names[5][20];
//	int Long = 0;
//	int num = 0;
//
//	for (int i = 0; i < 5; i++) {
//		cin.getline(names[i], 20, ';');
//		if (strlen(names[i]) >= Long) { sizeof를 사용하는 것은 불가. 글자 수를 세는것이 아니라 배열 전체의 크기가 얼마인지 반환한다.
//			Long = strlen(names[i]);
//			num = i;
//		}
//	}
//
//	for (int i = 0; i <= 4; i++) {
//		cout << i+1 << ": " << names[i] << endl;
//	}
//
//	cout << "most Long name is " << names[num] << endl;
//}
//
