/*
CH-230-A
Problem10-8.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main(int argc, char **argv)
{
    Complex a(5,2); // first complex number
    Complex b(2,-3); // second complex number
    cout <<"The conjugate of 1st complex number is: ";
    Complex x = a.conjugate();
    x.print();
    cout <<"The sum of the complexs number is: ";
    Complex c1 = a.add(b);
    c1.print();
    cout <<"The difference between 2nd and 1st complex number is: ";
    Complex c2 = b.difference(a);
    c2.print();
    cout <<"The multiplication of the complex numbers is: ";
    Complex c3 = a.multiplication(b);
    c3.print();
    return 0;
}