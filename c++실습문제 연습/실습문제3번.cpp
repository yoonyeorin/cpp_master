//3��
#include <iostream>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account(string n, int i, int b);
	int withdraw(int money); //���
	void deposit(int money); //����
	string getOwner(); //�����
	int inquiry(); //�ܾ�
};
Account::Account(string n, int i, int b)
{
	name = n; id = i; balance = b;
}
int Account::withdraw(int money)
{
	balance -= money;
	return balance;
}
void Account::deposit(int money)
{
	balance += money;
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
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}
