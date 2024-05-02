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

	cout << "���� ���� >> ";
	cin >> n;

	Circle* circle = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> size;
		circle[i].setRadius(size);

		if (circle[i].getArea() > 100) {
			count++;
		}
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�.";
	delete[] circle;

	return 0;
}