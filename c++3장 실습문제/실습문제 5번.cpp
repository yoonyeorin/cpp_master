//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//class Random {
//public:
//	Random();
//	int next();
//	int nextInRange(int low, int hight);
//};
//Random::Random() {
//	srand((unsigned)time(0)); //������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
//}
//int Random::next() {
//	int n = rand();
//	return n;
//}
//int Random::nextInRange(int low, int hight) {
//	int n = rand() % (hight - low + 1) + low;
//	return n;
//}
//int main() {
//	Random r;
//	cout << "--0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.next();
//		cout << n << ' ';
//	}
//	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10�� --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextInRange(2, 4);
//		cout << n << ' ';
//	}
//	cout << endl;
//}


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int low, int hight);
};
Random::Random() {
	srand((unsigned)time(0));
}
int Random::next() {
	int n = rand();
	return n;
}
int Random::nextInRange(int low, int hight) {
	int n = rand() % (hight - low + 1) + low;
	return n;
}
int main() {
	Random r;
	cout << "-- ���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}