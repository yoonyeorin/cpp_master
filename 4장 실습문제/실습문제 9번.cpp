//#include <iostream>
//using namespace std;
//
//class Person {
//	string name;
//	string tel;
//public:
//	Person() { ; };
//	string getName() {
//		return name;
//	}
//	string gettel() {
//		return tel;
//	}
//	void set(string name, string tel);
//};
//void Person::set(string name, string tel) {
//	this->name = name;
//	this->tel = tel;
//}
//int main() {
//	Person pArray[3];
//	string name, tel;
//
//	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "��� " << i + 1 << ">>";
//		cin >> name >> tel;
//		pArray[i].set(name, tel);
//	}
//
//	cout << "��� ����� �̸��� ";
//	for (int i = 0; i < 3; i++)
//	{
//		cout << pArray[i].getName() << " ";
//	}
//	cout << endl;
//
//	cout << "��ȭ��ȣ �˻��մϴ�.  �̸��� �Է��ϼ���>>";
//	cin >> name;
//	//int index = -1;
//	for (int i = 0; i < 3; i++)
//	{
//		if (pArray[i].getName() == name) {
//			cout << "��ȭ��ȣ�� " << pArray[i].gettel();
//			//index = i;
//			break;
//		}
//	}
//	/*if (index == -1) {
//		cout << "�������� �ʴ� ��ȣ�Դϴ�.";
//	}
//	else
//	{
//		cout << "��ȭ��ȣ�� " << pArray[index].gettel();
//	}*/
//}

#include <iostream>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() { ; }
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};
void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}
int main() {
	Person pArray[3];
	string name;
	string tel;

	cout << "�̸��� ��ȭ��ȣ�� �Է����ּ���." << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">>";
		cin >> name >> tel;
		pArray[i].set(name, tel);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getName() << " ";
	}
	cout << endl << "��ȭ��ȣ �˻��մϴ�.  �̸��� �Է��ϼ���>>";
	cin >> name;
	for (int i = 0; i < 3; i++) {
		if (pArray[i].getName() == name) {
			cout << "��ȭ��ȣ�� " << pArray[i].getTel();
			break;
		}
	}
}

