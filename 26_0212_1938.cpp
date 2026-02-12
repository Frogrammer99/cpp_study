//#include <iostream>
//#include <string>
//
//class Book {
//private:
//	std::string title;
//	int price, pages;
//public:
//	Book(std::string title = "", int price = 0, int pages = 0);
//	void show();
//	std::string getTitle();
//	bool operator! ();
//	friend bool operator< (std::string s, Book& b);
//};
//Book::Book(std::string title, int price, int pages) {
//	this->title = title;
//	this->price = price;
//	this->pages = pages;
//}
//void Book::show() {
//	std::cout << title << " Price: " << price << " Pages: " << pages << std::endl;
//}
//std::string Book::getTitle() {
//	return title;
//}
//bool Book::operator! () {
//	if (this->price == 0)
//		return true;
//	else
//		false;
//}
//bool operator< (std::string s,  Book& b) {
//	return ( s < b.title);
//}
//
////int main() {
////	Book book("벼룩시장", 0, 50);
////	if (!book)
////		std::cout << "FREE!" << std::endl;
////}
//
//int main() {
//	Book a("청춘", 20000, 300);
//	std::string b;
//	std::cout << "책이름을 입력: ";
//	getline(std::cin, b);
//
//	if (b < a)
//		std::cout << a.getTitle() << "이 " << b << "보다 뒤에 존재한다." << std::endl;
//}
////////////////////////////////////////////////////////////////////
//#include <iostream>
//
//class Color {
//private:
//	int red, green, blue;
//public:
//	Color(int r = 0, int green = 0, int blue = 0);
//	void show();
//	bool operator==	(Color& c);
//	Color operator+ (Color& c);
//};
//Color::Color(int r, int green, int blue) {
//	this->red = r;
//	this->green = green;
//	this->blue = blue;
//}
//void Color::show() {
//	std::cout << "Red: " << red << "Green: " << green << "Blue: " << blue << std::endl;
//}
//bool Color::operator== (Color& c) {
//	return (this->red == c.red) && (this->green == c.green) && (this->blue = c.blue);
//}
//Color Color::operator+ (Color& c) {
//	Color tmp;
//	tmp.red = this->red + c.red;
//	tmp.green = this->green + c.green;
//	tmp.blue = this->blue + c.blue;
//
//	return tmp;
//}
//
//int main() {
//	Color red(255, 0, 0), blue(0, 0, 255), c;
//	c = red + blue;
//	c.show();
//
//	Color fuchsia(255, 0, 255);
//	if (c == fuchsia)
//		std::cout << "true" << std::endl;
//	else
//		std::cout << "false" << std::endl;
//}
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

class Matrix {
private:
	int** arr;
	int row, col;
public:
	Matrix(int* arr1, int* arr2, int size1, int size2);
	Matrix(int size1, int size2);
	Matrix();
	~Matrix();
	Matrix(const Matrix& m);
	Matrix operator+(const Matrix& m);
	Matrix& operator=(const Matrix& m);
	void show();
};
Matrix::Matrix(int* arr1, int* arr2, int size1, int size2) {
	this->row = 2;
	if (size1 > size2)
		this->col = size1;
	else
		this->col = size2;


	arr = new int* [row];
	for (int i = 0; i < row; i++)
		arr[i] = new int[this->col];

	for (int j = 0; j < this->col; j++) {
		if (j > size1 - 1) {
			arr[0][j] = 0;
			continue;
		}
		arr[0][j] = arr1[j];
	}
	for (int j = 0; j < this->col; j++) {
		if (j > size2 - 1) {
			arr[1][j] = 0;
			continue;
		}
		arr[1][j] = arr2[j];
	}
}
Matrix::Matrix(int size1, int size2) {
	this->row = 2;
	if (size1 > size2)
		this->col = size1;
	else
		this->col = size2;

	arr = new int* [row];
	for (int i = 0; i < row; i++)
		arr[i] = new int[col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			arr[i][j] = 0;
	}
}
Matrix::Matrix() {
	arr = nullptr;
	row = 0;
	col = 0;
}
Matrix::~Matrix() {
	if (arr != nullptr) {
		for (int i = 0; i < row; i++)
			delete[] arr[i];
		delete[]arr;
	}
}
Matrix::Matrix(const Matrix& m) {
	this->row = m.row;
	this->col = m.col;

	this->arr = new int* [this->row];
	for (int i = 0; i < this->row; i++)
		this->arr[i] = new int[this->col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			this->arr[i][j] = m.arr[i][j];
	}
}
Matrix Matrix::operator+ (const Matrix& m) {
	Matrix tmp(this->col, m.col);
	
	if (this->col > m.col) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < this->col; j++)
				tmp.arr[i][j] = this->arr[i][j];
		}
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < m.col; j++)
				tmp.arr[i][j] += m.arr[i][j];
		}
	}
	else {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < m.col; j++)
				tmp.arr[i][j] = m.arr[i][j];
		}
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < this->col; j++)
				tmp.arr[i][j] += this->arr[i][j];
		}
	}
	return tmp;
}
Matrix& Matrix::operator=(const Matrix& m) {
	if (arr != nullptr) {
		for (int i = 0; i < this->row; i++)
			delete[] this->arr[i];
		delete[]this->arr;
	}

	this->row = m.row;
	this->col = m.col;

	this->arr = new int* [this->row];
	for (int i = 0; i < this->row; i++)
		this->arr[i] = new int[this->col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			this->arr[i][j] = m.arr[i][j];
	}

	return *this;
}
void Matrix::show() {
	for (int i = 0; i < row; i++) {
		std::cout << "Row " << i + 1 << ": ";
		for (int j = 0; j < col; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
}

int main() {
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = { 6, 7, 8, 9, 10 };
	int arr3[] = { 11, 12, 13, 14, 15 };
	int arr4[] = { 16, 17, 18, 19, 20 };

	int arr1_len = sizeof(arr1) / sizeof(int);
	int arr2_len = sizeof(arr2) / sizeof(int);
	int arr3_len = sizeof(arr3) / sizeof(int);
	int arr4_len = sizeof(arr4) / sizeof(int);

	Matrix a(arr1, arr2, arr1_len, arr2_len);
	Matrix b(arr3, arr4, arr3_len, arr4_len);
	Matrix c;
	
	c = a + b;

	a.show();
	b.show();
	c.show();

}