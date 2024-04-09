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

	if (bigger(num1, num2, max)) //형식맞춤?
	{
		return 0;
	}
	else
	{
		cout << "더 큰 수는 " << max << '\n';
	}
	
}