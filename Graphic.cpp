#include "Graphic.h"
#include "Line_t.h"
#include "Circle_t.h"
#include "Rect_t.h"
void Graphic::insertShape() {
	int select;
	std::cout << "선: 1, 원: 2, 사각형: 3 ==> ";
	std::cin >> select;

	Shape* sPtr = nullptr;
	switch (select) {
	case 1: 
		sPtr = new Line();
		sV.push_back(sPtr);
		break;
	case 2: 
		sPtr = new Circle();
		sV.push_back(sPtr);
		break;
	case 3: 
		sPtr = new Rect();
		sV.push_back(sPtr);
		break;
	}
}
void Graphic::deleteShape() {
	int select;
	int count = 0;
	std::cout << "삭제하고자 하는 도형의 인덱스: ";
	std::cin >> select;

	std::vector<Shape*>::iterator it;
	for (it = sV.begin(); it != sV.end();) {
		if (select == count) {
			delete* it;
			it = sV.erase(it);
			++count;;
		}
		else {
			++it;
			++count;
		}
	}
}
void Graphic::printAll() {
	int index = 0;
	std::vector<Shape*>::iterator it;

	for (it = sV.begin(); it != sV.end(); ++it) {
		std::cout << index << ": ";
		(*it)->paint();
		++index;
	}
}
void Graphic::run() {
	int select;
	bool run = true;
	std::cout << "그래픽 에디터" << std::endl;

	while (run) {
		std::cout << "삽입: 1, 삭제: 2, 모두보기: 3, 종료: 4 ==> ";
		std::cin >> select;

		switch (select) {
		case 1:
			insertShape();
			break;
		case 2:
			deleteShape();
			break;
		case 3:
			printAll();
			break;
		case 4:
			run = false;
			break;
		}
	}
}