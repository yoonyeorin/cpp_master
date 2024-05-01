#include <iostream>
using namespace std;

int main() {
	int* arr = new int[5];
	int total = 0;
	double avg = 0;

	cout << "정수 5개 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	avg = (double)total / 5;

	cout << "평균 " << avg;
}