#include "26_0104_Exp.h"

Exp::Exp() : Exp(1) { }
Exp::Exp(int _base) : Exp(_base, 1) { }
Exp::Exp(int _base, int _exp) {
	base = _base;
	exp = _exp;
}
int Exp::getBase() {
	return base;
}
int Exp::getExp() {
	return exp;
}
int Exp::getValue() {
	for (int i = 0; i < exp; i++) {
		value *= base;
	}
	return value;
}
bool Exp::equals(Exp b) {
	if (value == b.value)
		return 1;
	else
		return 0;
}