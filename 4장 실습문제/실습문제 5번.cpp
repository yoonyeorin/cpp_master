#include <iostream>
#include <string>
using namespace std;

int main() {
	srand((unsigned)time(0));
	string str;

	while (true) {
		cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl << ">>";
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