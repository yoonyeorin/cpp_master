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
	cout << "높이는" << myTower.getHeight() << "미터" << endl;
	cout << "높이는" << seoulTower.getHeight() << "미터" << endl;
}