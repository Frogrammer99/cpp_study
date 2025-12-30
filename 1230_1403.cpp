//#include <iostream>
//using namespace std;
//
//class Player {
//private:
//	int hp;
//public:
//	Player(); 
//	void setHP(int value);
//	int getHP();
//};
//
//Player::Player() {
//	hp = 0;
//}
//
//void Player::setHP(int value) {
//	if (value < 0)
//		hp = 0;
//	else {
//		hp = value;
//	}
//}
//
//int Player::getHP() {
//	return hp;
//}
//
//int main() {
//	Player p1;
//	int HP = p1.getHP();
//	cout << HP << endl;;
//	p1.setHP(100);
//	HP = p1.getHP();
//	cout << HP;
//
//}
////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Player {
//private:
//	int money;
//	friend class Theif;
//public:
//	Player();
//	Player(int m);
//	int getMoney();
//};
//Player::Player() : Player(1000){}
//Player::Player(int m) {
//	money = m;
//}
//int Player::getMoney() {
//	return money;
//}
//class Theif {
//public:
//	void steal(Player& p) {
//		p.money = 0;
//	}
//};
//
//int main() {
//	Player p1;
//	Player p2(20000);
//
//	int p1_m = p1.getMoney();
//	int p2_m = p2.getMoney();
//
//	cout << p1_m << " " << p2_m << endl;
//
//	Theif t1;
//	t1.steal(p1);
//
//	p1_m = p1.getMoney();
//
//	cout << p1_m << "   " << p2_m << endl;
//}
/////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

class Player {
private:
	int hp;
public:
	Player();
	Player(int v);
	int& setHP();
	int getHP();
};
Player::Player() : Player(100){}
Player::Player(int v) {
	hp = v;
}
int& Player::setHP() {
	return hp;
}
int Player::getHP() {
	return hp;
}

int main() {
	Player p1;
	Player p2(200);
	cout << p1.getHP() << "  " << p2.getHP() << endl;
	p1.setHP() = 2000;
	p2.setHP() = 20000;
	cout << p1.getHP() << "  " << p2.getHP() << endl;
}