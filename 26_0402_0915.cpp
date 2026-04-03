////// prbl 1
//#include <iostream>
//#include <vector>
//
//long long sum(const std::vector<int>& v) {
//	int sum = 0;
//	for (int i = 0; i < v.size(); ++i)
//		sum += v[i];
//	return sum;
//}
//
//int main() {
//	std::vector<int> v{ 3,6,7,9 };
//	std::cout << sum(v);
//}
//
//// prbl 2
//#include <iostream>
//
//bool is_leap(int y) {
//	bool val;
//	if (y % 4 == 0)
//		val = true;
//	if (y % 100 == 0)
//		val = false;
//	if (y % 400 == 0)
//		val = true;
//
//	return val;
//}
//
//int main() {
//	std::cout << std::boolalpha << is_leap(2000) << " " << is_leap(1900) << " " << is_leap(2024);
//}
//
//// prbl 3
//#include <iostream>
//
//class Rect {
//private:
//	int width, height;
//public:
//	Rect(int width, int height) { this->width = width; this->height = height; }
//	int area() const { return width * height; }
//	void setwidth(int width) {
//		if (width < 0) {
//			this->width = 0;
//			return;
//		}
//		this->width = width;
//	}
//	void setHeight(int height) {
//		if (height < 0) {
//			this->height = 0;
//			return;
//		}
//		this->height = height;
//	}
//};
//
//int main() {
//	Rect r(3, 4);
//	std::cout << r.area() << std::endl;
//	r.setwidth(-5); r.setHeight(2);
//	std::cout << r.area();
//}
//
//
//// prbl 4
//#include <iostream>
//#include <string>
//using namespace std;
//
//class BankAccount {
//private:
//	string owner;
//	double balance;
//public:
//	BankAccount(const string& name, double initial) { owner = name; balance = initial; }
//	void deposit(double amount) { balance += amount; }
//	bool withdraw(double amount) {
//		if (balance < amount)
//			return false;
//		balance -= amount;
//		return true;
//	}
//	double getBalance() const { return balance; }
//	void printInfo() const { cout << "Owner: " << owner << ", Balance: " << balance << " won"; }
//};
//
//int main() {
//	BankAccount account("Alice", 1000);
//	account.printInfo(); // Owner: Alice, Balance: 1000 won
//
//	account.deposit(500);
//	account.printInfo(); // Owner: Alice, Balance: 1500 won
//
//	if (account.withdraw(2000)) {
//		cout << "Withdraw OK!\\n"; // 이건 출력 안됨
//	}
//	else {
//		cout << "Withdraw FAILED!\\n"; // 이것이 출력됨
//	}
//
//	if (account.withdraw(1000)) {
//		cout << "Withdraw OK!\\n"; // 이것이 출력됨
//	}
//
//	account.printInfo(); // Owner: Alice, Balance: 500 won
//}
//
// prbl 5
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Animal {
//public:
//	virtual void speak() { cout << "???" << endl; }
//};
//
//class Dog : public Animal {
//public:
//	virtual void speak() { cout << "Woof" << endl; }
//};
//
//class Cat : public Animal {
//public:
//	virtual void speak() { cout << "Meow" << endl; }
//};
//
//int main() {
//	vector<Animal*> zoo{ new Dog, new Cat, new Animal };
//	for (auto p : zoo) p->speak(); // Woof / Meow / ???
//	for (auto p : zoo) delete p;
//}
//
//// prbl 6
//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename T>
//T get_max(T v1, T v2) {
//	T bigger;
//
//	if (v1 > v2)
//		bigger = v1;
//	else
//		bigger = v2;
//
//	return bigger;
//}
//
//int main() {
//	cout << get_max(10, 20) << "\\n";            // 20
//	cout << get_max(3.14, 2.71) << "\\n";        // 3.14
//	string s1 = "Apple", s2 = "Banana";
//	cout << get_max(s1, s2) << "\\n";            // Banana
//}
//
// prbl 7
//#include <iostream>
//using namespace std;
//
//class IntPtr {
//private:
//	int* ptr;
//public:
//	IntPtr(int val) { ptr = new int(val); }
//	~IntPtr() { delete ptr; }
//	IntPtr(const IntPtr& other) { int val = other.getValue(); ptr = new int(val); }
//	int getValue() const {
//		return *ptr;
//	}
//};
//
//int main() {
//	IntPtr p1(10);
//	IntPtr p2 = p1; // 복사 생성자 호출
//
//	cout << p1.getValue() << "\\n"; // 10
//	cout << p2.getValue() << "\\n"; // 10
//}
//
//// prbl 8
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> removeDuplicates(const vector<int>& v) {
//	vector<int> result = v;
//	vector<int>::iterator it;
//	vector<int>::iterator it2;
//
//	for (it = result.begin(); it != result.end(); ++it) {
//		for (it2 = it + 1; it2 != result.end();) {
//			if (*it == *it2)
//				it2 = result.erase(it2);
//			else
//				++it2;
//		}
//	}
//
//	return result;
//}
//
//int main() {
//	vector<int> nums = { 1, 3, 2, 3, 1, 4, 2, 5 };
//	vector<int> result = removeDuplicates(nums);
//
//	cout << "Result: ";
//	for (int n : result) {
//		cout << n << " ";
//	}
//	cout << "\\n"; // 1 3 2 4 5
//}
//
//// prbl 9
//#include <iostream>
//#include <string>
//using namespace std;
//
//int getMinChangesToAnagram(const string& s1, const string& s2) {
//	if (s1.length() != s2.length())
//		return -1;
//	if (s1 == s2)
//		return 0;
//
//	int needChange = 0;
//	char* arr = new char[s1.length()] {0, };
//
//	for (int i = 0; i < s1.length(); ++i) {
//		bool isExist = false;
//		bool isTested = false;
//		int num1 = 0, num2 = 0;
//		//case 1: s1의 문자가 s2에 존재하는 경우
//		//case 2: s1의 문자가 s2에 존재하지 않는 경우
//		for (int j = 0; j < s1.length(); ++j) {
//			if (s1[i] == s2[j])
//				isExist = true;
//		}
//		if (isExist == false)
//			++needChange;
//		else {
//			for (int j = 0; j < s1.length(); ++j) {
//				if (s1[i] == arr[j])
//					isTested = true;
//			}
//			if (isTested == false) {
//				for (int j = 0; j < s1.length(); ++j)
//					if (s1[i] == s1[j])
//						++num1;
//				for (int j = 0; j < s1.length(); ++j)
//					if (s1[i] == s2[j])
//						++num2;
//
//				if (num1 != num2) {
//					num1 -= num2;
//					if (num1 < 0)
//						num1 *= -1;
//					needChange += num1;
//				}
//			}
//
//		}
//		arr[i] = s1[i];
//	}
//
//	delete[]arr;
//	return needChange;
//}
//
//int main() {
//	cout << "listen -> silent: " << getMinChangesToAnagram("listen", "silent") << "\\n"; // 0
//	cout << "abc -> abd: " << getMinChangesToAnagram("abc", "abd") << "\\n"; // 1
//	cout << "aabbcc -> aabdde: " << getMinChangesToAnagram("aabbcc", "aabdde") << "\\n"; // 3
//	cout << "abc -> xyz: " << getMinChangesToAnagram("abc", "xyz") << "\\n"; // 3
//	cout << "ab -> abc: " << getMinChangesToAnagram("ab", "abc") << "\\n"; // -1
//	cout << "test -> test: " << getMinChangesToAnagram("test", "test") << "\\n"; // 0
//}
//
//// prbl 10
//#include <iostream>
//#include <string>
//#include <map>
//#include <vector>
//using namespace std;
//
//struct Item {
//	string name;
//	int attackPower;
//	int rarity;
//
//	bool operator<(const Item& other) const {
//		if (this->attackPower < other.attackPower)
//			return true;
//		else if (this->attackPower > other.attackPower)
//			return false;
//
//		if (this->rarity < other.rarity)
//			return false;
//		else if (this->rarity > other.rarity)
//			return true;
//
//		if (this->name < other.name)
//			return true;
//		else if (this->name < other.name)
//			return false;
//	}
//};
//
//void tryInsert(map<Item, int>& shop, const Item& item, int price) {
//	if (item.attackPower < 50)
//		return;
//
//	map<Item, int>::iterator it = shop.find(item);
//	if (it != shop.end()) {
//		if (it->second > price)
//			shop[item] = price;
//	}
//	else {
//		shop[item] = price;
//	}
//	
//}
//
//int main()
//{
//	map<Item, int> shop;
//
//	tryInsert(shop, { "Excalibur",      100,    1 }, 5000);
//	tryInsert(shop, { "Dragon Sword",   100,    2 }, 4500);
//	tryInsert(shop, { "Wooden Sword",   20,     5 }, 100);
//	tryInsert(shop, { "Excalibur",      100,    1 }, 5200);
//	tryInsert(shop, { "Excalibur",      100,    1 }, 4800);
//
//	cout << "--- 상점 아이템 목록 (정렬 및 갱신 결과) ---\n";
//	for (const auto& kv : shop)
//	{
//		const Item& item = kv.first;
//		int price = kv.second;
//
//		cout << item.name << " [ATK: " << item.attackPower
//			<< ", Rarity: " << item.rarity << "] : Price(" << price << ")\n";
//	}
//
//	return 0;
//}
//
//// prbl 11
//#include <iostream>
//#include <string>
//
//template <typename T>
//class MyVector {
//private:
//	T* Data;
//	int size;
//	int capacity;
//public:
//	MyVector(int InCapacity = 2) {
//		Data = new T[InCapacity];
//		capacity = InCapacity;
//		size = 0;
//	}
//	~MyVector() { if (Data) delete[] Data; }
//	void Add(const T& InData) {
//		if (size == capacity) {
//			T* newData = new T[capacity * 2]{ 0, };
//			for (int i = 0; i < size; ++i)
//				newData[i] = Data[i];
//			delete[] Data;
//			Data = newData;
//			capacity *= 2;
//		}
//		Data[size] = InData;
//		++size;
//	}
//	T& operator[] (int index) {
//		return Data[index];
//	}
//	int GetSize() const { return size; }
//	int GetCapacity() const { return capacity; }
//};
//
//
//int main()
//{
//	// 테스트: 초기 용량은 2지만, 3개를 넣어서 재할당이 일어나는지 확인합니다.
//	MyVector<int> Vec;
//	Vec.Add(10);
//	Vec.Add(20);
//
//	std::cout << "Before Resize - Size: " << Vec.GetSize() << ", Capacity: " << Vec.GetCapacity() << std::endl;
//
//	Vec.Add(30); // 여기서 재할당 로직이 실행되어야 함
//
//	std::cout << "After Resize - Size: " << Vec.GetSize() << ", Capacity: " << Vec.GetCapacity() << std::endl;
//	std::cout << "Data: " << Vec[0] << ", " << Vec[1] << ", " << Vec[2] << std::endl;
//
//	return 0;
//}
////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//using namespace std;
//
//int getMinChangesToAnagram(const string& s1, const string& s2) {
//	if (s1.length() != s2.length())
//		return -1;
//	if (s1 == s2)
//		return 0;
//
//	int needChange = 0;
//	char* arr = new char[s1.length()] {0, };
//
//	for (int i = 0; i < s1.length(); ++i) {
//		bool isExist = false;
//		bool isTested = false;
//		int num1 = 0, num2 = 0;
//		//case 1: s1의 문자가 s2에 존재하는 경우
//		//case 2: s1의 문자가 s2에 존재하지 않는 경우
//		for (int j = 0; j < s1.length(); ++j) {
//			if (s1[i] == s2[j])
//				isExist = true;
//		}
//		if (isExist == false)
//			++needChange;
//		else {
//			for (int j = 0; j < s1.length(); ++j) {
//				if (s1[i] == arr[j])
//					isTested = true;
//			}
//			if (isTested == false) {
//				for (int j = 0; j < s1.length(); ++j)
//					if (s1[i] == s1[j])
//						++num1;
//				for (int j = 0; j < s1.length(); ++j)
//					if (s1[i] == s2[j])
//						++num2;
//
//				if (num1 != num2) {
//					num1 -= num2;
//					if (num1 < 0)
//						num1 *= -1;
//					needChange += num1;
//				}
//			}
//
//		}
//		arr[i] = s1[i];
//	}
//
//	delete[]arr;
//	return needChange;
//}
//#include <iostream>
//#include <string>
//
//int getMinChangesToAnagram(std::string s1, std::string s2) {
//	if (s1 == s2)
//		return 0;
//	if (s1.length() != s2.length())
//		return -1;
//
//	int needChange = 0;
//	int alpha[26] = { 0, };
//	int lenApha = sizeof(alpha) / sizeof(int);
//
//	for (int i = 0; i <s1.length(); ++i) {
//		int s1Alpha = tolower(s1[i]) - 'a';
//		int s2Alpha = tolower(s2[i]) - 'a';
//
//		++alpha[s1Alpha];
//		--alpha[s2Alpha];
//	}
//
//	for (int i = 0; i < lenApha; ++i) {
//		if (alpha[i] > 0)
//			needChange += alpha[i];
//	}
//
//	return needChange;
//
//}
//
//int main() {
//	std::cout << "listen -> silent: " << getMinChangesToAnagram("listen", "silent") << "\n"; // 0
//	std::cout << "abc -> abd: " << getMinChangesToAnagram("abc", "abd") << "\n"; // 1
//	std::cout << "aabbcc -> aabdde: " << getMinChangesToAnagram("aabbcc", "aabdde") << "\n"; // 3
//	std::cout << "abc -> xyz: " << getMinChangesToAnagram("abc", "xyz") << "\n"; // 3
//	std::cout << "ab -> abc: " << getMinChangesToAnagram("ab", "abc") << "\n"; // -1
//	std::cout << "test -> test: " << getMinChangesToAnagram("test", "test") << "\n"; // 0
//}
////////////////////////////////////////////////////////
#include <iostream>

void hanoiTower(int num, char from, char by, char to) {
	if(num == 1)
		std::cout << "원반 " << num << "을 "
}