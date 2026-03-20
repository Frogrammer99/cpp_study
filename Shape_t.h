#pragma once
#include <iostream>
#include <vector>
class Shape {
protected:
	virtual void draw() = 0;
public:
	void paint();
};