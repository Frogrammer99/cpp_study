#include <iostream>
using namespace std;

class Account {
private:
	string name;
	int id, amount;
public:
	Account(string n, int i, int a);
	void deposit(int m);
	void withdraw(int m);
	string getOwner();
	int inquiry();
};

Account::Account(string name, int id, int amount) {
	name = name;
	id = id;
	amount = amount;
}
void Account::deposit(int m) {
	amount += m;
}

void Account::withdraw(int m) {
	amount -= m;
}

string Account::getOwner() {
	return name;
}

int Account::inquiry() {
	return amount;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << ": " << a.inquiry() << endl;
	a.withdraw(20000);
	cout << a.getOwner() << ": " << a.inquiry() << endl;
}