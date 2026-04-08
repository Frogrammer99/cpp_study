#include <iostream>
#include <string>

int main() {
	std::string ISBN;
	
	getline(std::cin, ISBN, '\n');

	int sum = 0;
	int target;
	int coef;
	int turn = 0;
	
	for (int i = 0; i < ISBN.length(); ++i) {
		if (isdigit(ISBN[i])) {
			turn = i % 2;

			switch (turn) {
			case 0:
				sum += (ISBN[i] - '0');
				break;
			case 1:
				sum += (ISBN[i] - '0') * 3;
				break;
			}
		}
		else {
			turn = i % 2;

			switch (turn) {
			case 0:
				coef = 1;
				break;
			case 1:
				coef = 3;
				break;
			}
		}
	}

	int temp;

	for (int i = 0; i < 10; i++) {
		temp = (sum + coef * i) % 10;
		if (temp == 0) {
			target = i;
			break;
		}
	}

	std::cout << target;
}