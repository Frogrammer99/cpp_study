//#include <iostream>
//
//class Cal {
//public:
//	virtual int add(int a, int b) = 0;
//	virtual int sub(int a, int b) = 0;
//	virtual double avg(int* arr, int size) = 0;
//};
//
//class GoodCal : public Cal {
//public:
//	virtual int add(int a, int b) override { return a + b; }
//	virtual int sub(int a, int b) override { return a - b; }
//	virtual double avg(int* arr, int size) override;
//};
//double GoodCal::avg(int* arr, int size) {
//	double sum = 0;
//	for (int i = 0; i < size; i++)
//		sum += arr[i];
//	return sum / size;
//}
//
//int main() {
//	int a[] = { 1, 2, 3, 4, 5 };
//	Cal* cP = new GoodCal();
//	
//	std::cout << cP->add(2, 3) << std::endl;
//	std::cout << cP->sub(10, 2) << std::endl;
//	std::cout << cP->avg(a, 5) << std::endl;
//	
//	delete cP;
//}
///////////////////////////////////////////////////////////////////////
#include <iostream>
#include <random>

class GameObject {
protected:
	int distance;
	int x, y;
public:
	GameObject(int startX, int startY, int distance) { x = startX; y = startY; this->distance = distance; }
	virtual ~GameObject() {};
	virtual void move() = 0;
	virtual char getShape() = 0;
	int getX() { return x; }
	int getY() { return y; }
	bool collide(GameObject* p);
};
bool GameObject::collide(GameObject* p) {
	return ((this->x == p->getX()) && (this->y == p->getY()));
}

class Human :public GameObject {
private:
	bool canMove = true;
	char direction;
public:
	Human(int startX, int startY, int distance);
	virtual ~Human() override {}
	virtual void move() override;
	virtual char getShape() override;
	void setDirection(char c);
	bool getCanMove();

};
Human::Human(int startX, int startY, int distance) : GameObject(startX, startY, distance) { }
void Human::move() {
	if (direction == 'a') {
		if (x == 0) {
			canMove = false;
			return;
		}
		x -= 1;
	}
	else if (direction == 's') {
		if (y == 0) {
			canMove = false;
			return;
		}
		y -= 1;
	}
	else if (direction == 'w') {
		if (y == 9) {
			canMove = false;
			return;
		}
		y += 1;
	}
	else if (direction == 'd') {
		if (x == 9) {
			canMove = false;
			return;
		}
		x += 1;
	}
	canMove = true;
}
void Human::setDirection(char c) {
	direction = 'c';
}
bool Human::getCanMove() {
	return canMove;
}
char Human::getShape() {
	return 'H';
}
class Monster :public GameObject {
private:
	
public:
	Monster(int startX, int startY, int distance);
	virtual ~Monster() override {}
	virtual void move() override;
	virtual char getShape() override;
};
Monster::Monster(int startX, int startY, int distance) : GameObject(startX, startY, distance) {

}

class Food : public GameObject {

};

