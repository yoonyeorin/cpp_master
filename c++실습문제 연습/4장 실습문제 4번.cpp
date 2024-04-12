#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n]; //n�� ���� �迭�� ���� ����
	}
	void read();
	void write();
	int big();
	~Sample() {
		delete[] p;
	}
};
//Sample::~Sample() {
//	delete[] p;
//} �̷��Ե� ����
void Sample::read() {
	cout << "���� 10���� �Է��ϼ���>>";
	for (int i = 0; i < size; i++)
	{
		cin >> *(p + i);
	}
}
void Sample::write() {
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << ' ';
	}
	cout << '\n';
}
int Sample::big() {
	int max = *p; // �迭�� ù ��° ���Ҹ� max ������ ����
	for (int i = 1; i < size; i++) //�ι�° ���Һ��� ������ ���ұ��� �ݺ� ù��° ���Ҵ� max������ ����
	{
		if (max < *(p + i)) //��������� �ִ��� max�� �迭�� i��° ���Ҹ� ��
		{
			max = *(p + i);
		}
	}
	return max;
}

int main() {
	Sample s(10); //10�� ���� �迭�� ���� Sample ��ü ����
	s.read(); //Ű���忡�� ���� �迭 �б�
	s.write(); //���� �迭 ���
	cout << "���� ū ���� " << s.big() << endl;
}