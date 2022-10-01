/*
CH-230-A
Problem9-7.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;
void swapping(int &a, int &b) // using & to gets its referenece
{
    int temp = a;
    a = b;
    b = temp;
}
void swapping(float &x, float &y) // using & to gets its referenece
{
    float temp = x;
    x = y;
    y = temp;
}
void swapping(const char *&str1, const char *&str2)
// since *str1 and *str2 are pointers to a word
// need to add * before &
{
    const char *temp = str1;
    str1 = str2;
    str2 = temp;
}
int main(void)
{
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "Before swapping:" << endl;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "After swapping:" << endl;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}