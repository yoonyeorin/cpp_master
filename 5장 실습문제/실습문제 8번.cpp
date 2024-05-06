#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size) {
		this->size = size;
		p = new int[size];
		tos = 0;
	}
	MyIntStack(const MyIntStack& s);
	~MyIntStack() {
		delete[]p;
		p = NULL;
	}
	bool push(int n);
	bool pop(int& n);
};
MyIntStack::MyIntStack(const MyIntStack& s)
{
	this->size = size;
	this->tos = tos;
	this->p = new int[s.size];
	for (int i = 0; i <= s.tos; i++) {
		this->p[i] = s.p[i];
	}
}
bool MyIntStack::push(int n)
{
	if (tos > size) {
		return false;
	}
	else {
		p[tos++] = n;
		return true;
	}
}
bool MyIntStack::pop(int& n)
{
	if (tos < 0) {
		return false;
	}
	else {
		n = p[--tos];
		return true;
	}
}
int main()
{
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}