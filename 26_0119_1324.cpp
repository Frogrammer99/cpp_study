//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int radius);
//	double getArea();
//};
//Circle::Circle() : Circle(1) {};
//Circle::Circle(int radius) {
//	this->radius = radius;
//}
//#include <iostream>	
//#include <string>
//using namespace std;
//
//int main() {
//	string str;
//	string address("부산광역시 사하구 당리동");
//	string copyAddress = address;
//
//	char text[] = { 'L', 'O', 'V', 'E', '\0' };
//	string title = text;
//
//	string* p = new string("C++");
//	p->append(" Great!!");
//	cout << *p;
//	delete p;
//}
//////////////////////////////////////////////////////
//#include <iostream>	
//#include <string>
//using namespace std;
//
//int main() {
//	string names[5];
//
//	for (int i = 0; i < 5; i++) {
//		cout << "이름: ";
//		getline(cin, names[i], '\n');
//	}
//
//	string latter = names[0];
//
//	for (int i = 0; i < 5; i++) {
//		if (latter < names[i])
//			latter = names[i];
//	}
//
//	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
//}
//////////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s1 = "Moon ";
//	string s2 = "ChangWuk";
//
//	if (s1 == s2)
//		cout << "같다" << endl;
//	else
//		cout << "다르다" << endl;
//
//	if (s1.compare(s2) == 0) // compare는 같으면 0, 사전상 먼저면 음수, 뒤면 양수 
//		cout << "같다" << endl;
//	s1.append(s2);
//
//	cout << s1 << endl;
//
//	s1 += s2;
//	cout << s1 << endl;
//
//	s1.insert(5, s2);
//
//	cout << s1 << endl;
//
//	s1.replace(0, 4, "Great");
//
//	cout << s1 << endl;
//
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	cout << s1.capacity() << endl;
//
//	string s3 = s1;
//
//	s3.erase(0, 6);
//	cout << s3 << endl;
//
//	s3.clear();
//	cout << s3 << endl;
//
//	s3 = s1.substr(0, 5);
//	cout << s3 << endl;
//
//	s3 += s1.substr(0);
//	cout << s3 << endl;
//
//	cout << s3.find("Chang") << endl;
//	cout << s3.find("W") << endl;
//
//	cout << s3.length() << endl;
//	cout << s3.rfind("Chang") << endl;
//
//	char ch1 = s3.at(3);
//	char ch2 = s3[3];
//
//	string s4 = s3;
//	s4[3] = s4[2];
//
//	cout << ch1 << endl << ch2 << endl << s4 << endl;
//	
//	string year = "2026";
//	cout << stoi(year) << endl;
//	
//
//}
////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	cout << "문자열 입력: ";
//	getline(cin, s, '\n');
//
//	for (int i = 0; i < s.length(); i++) {
//		s += s.substr(0, 1);
//		s.erase(0, 1);
//		cout << s << endl;
//	}
//}
///////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	int sum = 0;
//	int start = 0;
//	int index = -1;
//	cout << "덧셈 식 입력: ";
//	getline(cin, s, '\n');
//
//	while (1) {
//		if (s.find('+', index + 1) != -1)
//			index = s.find('+', index + 1);
//		else
//			index = s.length();
//		sum += stoi(s.substr(start, index - start));
//		start = index + 1;
//
//		if (index == s.length())
//			break;
//	}
//
//	cout << sum << endl;
//}
////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	cout << "덧셈 식 입력: ";
//	getline(cin, s, '\n');
//
//	int sum = 0;
//	int start = 0;
//	int pos;
//
//	while (1) {
//		pos = s.find('+', start);
//
//		if (pos == -1) {
//			sum += stoi(s.substr(start));
//			break;
//		}
//		int count = pos - start;
//		sum += stoi(s.substr(start, count));
//		start = pos + 1;
//	}
//
//	cout << sum << endl;
//}
////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string lines, find, replace;
//	int pos = 0, start = 0;
//	cout << "문자열 입력, &를 입력 시 마무리: ";
//	getline(cin, lines, '&');
//	cin.ignore();
//	cout << "find: ";
//	getline(cin, find, '\n');
//	cout << "replace: ";
//	getline(cin, replace, '\n');
//
//	while (1) {
//		pos = lines.find(find, start);
//
//		if (pos == -1)
//			break;
//
//		lines.replace(pos, find.length(), replace);
//		start = pos + replace.length();
//	}
//
//	cout << endl << endl << lines << endl;
//
//}
///////////////////////