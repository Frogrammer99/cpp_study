#include <iostream>
using namespace std;

class point {
	int x, y;
public:
	point();
	point(int a, int b);
};
point::point() : point(0, 0){}
point::point(int a, int b) {
	x = a;
	y = b;
}