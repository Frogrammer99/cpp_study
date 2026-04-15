#include <iostream>

struct draw {
	virtual void drawing() {
		std::cout << "draw" << std::endl;
	}
};

class Circle : public draw {
public:
	virtual void drawing() {
		std::cout << "Circle" << std::endl;
	}
};

int main() {
	draw* ptr = new draw;
	ptr->drawing();
	delete ptr;

	ptr = new Circle();
	ptr->drawing();
	delete ptr;
}