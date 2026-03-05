//#include <iostream>
//
//class Shape {
//public:
//	virtual void draw();
//};
//
//class Rect : public Shape {
//public:
//	virtual void draw() override;
//};
/////////////////////////////////////////////////////
//#include <iostream>
//
//class Base {
//public:
//	virtual void f() { std::cout << "Base::f() called" << std::endl; }
//};
//
//class Derived : public Base {
//public:
//	void f() override { std::cout << "Derived::f() called" << std::endl; }
//};
//
//class GrandDerived : public Derived {
//public:
//	void f() override { std::cout << "GrandDerived::f() called" << std::endl; }
//};
//
//int main() {
//	GrandDerived g;
//	Derived d;
//	Base* bp;
//	Derived* dp;
//	GrandDerived* gp;
//
//	bp = dp = gp = &g;
//
//	bp->f();
//	dp->f();
//	gp->f();
//
//	bp = dp = &d;
//
//	bp->f();
//	dp->f();
//}
/////////////////////////////////////////////////
//#include <iostream>
//
//class Shape {
//public:
//	virtual void f() { std::cout << "Shape::f() called" << std::endl; }
//};
//
//class Circle : public Shape {
//public:
//	virtual void f() override { std::cout << "Circle::f() called" << std::endl; }
//};
//
//int main() {
//	Shape sh;
//	Shape* sP = &sh;
//	sP->f();
//
//	Circle c;
//	sP = &c;
//	sP->f();
//	sP->Shape::f();
//}
//#include <iostream>
//
//class Shape {
//public:
//	virtual void draw() { std::cout << "---Shape---" << std::endl; }
//};
//
//class Circle : public Shape {
//public:
//	virtual void draw() override { Shape::draw(); std::cout << "Circle" << std::endl; }
//};
//
//int main() {
//	Circle c;
//	Shape* sP = &c;
//
//	sP->draw();
//	sP->Shape::draw();
//}
////////////////////////////////////////////
//#include <iostream>
//
//void sendMessage(const char* msg) { std::cout << "Global " << msg << std::endl; }
//
//class Window {
//public:
//	void sendMessage(const char* msg) { std::cout << "windown msg: " << msg << std::endl; }
//	void run() { sendMessage("Hello!!"); }
//};
//
//int main() {
//	Window w;
//	w.run();
//}
/////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class Base {
//public:
//	virtual ~Base() { std::cout << "~Base()" << std::endl; }
//};
//
//class Derived : public Base {
//public:
//	 ~Derived() { std::cout << "~Derived()" << std::endl; }
//};
//
//int main() {
//	Base* bP = new Derived();
//	Derived* dP = new Derived();
//
//	delete bP;
//	delete dP;
//}
///////////////////////////////////////
//#include <iostream>
//
//class Base {
//public:
//	virtual ~Base() { std::cout << "~Base()" << std::endl; }
//};
//
//class Derived : public Base {
//public:
//	virtual ~Derived() override { std::cout << "~Derived" << std::endl; }
//};
//
//int main() {
//	Derived* dP = new Derived();
//	Base* bP = new Derived();
//
//	delete dP;
//	delete bP;
//}
//////////////////////////////////////////////////////////
