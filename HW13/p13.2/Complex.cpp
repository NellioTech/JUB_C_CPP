#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;
Complex::Complex()
{   
    // default constructor
    real = 0.0;
    imag = 0.0;
}
Complex::Complex(float newreal, float newimag)
{
    // parametric constructor
    real = newreal;
    imag = newimag;
}
Complex::Complex(const Complex &copy)
{
    // copy constructor
    real = copy.real;
    imag = copy.imag;
}
Complex::~Complex() {} // destructor
ostream &operator<<(ostream &out, const Complex &z)
{
    if (z.imag > 0)
    {
        out << z.real << "+" << z.imag << "i" << endl;
        //case 1
    }
    else if (z.imag < 0)
    {
        out << z.real << "" << z.imag << "i" << endl;
        //case 2
    }
    return out;
}
//overloading operator >>
istream &operator>>(istream &in, Complex &z)
{
    in >> z.real;
    in >> z.imag;
    return in;
}
Complex Complex::operator+(const Complex &c){
    Complex sum;
    sum.real = this -> real + c.real;
    sum.imag = this -> imag + c.imag;
    return sum;
}
Complex Complex::operator-(const Complex &c){
    Complex sub;
    sub.real = this -> real - c.real;
    sub.imag = this -> imag - c.imag;
    return sub;
}
Complex Complex::operator*(const Complex &c){
    Complex multi;
    
    multi.real = (this-> real *c.real) - (this->imag * c.imag);
    multi.imag = (this->real * c.imag) + (this->imag *c.real);
    return multi;
}
