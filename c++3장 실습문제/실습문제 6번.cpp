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
	cout << "--에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 " << "10까지의 랜덤 짝수 정수 10개 -- " << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}