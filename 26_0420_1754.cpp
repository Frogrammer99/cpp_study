#include <iostream>
#include <vector>

int main() {
	std::vector<std::vector<int>> array2D;

	std::vector<int> element1{ 1, 2, 3, 4, 5 };
	std::vector<int> element2{ 1, 2, 3, 4 };

	int num;
	num = array2D.size();
	std::cout << num << std::endl;

	array2D.push_back(element1);
	num = array2D.size();
	std::cout << num << std::endl;

	array2D.push_back(element2);
	num = array2D.size();
	std::cout << num << std::endl;

	std::cout << array2D[0][1] << std::endl;
}