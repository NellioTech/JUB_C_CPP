#include <iostream>
#include "fraction.h"
using namespace std;
Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    int tmp_gcd = 1;

    // Implement GCD of two numbers;

    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
//overloading operator <<
ostream &operator<<(ostream &out, const Fraction &z)
{
    cout << z.num;
    cout << "/" << z.den << endl;
    return out;
}
//overloading operator >>
istream &operator>>(istream &in, Fraction &z)
{
    in >> z.num;
    in >> z.den;
    return in;
}
//overloading operator *
Fraction Fraction::operator*(const Fraction &f)
{
    Fraction mult;
    mult.num = this->num * f.num;
    mult.den = this->den * f.den;
    return mult;
}
//overloading operator /
Fraction Fraction::operator/(const Fraction &f)
{
    Fraction divi;
    divi.num = this->num * f.den;
    divi.den = this->den * f.num;
    return divi;
}
