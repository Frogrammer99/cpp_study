#include <iostream>

class Parent {
public:
	virtual void who() { std::cout << "Parent" << std::endl; }
};

class Child : public Parent {
public:
	virtual void who() override { std::cout << "Child" << std::endl; }
};

void Test(Parent& a) {
	a.who();
}

int main() {
	Child c;
	Test(c);

	Parent* ptr = new Child();
	ptr->who();
	
	Parent& ref = c;
	ref.who();
}