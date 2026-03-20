#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"

int main() {
	Shape* pS = nullptr;
	Shape* pL;

	pS = new Circle();
	pL = pS;

	pL = pL->add(new Rect());
	pL = pL->add(new Circle());
	pL = pL->add(new Line());
	pL = pL->add(new Rect());

	Shape* p = pS;
	while (p != nullptr) {
		p->paint();
		p = p->getNext();
	}

	p = pS;
	while (p != nullptr) {
		Shape* q = p->getNext();
		delete p;
		p = q;
	}
}