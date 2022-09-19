#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int y = 6;
    int &b = x;
    int &a = y;

    cout << x+y << endl;
    b+=5;
    cout << b+a << endl;
}