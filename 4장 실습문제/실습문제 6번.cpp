//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)\n";
//	string str;
//	while (true) {
//		cout << ">>";
//		getline(cin, str, '\n');
//		if (str == "exit") {
//			break;
//		}
//		for (int i = str.length(); i >= 0; i--)
//		{
//			cout << str[i];
//		}
//		cout << endl;
//	}
//}

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)\n";
	string str;
	while (true) {
		cout << ">>";
		getline(cin, str, '\n');
		if (str == "exit") {
			break;
		}
		for (int i = str.length(); i >= 0; i--) {
			cout << str[i];
		}
		cout << endl;
	}
}