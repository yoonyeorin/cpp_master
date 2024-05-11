#include <iostream>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept);
	~Dept();
	int getSize() { return size; }
	void read();
	bool is0ver60(int index);
};
Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	this->scores = new int[size];
	for (int i = 0; i < this->size; i++) {
		this->scores[i] = dept.scores[i];
	}
}
Dept::~Dept() {
	delete[] scores;
}
void Dept::read() {
	cout << size << "�� ���� �Է�>>";
	for (int i = 0; i < size; i++)
	{
		cin >> scores[i];
	}
}
bool Dept::is0ver60(int index) {
	if (scores[index] > 60) {
		return true;
	}
	else {
		return false;
	}
}
int countPass(Dept dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.is0ver60(i)) {
			count++;
		}
	}
	return count;
}
int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60�� �̻��� " << n << "��";
}