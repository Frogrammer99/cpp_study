//#include <iostream>
//#include <string>
//
//class Product {
//protected:
//	static inline int id_count;
//	int id;
//	std::string itemExp;
//	std::string producer;
//	int price;
//public:
//	Product(std::string itemExp, std::string producer, int price);
//	static int totalCount();
//	int getID();
//};
//Product::Product(std::string itemExp, std::string producer, int price) {
//	id_count++;
//	this->id = id_count;
//	this->itemExp = itemExp;
//	this->producer = producer;
//	this->price = price;
//}
//int Product::totalCount() {
//	return id_count;
//}
//int Product::getID() {
//	return id;
//}
//
//class Book : public Product {
//protected:
//	int ISBN;
//	std::string author;
//	std::string title;
//public:
//	Book(std::string itemExp, std::string producer, int price, int ISBN, std::string author, std::string title);
//	void getInform();
//};
//Book::Book(std::string itemExp, std::string producer, int price, int ISBN, std::string author, std::string title) : Product(itemExp, producer, price) {
//	this->ISBN = ISBN;
//	this->author = author;
//	this->title = title;
//}
//void Book::getInform() {
//	std::cout << "ID: " << id << std::endl;
//	std::cout << "상품설명: " << itemExp << std::endl;
//	std::cout << "생산자: " << producer << std::endl;
//	std::cout << "가격: " << price << std::endl;
//	std::cout << "ISBN: " << ISBN << std::endl;
//	std::cout << "저자: " << author << std::endl;
//	std::cout << "제목: " << title << std::endl;
//}
//
//class CompactDisc : public Product {
//private:
//	std::string albumTitle;
//	std::string singerName;
//public:
//	CompactDisc(std::string itemExp, std::string producer, int price, std::string albumTitle, std::string singerName);
//	void getInform();
//};
//CompactDisc::CompactDisc(std::string itemExp, std::string producer, int price, std::string albumTitle, std::string singerName) : Product(itemExp, producer, price) {
//	this->albumTitle = albumTitle;
//	this->singerName = singerName;
//}
//void CompactDisc::getInform() {
//	std::cout << "ID: " << id << std::endl;
//	std::cout << "상품설명: " << itemExp << std::endl;
//	std::cout << "생산자: " << producer << std::endl;
//	std::cout << "가격: " << price << std::endl;
//	std::cout << "앨범이름: " << albumTitle << std::endl;
//	std::cout << "가수이름: " << singerName << std::endl;
//}
//
//class ConversationBook : public Book {
//private:
//	std::string lang;
//public:
//	ConversationBook(std::string itemExp, std::string producer, int price, int ISBN, std::string author, std::string title, std::string lang);
//	void getInform();
//};
//ConversationBook::ConversationBook(std::string itemExp, std::string producer, int price, int ISBN, std::string author, std::string title, std::string lang) : Book(itemExp, producer, price, ISBN, author, title) {
//	this->lang = lang;
//}
//void ConversationBook::getInform() {
//	std::cout << "ID: " << id << std::endl;
//	std::cout << "상품설명: " << itemExp << std::endl;
//	std::cout << "생산자: " << producer << std::endl;
//	std::cout << "가격: " << price << std::endl;
//	std::cout << "ISBN: " << ISBN << std::endl;
//	std::cout << "저자: " << author << std::endl;
//	std::cout << "제목: " << title << std::endl;
//	std::cout << "언어: " << lang << std::endl;
//}
//
//class Management {
//private:
//	Book* Bptr[100];
//	ConversationBook* CBptr[100];
//	CompactDisc* CDptr[100];
//public:
//	void execute();
//};
//void Management::execute() {
//	int select;
//	std::string itemExp, producer, author, title, lang, albumTitle, singerName;
//	int price, ISBN, Bindex = 0, CBindex = 0, CDindex = 0;
//	std::cout << "****상품 관리 프로그램을 작동합니다****" << std::endl;
//	while (1) {
//		std::cout << "상품추가(1), 모든 상품 조회(2), 끝내기(3) : ";
//		std::cin >> select;
//		if (select == 3) {
//			std::cout << "종료합니다." << std::endl;
//			return;
//		}
//		else if (select == 1) {
//			std::cout << "상품 종류 책(1), 음악CD(2), 회화책(3) : ";
//			std::cin >> select;
//			if (select == 1) {
//				std::cin.ignore();
//				std::cout << "상품설명: ";
//				getline(std::cin, itemExp, '\n');
//				std::cout << "생산자: ";
//				getline(std::cin, producer, '\n');
//				std::cout << "가격: ";
//				std::cin >> price;
//				std::cout << "ISBN: ";
//				std::cin >> ISBN;
//				std::cout << "작가: ";
//				std::cin.ignore();
//				getline(std::cin, author, '\n');
//				std::cout << "제목: ";
//				getline(std::cin, title, '\n');
//				Bptr[Bindex] = new Book(itemExp, producer, price, ISBN, author, title);
//				Bindex++;
//			}
//			else if (select == 2) {
//				std::cin.ignore();
//				std::cout << "상품설명: ";
//				getline(std::cin, itemExp, '\n');
//				std::cout << "생산자: ";
//				getline(std::cin, producer, '\n');
//				std::cout << "가격: ";
//				std::cin >> price;
//				std::cin.ignore();
//				std::cout << "앨범제목: ";
//				getline(std::cin, albumTitle, '\n');
//				std::cout << "가수: ";
//				getline(std::cin, singerName, '\n');
//
//				CDptr[CDindex] = new CompactDisc(itemExp, producer, price, albumTitle, singerName);
//				CDindex++;
//			}
//			else if (select == 3) {
//				std::cin.ignore();
//				std::cout << "상품설명: ";
//				getline(std::cin, itemExp, '\n');
//				std::cout << "생산자: ";
//				getline(std::cin, producer, '\n');
//				std::cout << "가격: ";
//				std::cin >> price;
//				std::cout << "ISBN: ";
//				std::cin >> ISBN;
//				std::cin.ignore();
//				std::cout << "작가: ";
//				getline(std::cin, author, '\n');
//				std::cout << "제목: ";
//				getline(std::cin, title, '\n');
//				std::cout << "언어: ";
//				std::cin >> lang;
//
//				CBptr[CBindex] = new ConversationBook(itemExp, producer, price, ISBN, author, title, lang);
//				CBindex++;
//			}
//		}
//		else if (select == 2) {
//			int max = Product::totalCount();
//			bool check = false;
//			
//			for (int i = 0; i < max; i++) {
//				for (int j = 0; j < Bindex; j++) {
//					if (Bptr[j]->getID() == i + 1) {
//						Bptr[j]->getInform();
//						check = true;
//						break;
//					}
//				}
//				if (check == true) {
//					check = false;
//					continue;
//				}
//
//				for (int k = 0; k < CBindex; k++) {
//					if (CBptr[k]->getID() == i + 1) {
//						CBptr[k]->getInform();
//						check = true;
//						break;
//					}
//				}
//				if (check == true) {
//					check = false;
//					continue;
//				}
//
//				for (int l = 0; l < CDindex; l++) {
//					if (CDptr[l]->getID() == i + 1) {
//						CDptr[l]->getInform();
//						check = true;
//						break;
//					}
//				}
//				if (check == true) {
//					check = false;
//					continue;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	Management a;
//	a.execute();
//}
///////////////////////////////////////////////////////////////////
//class A {
//public:
//	int x;
//};
//class B : public A {
//public:
//	int y;
//};
//
//int main() {
//	A a, * p;
//	B b, * q;
//
//	p = &a;
//	q = (B*)p;
//	q->y = 100;
//}
///////////////////////////////
//#include <iostream>
//
//class TV {
//public:
//	int screenSize;
//};
//class ColorTV : public TV {
//public:
//	int color;
//};
//class InternetTV : public TV {
//public:
//	std::string ipAddr;
//};
////////////////////////////////////////////////////////////
//#include <iostream>
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle(int radius = 0);
//	int getRadius();
//	void setRadius(int radius);
//	double getArea();
//};
//Circle::Circle(int radius) {
//	this->radius = radius;
//}
//int Circle::getRadius() {
//	return radius;
//}
//void Circle::setRadius(int radius) {
//	this->radius = radius;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//class NamedCircle : public Circle {
//private:
//	std::string name;
//public:
//	NamedCircle(int radius, std::string name);
//	void show();
//};
//NamedCircle::NamedCircle(int radius, std::string name) : Circle(radius) {
//	this->name = name;
//}
//void NamedCircle::show() {
//	std::cout << "반지름이 " << getRadius() << "인 " << name << std::endl;
//}
//
//int main() {
//	NamedCircle waffle(3, "waffle");
//	waffle.show();
//}
//////////////////////////////////////////////////
#include <iostream>

