#include <iostream>
using namespace std;

struct circle {
private:
	int radius;
public:
	circle();
	circle(int r);
	double getArea();
};
double circle::getArea() {
	return 3.14 * 3.14 * radius;
}
circle::circle() {
	radius = 1;
}
circle::circle(int r) {
	radius = r;
}

int main() {
	circle c1;
	circle c2(100);

	cout << c1.getArea() << "   " << c2.getArea() << endl;
}