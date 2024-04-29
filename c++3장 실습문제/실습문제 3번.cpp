#include <iostream>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account(string n, int i, int bal);
	void deposit(int money);
	int withdraw(int money);
	string getOwner();
	int inquiry();
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
string Account::getOwner() {
	return name;
}
int Account::inquiry() {
	return balance;
}
int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}