#include <iostream>
using namespace std;

class Circle
{

};

void swap(Circle& c1, Circle& c2)
{
	Circle temp = c1;
	c1 = c2;
	c2 = temp;
}
int main(){
	Circle a, b;
	swap(a, b);
}