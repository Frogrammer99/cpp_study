#include <iostream>
using namespace std;

int main() {
	int* pM = new int;
	if (!pM) {
		return -1;
	}

	int* pInt = new int(20);
	char* pChar = new char('a');

	*pM = 5;
	int n = *pM;
	delete pM;
}
