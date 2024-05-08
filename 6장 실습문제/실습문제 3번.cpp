#include<iostream>
using namespace std;

int big(int x, int y)
{
    int max = 100;
    int bigger = x;
    if (x < y)
        bigger = y;
    if (bigger > max)
        return max;
    else if (bigger < max)
        return bigger;
}

int big(int x, int y, int z)
{
    int max = z;
    int bigger = x;
    if (x < y)
        bigger = y;
    if (bigger > max)
        return max;
    else if (bigger < max)
        return bigger;
}

int main()
{
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;
}