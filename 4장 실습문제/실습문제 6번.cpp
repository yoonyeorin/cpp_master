//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)\n";
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
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)\n";
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