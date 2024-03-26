#include <iostream>
using namespace std;

class CoffeeMachine
{
public:
	int coffee;
	int water;
	int sugar;
	CoffeeMachine(int c, int w, int s);
	int drinkEspresso();
	void show();
	int drinkSugarCoffee();
	int drinkAmericano();
	int fill();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s)
{
	coffee = c; water = w; sugar = s;
}

int CoffeeMachine::drinkEspresso()
{
	coffee--; water--;
	return coffee, water;
}
int CoffeeMachine::drinkAmericano()
{
	coffee--; water -= 2;
	return coffee, water;
}
int CoffeeMachine::drinkSugarCoffee()
{
	coffee--; sugar--; water -= 2;
	return coffee, sugar, water;
}
int CoffeeMachine::fill()
{
	coffee = 10; water = 10; sugar = 10;
	return coffee, water, sugar;
}
void CoffeeMachine::show()
{
	cout << "커피 머신 상태, 커피:" << coffee << "  물:" << water << "  설탕:" << sugar << '\n';
}
int main(){
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show(); 
	java.fill();
	java.show();
}