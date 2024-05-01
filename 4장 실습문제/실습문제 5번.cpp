#include <iostream>
#include <string>
using namespace std;

int main() {
	srand((unsigned)time(0));
	string str;

	while (true) {
		cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl << ">>";
		getline(cin, str, '\n');
		if (str == "exit") {
			break;
		}

		int n = rand() % str.length();
		char alpha = rand() % 26 + 'a';
		str[n] = alpha;
		cout << str << endl;
	}

	return 0;
}