#include <iostream>

class Test {
private:
	int num = 10;
public:
	void reduceNum() const;
	void printNum() const;
};

void Test::reduceNum() const {
	const_cast<Test*>(this)->num--;
}
void Test::printNum() const {
	std::cout << num << std::endl;
}

int main() {
	const int num = 10;
	const int* p = &num;
	int* p2 = const_cast<int*>(p);
	*p2 = 30;
	
	std::cout << num << std::endl;
	std::cout << *p << std::endl;
	std::cout << *p2 << std::endl;

	std::cout << std::endl << std::endl;

	int numNotConst = 10;
	const int* ptr = &numNotConst;
	int* ptr2 = const_cast<int*>(ptr);
	*ptr2 = 30;

	std::cout << numNotConst << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << *ptr2 << std::endl;
	std::cout << std::endl;

	Test t;
	t.printNum();
	t.reduceNum();
	t.printNum();
}