class Circle {
private:
	int radius;
public:
	Circle(int radius = 0);
	int getRadius();
	void setRadius(int radius);
	double getArea();
};
Circle::Circle(int radius) {
	this->radius = radius;
}
int Circle::getRadius() {
	return radius;
}
void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

class NamedCircle : public Circle {
private:
	std::string name;
public:
	NamedCircle(int radius, std::string name);
	int maxShow(int num, NamedCircle* arr);
};
NamedCircle::NamedCircle(int radius, std::string name) : Circle(radius) {
	this->name = name;
}

int NamedCircle::maxShow(int num, NamedCircle* arr) {
	int max = arr[0].getRadius();

	if (num == 1)
		return max;
	else
		for (int i = 1; i < num; i++) {
			if (max < arr[i].getRadius())
				max = arr[i].getRadius();
		}
	return max;
}

int main() {
	int num, radius;
	std::string name;
	std::cout << "개수: " << num << std::endl;
	std::cin >> num;

	NamedCircle* ptr = new NamedCircle[num];
	std::cout << num << "개의 정수 반지름과 이름을 입력!" << std::endl;

	for (int i = 0; i < num; i++) {
		std::cout << i << ": ";
		std::cin >> radius >> name;
		ptr[i] = new NamedCircle(radius, name);
	}
}
