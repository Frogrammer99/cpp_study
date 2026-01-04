#ifndef EXP_H
#define EXP_H
class Exp {
private:
	int base;
	int exp;
	int value = 1;
public:
	Exp();
	Exp(int _base);
	Exp(int _base, int _exp);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};
#endif
