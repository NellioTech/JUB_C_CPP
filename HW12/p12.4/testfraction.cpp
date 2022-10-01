/*
CH-230-A
Problem12-4.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a; //creating the first fraction
    Fraction b; //creating the second fraction
    cout << "enter numerator then denominator: " << endl;
    cin >> a;
    cout << "First fraction: " << a;
    cout << "enter numerator then denominator: " << endl;
    cin >> b;
    cout << "Second fraction: " << b;
    cout << "The multiplication of fractions:" << a * b;
    cout << "The division of fractions:" << a / b;
}
