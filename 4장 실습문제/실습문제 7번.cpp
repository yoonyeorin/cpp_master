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
	Circle circle[3];
	int size, count = 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> size;
		circle[i].setRadius(size);

		if (circle[i].getArea() > 100)
		{
			count++;
		}
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�.";
}