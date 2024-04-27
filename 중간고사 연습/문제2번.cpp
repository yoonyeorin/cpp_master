#include <iostream>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	string getOwner();
	int inquiry();
	void deposit(int money);
	int withdraw(int money);
	Account(string n, int i, int bal);
};

Account::Account(string n, int i, int bal) {
	name = n; id = i; balance = bal;
}
void Account::deposit(int money) {
	balance += money;
}
int Account::withdraw(int money) {
	balance -= money;
	return balance;
}
int Account::inquiry() {
	return balance;
}
string Account::getOwner() {
	return name;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}