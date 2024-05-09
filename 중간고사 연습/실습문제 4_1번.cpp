#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample() {
		delete[]p;
	}
};
void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}
int Sample::big() {
	int max = *p;

	for (int i = 0; i < size; i++) {
		if (max < p[i]) {
			max = p[i];
		}
	}
	return max;
}
int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
}