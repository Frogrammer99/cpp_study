#pragma once
#include "Shape_t.h"
class Graphic {
private:
	std::vector<Shape*> sV;
public:
	void insertShape();
	void deleteShape();
	void printAll();
	void run();
};

