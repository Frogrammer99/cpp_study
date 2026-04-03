#include <iostream>
#include <string>

void hanoiTower(int num, int* fromArr, int* byArr, int* toArr, char from, char by, char to, int size) {
	if (num == 1) {
		//std::cout << "원반 " << num << "을 " << from << "에서 " << to << "로 옮김" << std::endl;
		for (int i = 0; i < 100; ++i) {
			if (toArr[i] == 0) {
				toArr[i] = fromArr[0];
				fromArr[0] = 0;
				break;
			}
		}
		std::cout << from << ": ";
		for (int i = 0; i < size; ++i) {
			std::cout << fromArr[i] << " ";
		}
		std::cout << std::endl;

		std::cout << by << ": ";
		for (int i = 0; i < size; ++i) {
			std::cout << byArr[i] << " ";
		}
		std::cout << std::endl;

		std::cout << to << ": ";
		for (int i = 0; i < size; ++i) {
			std::cout << toArr[i] << " ";
		}
		std::cout << std::endl << std::endl;
	}
	else {
		hanoiTower(num - 1, fromArr, toArr, byArr, from, to, by, 3);
		//std::cout << "원반" << num << "을 " << from << "에서 " << to << "로 옮김" << std::endl;

		hanoiTower(num - 1, byArr, fromArr, toArr, by, from, to, 3);
	}
}

int main() {
	int A[100] = { 3, 2, 1, 0, }, B[100] = { 0, }, C[100] = { 0, };
	hanoiTower(3, A, B, C, 'A', 'B', 'C', 3);
}