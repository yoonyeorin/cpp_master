#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n]; //n개 정수 배열의 동적 생성
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
//} 이렇게도 가능
void Sample::read() {
	cout << "정수 10개를 입력하세요>>";
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
	int max = *p; // 배열의 첫 번째 원소를 max 변수에 저장
	for (int i = 1; i < size; i++) //두번째 원소부터 마지막 원소까지 반복 첫번째 원소는 max변수에 저장
	{
		if (max < *(p + i)) //현재까지의 최댓값인 max와 배열의 i번째 원소를 비교
		{
			max = *(p + i);
		}
	}
	return max;
}

int main() {
	Sample s(10); //10개 정수 배열을 가진 Sample 객체 생성
	s.read(); //키보드에서 정수 배열 읽기
	s.write(); //정수 배열 출력
	cout << "가장 큰 수는 " << s.big() << endl;
}