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
	const int defaultX = 0;
	const int defaultY = 9;
	const int distance = 1;
public:
	Human();
	virtual ~Human() override {}
	virtual void move() override;
	virtual char getShape() override;
	void setDirection(char c);
	bool getCanMove();

};
Human::Human() : GameObject(defaultX, defaultY, distance) {}
void Human::move() {
	if (direction == 'a') {
		if (x == 0) {
			canMove = false;
			return;
		}
		x -= distance;
	}
	else if (direction == 's') {
		if (y == 0) {
			canMove = false;
			return;
		}
		y -= distance;
	}
	else if (direction == 'w') {
		if (y == 9) {
			canMove = false;
			return;
		}
		y += distance;
	}
	else if (direction == 'd') {
		if (x == 9) {
			canMove = false;
			return;
		}
		x += distance;
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
	std::mt19937& getEngine();
	int randNum();
	const int defaultX = 9;
	const int defaultY = 4;
	const int distance = 2;
public:
	Monster();
	virtual ~Monster() override {}
	virtual void move() override;
	virtual char getShape() override;

};
Monster::Monster() : GameObject(defaultX, defaultY, distance) {}
std::mt19937& Monster::getEngine() {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	return gen;
}
int Monster::randNum() {
	std::uniform_int_distribution<int> dis(0, 3);
	return dis(getEngine());
}
void Monster::move() {
	int move = randNum();

	if (move % 4 == 0) {

	}
}

class Food : public GameObject {

};

