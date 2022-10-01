#include <iostream>
using namespace std;
bool test(int x)
{
    if ((x % 2) == 0)
    {
        cout << "Even number" << endl;
        return true;
    }
    else
    {
        cout << "Odd number" << endl;
        return false;
    }
}
int main()
{
    int x;
    cin >> x;
    test(x);
}
