#include <iostream>
#include "26_0110_Ram.h"
using namespace std;

Ram::Ram() : mem{ 0 }, size{ 100 * 1024 } {}
/*/Ram::Ram() {
	memset(mem, 0, sizeof(mem)); // cstring include 필요
}
*/
Ram::~Ram() {
	cout << "메모리 제거 됨" << endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}