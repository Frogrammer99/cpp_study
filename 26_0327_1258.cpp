////#include <iostream>
////
////class Circle {
////
////};
////
////void test(Circle& c) {
////
////}
////
////void console() {
////	test(c);
////}
//#include <vector>
//#include <iostream>
//
//class Circle {
//private:
//	int radius = 1;
//public:
//	int getRadius() { return radius; }
//};
//
//int main() {
//	std::vector<Circle> cv;
//
//	Circle c;
//
//	cv.push_back(c);
//
//	std::vector<Circle>::iterator it;
//	for (it = cv.begin(); it != cv.end(); ++it) {
//		std::cout << it->getRadius();
//	}
//}
////////////////////////////////////////////////////
#include <vector>
#include <iostream>
class Item {
private:
	int price;
	std::string name;
	int stock;
public:
	Item(int price, std::string name, int stock) { this->price = price; this->name = name; this->stock = stock; }
	int getPrice() const{ return price; }
	std::string getName() const{ return name; }
	int getStock() const{ return stock; }
	void addStock(int count) { stock += count; }
	void subStock(int count) { stock -= count; }
};

class Inventory {
private:
	std::vector<Item> inventory;
public:
	void pushItem(int price, std::string name, int stock);
	std::string getItemName(int index);
	int getItemPrice(int index);
	int getItemStock(int index);
	bool searchItem(std::string itemName, int& index);
	void addStock(int index, int count);
	void subStock(int index, int count);
	bool isEmpty();
	void displayAll(int& max);
	void eraseItem(int index);
};
void Inventory::pushItem(int price, std::string name, int stock) {
	inventory.push_back(Item(price, name, stock));
}
std::string Inventory::getItemName(int index) {
	return inventory[index].getName();
}
int Inventory::getItemPrice(int index) {
	return inventory[index].getPrice();
}
int Inventory::getItemStock(int index) {
	return inventory[index].getStock();
}
bool Inventory::searchItem(std::string itemName, int& index) {
	bool isExist = false;
	
	for (int i = 0; i < inventory.size(); ++i) {
		if (inventory[i].getName() == itemName) {
			isExist = true;
			index = i;
			return isExist;
		}
	}
	return isExist;
}
void Inventory::addStock(int index, int count) {
	inventory[index].addStock(count);
}
void Inventory::subStock(int index, int count) {
	inventory[index].subStock(count);
}
bool Inventory::isEmpty() {
	return inventory.empty();
}
void Inventory::displayAll(int& max) {
	int index = 0;
	std::vector<Item>::iterator it;
	for (it = inventory.begin(); it != inventory.end(); ++it) {
		++index;
		std::cout << index << ": " << it->getName() << "  소지개수: " << it->getStock() << std::endl;
	}
	max = index;
}
void Inventory::eraseItem(int index) {
	std::vector<Item>::iterator it;
	int count = 0;
	for (it = inventory.begin(); it != inventory.end(); ++it) {
		if (count == index) {
			inventory.erase(it);
			break;
		}
		++count;
	}
}
int main() {
	Inventory iv;
	iv.pushItem(200, "지우개", 1);

	std::cout << iv.getItemName(0) << std::endl;
	std::cout << iv.getItemPrice(0) << std::endl;
}