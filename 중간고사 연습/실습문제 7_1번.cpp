#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return radius * radius * 3.14;
	}
};
int main() {
	Circle circle[3];
	int rad, cnt = 0;
	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >>";
		cin >> rad;

		circle[i].setRadius(rad);

		if (circle[i].getArea() > 100) {
			cnt++;
		}
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다.";
}