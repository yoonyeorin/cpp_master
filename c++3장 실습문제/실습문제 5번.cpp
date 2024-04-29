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
//	srand((unsigned)time(0)); //시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
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
//	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.next();
//		cout << n << ' ';
//	}
//	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10개 --" << endl;
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
	cout << "-- 에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}