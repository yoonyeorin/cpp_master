#include <iostream>
using namespace std;

class Tower
{
public:
	int myTower;
	int seoulTower;
	Tower();
	Tower(int r);
	int getHeight();
};

Tower::Tower()
{
	myTower = 1;
}

Tower::Tower(int r)
{
	myTower = r;
}
int Tower::getHeight()
{
	return myTower * 1;
}
int main(){
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴�" << myTower.getHeight() << "����" << endl;
	cout << "���̴�" << seoulTower.getHeight() << "����" << endl;
}