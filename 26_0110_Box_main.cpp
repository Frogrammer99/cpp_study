#include <iostream>
#include "26_0110_Box.h"
using namespace std;

int main() {
	Box b(10, 10);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();
}