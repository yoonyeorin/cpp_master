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
//	cout << "이름과 전화번호를 입력해 주세요" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "사람 " << i + 1 << ">>";
//		cin >> name >> tel;
//		pArray[i].set(name, tel);
//	}
//
//	cout << "모든 사람의 이름은 ";
//	for (int i = 0; i < 3; i++)
//	{
//		cout << pArray[i].getName() << " ";
//	}
//	cout << endl;
//
//	cout << "전화번호 검색합니다.  이름을 입력하세요>>";
//	cin >> name;
//	//int index = -1;
//	for (int i = 0; i < 3; i++)
//	{
//		if (pArray[i].getName() == name) {
//			cout << "전화번호는 " << pArray[i].gettel();
//			//index = i;
//			break;
//		}
//	}
//	/*if (index == -1) {
//		cout << "존재하지 않는 번호입니다.";
//	}
//	else
//	{
//		cout << "전화번호는 " << pArray[index].gettel();
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

	cout << "이름과 전화번호를 입력해주세요." << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">>";
		cin >> name >> tel;
		pArray[i].set(name, tel);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getName() << " ";
	}
	cout << endl << "전화번호 검색합니다.  이름을 입력하세요>>";
	cin >> name;
	for (int i = 0; i < 3; i++) {
		if (pArray[i].getName() == name) {
			cout << "전화번호는 " << pArray[i].getTel();
			break;
		}
	}
}

