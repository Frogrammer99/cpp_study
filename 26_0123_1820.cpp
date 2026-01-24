#include <iostream>

char c = 'a';

char& find() {
	return c;
}

char a = find();
char& ref = find();

int main() {
	ref = 'M';
	find() = 'b';
}