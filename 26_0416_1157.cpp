#include <iostream>

class Parent {
public:
	Parent() { std::cout << "부모 생성자 실행!!" << std::endl; }
	virtual ~Parent() {std::cout << "부모 소멸자 실행!!" << std::endl;}
};

class Child : public Parent {
public:
	Child() { std::cout << "자식 생성자 실행!!" << std::endl; }
	virtual ~Child() override{ std::cout << "자식 소멸자 실행!!" << std::endl; }
};

int main() {
	Parent* ptr = new Child();
	delete ptr;
}