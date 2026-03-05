#include <iostream>
#include "Shape.h"	

void Shape::paint() {
	draw();
}
void Shape::draw() {
	std::cout << "--Shape--" << std::endl;
}
Shape* Shape::add(Shape* p) {
	next = p;
	return p;
}