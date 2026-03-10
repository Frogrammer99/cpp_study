#include <iostream>

class Editor {
private:
	Editor* nextPtr = nullptr;
public:
	virtual ~Editor();
	Editor* insert(Editor* gPtr);
	virtual void show() = 0;
	void deleteGraphic();
	Editor* nextGraphic();
};
Editor::~Editor() {
	std::cout << "간다 간다 뿅간다." << std::endl;
}
Editor* Editor::insert(Editor* gPtr) {
	nextPtr = gPtr;
	return nextPtr;
}
void Editor::deleteGraphic() {
	delete nextPtr;
}
Editor* Editor::nextGraphic() {
	return nextPtr;
}

class Line : public Editor {
public:
	virtual void show() override;
};
void Line::show() {
	std::cout << "LINE" << std::endl;
}

class Rect : public Editor {
public:
	virtual void show() override;
};
void Rect::show() {
	std::cout << "RECT" << std::endl;
}

class Circle : public Editor {
public:
	virtual void show() override;
};
void Circle::show() {
	std::cout << "CIRCLE" << std::endl;
}

class Console {
public:
	void execute();
};
void Console::execute() {
	int select;
	int index = 0;
	bool run = true;
	Editor* startP = nullptr;
	Editor* lastP = nullptr;
	Editor* p = nullptr;
	Editor* temp = nullptr;

	std::cout << "그래픽 에디터입니다." << std::endl;

	while (run) {
		std::cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 ==> ";
		std::cin >> select;

		switch (select) {
		case 4:
			run = false;
			p = startP;
			while (p != nullptr) {
				temp = p->nextGraphic();
				delete p;
				p = temp;
			}
			break;
		case 1:
			std::cout << "선:1, 원:2, 사각형:3 ==> ";
			std::cin >> select;

			switch (select) {
			case 1:
				if (startP == nullptr) {
					startP = new Line();
					lastP = startP;
					break;
				}
				lastP = lastP->insert(new Line());
				break;
			case 2:
				if (startP == nullptr) {
					startP = new Circle();
					lastP = startP;
					break;
				}
				lastP = lastP->insert(new Circle());
				break;
			case 3:
				if (startP == nullptr) {
					startP = new Rect();
					lastP = startP;
					break;
				}
				lastP = lastP->insert(new Rect());
				break;
			}
			break;
		case 3:
			p = startP;
			index = 0;
			while (p != nullptr) {
				std::cout << index << ": ";
				p->show();
				p = p->nextGraphic();
				++index;
			}
			break;
		case 2:
			std::cout << "삭제하고자 하는 도형의 인덱스: ";
			std::cin >> select;
			if (select == 0) {
				temp = startP->nextGraphic();
				delete startP;
				startP = temp;
				break;
			}
			p = startP;
			index = 1;
			while (index != select) {
				p = p->nextGraphic();
				++index;
			}
			temp = p->nextGraphic();
			temp = temp->nextGraphic();
			p->deleteGraphic();
			p->insert(temp);
			break;
		}
	}
}

int main() {
	Console c;
	c.execute();
}