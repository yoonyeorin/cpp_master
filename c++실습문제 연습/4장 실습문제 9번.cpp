#include <iostream>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() {
		return name;
	}
	string getTel() {
		return tel;
	}
	void set(string name, string tel);
};
Person::Person() {

}

void Person::set(string name, string tel)
{
	this->name = name;
	this->tel = tel;
}
int main() {
	Person p[3];
	string name;
	string tel;

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "��� " << i + 1 << ">> ";
		cin >> name >> tel;
		p[i].set(name, tel);
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++)
	{
		cout << p[i].getName() << ' ';
	}
	cout << '\n';

	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> name;

	int index = -1;
	for (int i = 0; i < 3; i++)
	{
		if (p[i].getName() == name)
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		cout << "�������� �ʴ� �����Դϴ�.\n";
	}
	else
	{
		cout << "��ȭ��ȣ�� " << p[index].getTel() << '\n';
	}
}