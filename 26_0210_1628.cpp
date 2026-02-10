#include <iostream>
#include <string>

class Book {
private:
	std::string title;
	int price, pages;
public:
	Book(std::string title = "", int price = 0, int pages = 0);
	void show();
	std::string getTitle();
	bool operator== (int price);
	bool operator== (std::string title);
	bool operator== (Book& b);
};
Book::Book(std::string title, int price, int pages) {
	this->title = title;
	this->price = price;
	this->pages = pages;
}
void Book::show() {
	std::cout << title << " Price: " << price << "¿ø Page: " << pages << std::endl;
}
std::string Book::getTitle() {
	return title;
}
bool Book::operator== (int price) {
	return (this->price == price);
}
bool Book::operator== (std::string title) {
	return (this->title == title);
}
bool Book::operator== (Book& b) {

}