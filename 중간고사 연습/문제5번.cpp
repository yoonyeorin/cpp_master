#include <iostream>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() { ; }
	string getName() {
		return name;
	}
	string getTel() {
		return tel;
	}
	void set(string name, string tel);
};
void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}
int main() {
	Person personArray[3];
	string name, tel;

	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���." << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">>";
		cin >> name >> tel;
		personArray[i].set(name, tel);
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << personArray[i].getName() << " ";
	}
	cout << endl;
	cout << "��ȭ��ȣ �˻��մϴ�.  �̸��� �Է��ϼ���>>";
	cin >> name;
	int index = -1;
	for (int i = 0; i < 3; i++)
	{
		if (personArray[i].getName() == name) {
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		cout << "�������� �ʴ� ��ȣ�Դϴ�." << endl;
	}
	else
	{
		cout << "��ȭ��ȣ�� " << personArray[index].getTel() << endl;
	}
}