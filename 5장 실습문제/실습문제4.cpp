#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big){
	if (a == b)
	{
		return true;
	}
	else
	{
		if (a > b)
		{
			big = a;
			return false;
		}
		else
		{
			big = b;
			return false;
		}
	}
}

int main(){
	int num1, num2, max = 0;
	cin >> num1 >> num2;

	if (bigger(num1, num2, max)) //���ĸ���?
	{
		return 0;
	}
	else
	{
		cout << "�� ū ���� " << max << '\n';
	}
	
}