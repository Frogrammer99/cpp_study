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
	virtual char getShape() const = 0;
	int getX() const { return x; }
	int getY() const { return y; }
	bool collide(const GameObject* p);
};
bool GameObject::collide(const GameObject* p) {
	return ((this->x == p->getX()) && (this->y == p->getY()));
}

class Human :public GameObject {
private:
	bool canMove = true;
	char direction;
	static const int defaultX = 0;
	static const int defaultY = 9;
	static const int distance = 1;
public:
	Human();
	virtual ~Human() override {}
	virtual void move() override;
	virtual char getShape() const override;
	void setDirection(char c);
	bool getCanMove() const;

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
		if (x == 19) {
			canMove = false;
			return;
		}
		x += distance;
	}
	canMove = true;
}
void Human::setDirection(char c) {
	direction = c;
}
bool Human::getCanMove() const {
	return canMove;
}
char Human::getShape() const {
	return 'H';
}

class Monster :public GameObject {
private:
	std::mt19937& getEngine();
	int randNum();
	static const int defaultX = 9;
	static const int defaultY = 4;
	static const int distance = 2;
public:
	Monster();
	virtual ~Monster() override {}
	virtual void move() override;
	virtual char getShape() const override;

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
	int move = randNum() % 4; //0: up, 1: down, 2:left, 3:right

	while (1) {
		if (move == 0) { // UP
			if (y > 7) {
				move += 1;
				move %= 4;
				continue;
			}
			y += distance;
			break;
		}
		else if (move == 1) { // DOWN
			if (y < 2) {
				move += 1;
				move %= 4;
				continue;
			}
			y -= distance;
			break;
		}
		else if (move == 2) { // LEFT
			if (x < 2) {
				move += 1;
				move %= 4;
				continue;
			}
			x -= distance;
			break;
		}
		else if (move == 3) { // RIGHT
			if (x > 17) {
				move += 1;
				move %= 4;
				continue;
			}
			x += distance;
			break;
		}
	}
}
char Monster::getShape() const {
	return 'M';
}

class Food : public GameObject {
private:
	std::mt19937& getEngine();
	int randNum();
	const static int defaultX = 15;
	const static int defaultY = 0;
	const static int distance = 1;
public:
	Food() : GameObject(defaultX, defaultY, distance) {}
	virtual ~Food() override {}
	virtual void move();
	virtual char getShape() const;
};
std::mt19937& Food::getEngine() {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	return gen;
}
int Food::randNum() {
	std::uniform_int_distribution<int> dis(0, 3);
	return dis(getEngine());
}
void Food::move() {
	int move = randNum() % 4; //0: up, 1: down, 2:left, 3:right

	while (1) {
		if (move == 0) { // UP
			if (y == 9) {
				move += 1;
				move %= 4;
				continue;
			}
			y += distance;
			break;
		}
		else if (move == 1) { // DOWN
			if (y == 0) {
				move += 1;
				move %= 4;
				continue;
			}
			y -= distance;
			break;
		}
		else if (move == 2) { // LEFT
			if (x == 0) {
				move += 1;
				move %= 4;
				continue;
			}
			x -= distance;
			break;
		}
		else if (move == 3) { // RIGHT
			if (x == 19) {
				move += 1;
				move %= 4;
				continue;
			}
			x += distance;
			break;
		}
	}
}
char Food::getShape() const {
	return 'F';
}

class Game {
private:
	char map[200];
public:
	Game();
	void showMap() const;
	char getDirection() const;
	void updateMap(const GameObject* h, const GameObject* m, const GameObject* f);
	void execute();
};
Game::Game() {
	for (int i = 0; i < 200; i++)
		map[i] = '-';
}
void Game::showMap() const{
	for (int i = 0; i < 200; ++i) {
		std::cout << map[i];
		int line = (i - 19) % 20;
		if (line == 0)
			std::cout << std::endl;
	}
}
char Game::getDirection() const{
	char direction;
	std::cout << "왼쪽(a), 아래(s), 위(w), 오른쪽(d): ";
	std::cin >> direction;

	return direction;
}
void Game::updateMap(const GameObject* h, const GameObject* m, const GameObject* f) {
	for (int i = 0; i < 200; i++)
		map[i] = '-';

	int HumanIndex = h->getY() * 20 + h->getX();
	int MonsterIndex = m->getY() * 20 + m->getX();
	int FoodIndex = f->getY() * 20 + f->getX();

	map[FoodIndex] = f->getShape();
	map[HumanIndex] = h->getShape();
	map[MonsterIndex] = m->getShape();
}
void Game::execute() {
	std::cout << "** Human의 Food 먹기 게임을 시작합니다. **" << std::endl;
	GameObject* hPtr = new Human();
	Human* downHPtr = (Human*)hPtr;
	GameObject* mPtr = new Monster();
	GameObject* fPtr = new Food();

	int turn = 1;

	while (1) {
		updateMap(hPtr, mPtr, fPtr);
		showMap();

		while (1) {
			char direction = getDirection();
			downHPtr->setDirection(direction);
			hPtr->move();
			if (downHPtr->getCanMove())
				break;
		}
		mPtr->move();
		if (turn == 4 || turn == 5)
			fPtr->move();

		if (hPtr->collide(mPtr)) {
			updateMap(hPtr, mPtr, fPtr);
			showMap();
			std::cout << "Eaten By Monster" << std::endl << "Game Over";
			break;
		}
		else if (hPtr->collide(fPtr)) {
			updateMap(hPtr, mPtr, fPtr);
			showMap();
			std::cout << "Success to Eat Food" << std::endl << "Clear!";
			break;
		}
		else if (mPtr->collide(fPtr)) {
			updateMap(hPtr, mPtr, fPtr);
			showMap();
			std::cout << "Monster Eat the Food" << std::endl << "Game Over";
			break;
		}
		++turn;
	}
}

int main() {
	Game g;
	g.execute();
}