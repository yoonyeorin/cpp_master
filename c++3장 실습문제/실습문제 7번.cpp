#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
public:
	SelectableRandom();
	int next();
	int nextInRange(int low, int hight);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(0));
}
int SelectableRandom::next() {
	int n;
	while (true) {
		n = rand();
		if (n % 2 == 0)
		{
			break;
		}
	}
	return n;
}
int SelectableRandom::nextInRange(int low, int hight) {
	int n;
	while (true) {
		n = rand() % (hight - low + 1) + low;
		if (n % 2 == 1) {
			break;
		}
	}
	return n;
}
int main() {
	SelectableRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2���� " << "9������ ���� Ȧ�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}