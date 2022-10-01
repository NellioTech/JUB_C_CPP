/*
CH-230-A
Problem13-5.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A() { x = 10; }
    // need to add an default constructor
    A(int i) { x = i; }
    void print() { cout << x; }
};

class B : virtual public A
{
public:
    // since class B is calling the default constructor
    // of class A, so there must be a explicity default
    // constructor defined in class A
    B() : A(10) {}
};

class C : virtual public A
{
public:
    // since class C is calling the default constructor
    // of class A, so there must be a explicity default
    // constructor defined in class A
    C() : A(10) {}
};

class D : public B, public C
{
};

int main()
{
    D d;
    d.print();
    return 0;
}