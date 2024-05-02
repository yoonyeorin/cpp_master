#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}
int main() {
	int n;
	int size, count = 0;

	cout << "원의 개수 >> ";
	cin >> n;

	Circle* circle = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> size;
		circle[i].setRadius(size);

		if (circle[i].getArea() > 100) {
			count++;
		}
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다.";
	delete[] circle;

	return 0;
}