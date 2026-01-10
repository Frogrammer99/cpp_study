#include <iostream>
#include "26_0110_cal.h"	
using namespace std;

int main() {
	int n1, n2;
	char Oper;

	Add a;
	Sub s;
	Mul m;
	Div d;

	while (1) {
		cout << "두 정수와 연산자를 입력하세요" << endl;
		cin >> n1 >> n2 >> Oper;
		
		if (Oper == '+') {
			a.setValue(n1, n2);
			cout << a.calculate() << endl;
		}
		else if (Oper == '-') {
			s.setValue(n1, n2);
			cout << s.calculate() << endl;
		}
		else if (Oper == '*') {
			m.setValue(n1, n2);
			cout << m.calculate() << endl;
		}
		else if (Oper == '/') {
			d.setValue(n1, n2);
			cout << d.calculate() << endl;
		}
		else if (Oper == 'q')
			break;
	}
}