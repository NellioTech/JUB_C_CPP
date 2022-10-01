/*
CH-230-A
Problem12-5.cpp
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
    cout << "enter the numerator and denominator for fraction a: " << endl;
    cin >> a;
    cout << "First fraction: " << a;
    cout << "enter the numerator and denominator for fraction b: " << endl;
    cin >> b;
    cout << "Second fraction: " << b;
    cout << "The multiplication of fractions:" << a * b;
    cout << "The division of fractions:" << a / b;
    cout << "Fraction a plus b is: " << a+b ;
    cout << "Fraction a minus b is: " << a-b ;
}
