#include <typeinfo>
#include <iostream>

class Circle {
public:
	Circle() { std::cout << "持失切 持失" << std::endl; }
};

int main() {

	Circle c1();
}