#pragma once
class Shape {
private:
	Shape* next;
protected:
	virtual void draw();
public:
	Shape() { next = nullptr; }
	virtual ~Shape() {};
	void paint();
	Shape* add(Shape* p);
	Shape* getNext() { return next; }
};