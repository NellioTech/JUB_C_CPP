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
    // Implement GCD of two numbers;
    int temp = 0;
	if(a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	while(b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int Fraction::lcm(int a, int b)
{

    return a * b / gcd(a, b);
}
//overloading operator <<
ostream &operator<<(ostream &out, const Fraction &z)
{
    out << z.num << "/" << z.den << endl;
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
Fraction Fraction::operator+(const Fraction &f)
{
    int d, n;
    d = lcm(this->den, f.den);
    n = (this->num * lcm(this->den, f.den) / this->den )+ (f.num * lcm(this->den, f.den)/f.den);
    Fraction sum(n, d);
    return sum;
}
Fraction Fraction::operator-(const Fraction &f)
{
    int d, n;
    d = lcm(this->den, f.den);
    n = (this->num * lcm(this->den, f.den) / this->den )- (f.num * lcm(this->den, f.den)/f.den);
    Fraction sub(n, d);
    return sub;
}
