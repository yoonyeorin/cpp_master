#include <iostream>
using namespace std;

class MyIntStack {
	int p[10];
	int tos;
public:
	MyIntStack();
	bool push(int n);
	bool pop(int& n);
};
MyIntStack::MyIntStack() {
	tos = 0;
}

bool MyIntStack::push(int n) {
	if (tos == 10) {
		return false;
	}
	p[tos] = n;
	tos++;
	return true;
}

bool MyIntStack::pop(int& n) {
	if (tos == 0) {
		return false;
	}
	tos--;
	n = p[tos];
	return true;
}

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i))
		{
			cout << i << ' ';
		}
		else
		{
			cout << endl << i + 1 << "��° stack full" << endl;
		}
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) {
			cout << n << ' ';
		}
		else
		{
			cout << endl << i + 1 << " ��° stack empty";
		}
	}
	cout << endl;
}