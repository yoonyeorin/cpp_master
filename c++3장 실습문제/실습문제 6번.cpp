#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int low, int hight);
};
EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}
int EvenRandom::next() {
	int n;
	while (true) {
		n = rand();
		if (n % 2 == 0) {
			break;
		}
	}
	return n;
}
int EvenRandom::nextInRange(int low, int hight) {
	int n;
	while (true) {
		n = rand() % (hight - low + 1) + low;
		if (n % 2 == 0)
			break;
	}
	return n;

}
int main() {
	EvenRandom r;
	cout << "--���� " << RAND_MAX << "������ ���� ¦�� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2���� " << "10������ ���� ¦�� ���� 10�� -- " << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}