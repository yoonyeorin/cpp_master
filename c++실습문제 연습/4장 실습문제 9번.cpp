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

	cout << "이름과 전화 번호를 입력해 주세요\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "사람 " << i + 1 << ">> ";
		cin >> name >> tel;
		p[i].set(name, tel);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++)
	{
		cout << p[i].getName() << ' ';
	}
	cout << '\n';

	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
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
		cout << "존재하지 않는 정보입니다.\n";
	}
	else
	{
		cout << "전화번호는 " << p[index].getTel() << '\n';
	}
}