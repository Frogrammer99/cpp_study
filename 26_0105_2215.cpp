#include <iostream>
using namespace std;

class Heavy {
public:
	Heavy();
	Heavy(const Heavy& h);
};

Heavy::Heavy() {
	cout << "생성!" << endl;
}
Heavy::Heavy(const Heavy& h) {
	cout << "으악! 복사된다!" << endl;
}

Heavy Makeobject() {
	Heavy temp;
	return temp;
}

int main() {
	cout << "-------시작 ------------" << endl;
	Heavy h = Makeobject();
	Heavy a = h;
	cout << "---- END -----" << endl;
}