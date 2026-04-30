#include <vector>
#include <iostream>

int main() {

	auto gcd = [](int a, int b) {
		int remain = 1;
		while (remain != 0) {
			remain = a % b;
			a = b;
			b = remain;
		}
		return a;
	};

	auto lcm = [&gcd](int a, int b) {
		return (a * b) / gcd(a, b);
	};

	int value = lcm(15, 21);

	std::cout << value << std::endl;
}