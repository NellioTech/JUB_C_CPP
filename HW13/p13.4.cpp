/*
CH-230-A
Problem13-4.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void setX(int i) { x = i; }
    void print() { cout << x; }
};

class B : virtual public A
/* preventing multiple instances of a given class
** appearing when using multiple inheritances */
{
public:
    B() { setX(10); }
};

class C : virtual public A
/* preventing multiple instances of a given class
** appearing when using multiple inheritances */
{
public:
    C() { setX(20); }
};

class D : public B, public C
// since in class B and C, the members and functions are 
// copied from A there will be an ambiguity becasue the 
// complier does not know which function to call, thus 
// must add the virtual key word to make class A become a virtual base
{
};

int main()
{
    D d;
    d.print();
    return 0;
}