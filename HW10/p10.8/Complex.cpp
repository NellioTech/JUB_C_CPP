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
Complex::Complex(const Complex &copyreal, const Complex &copyimag)
{
    // copy constructor
    real = copyreal.real;
    imag = copyimag.imag;
}
Complex::~Complex() {} // destructor
Complex Complex::add(Complex num)
{
    // If z1 =a+bi and z2 =c+di then z1+z2 =(a+c)+(b+d)i
    float a = real;
    float b = imag;
    float x = num.real;
    float y = num.imag;
    float ax = a + x;
    float by = b + y;
    Complex result(ax, by);
    return result;
}
Complex Complex::difference(Complex num)
{
    // If z1 =a+bi and z2 =c+di then z1 −z2 =(a−c)+(b−d)i
    float a = real;
    float b = imag;
    float x = num.real;
    float y = num.imag;
    float ax = a - x;
    float by = b - y;
    Complex result(ax, by);
    return result;
}
Complex Complex::multiplication(Complex num)
{
    // If z1 =a+bi and z2 =c+di then z1 ·z2 =(a·c−b·d)+(b·c+a·d)i.
    float a = real;
    float b = imag;
    float x = num.real;
    float y = num.imag;
    float ab = ((a * x) - (b * y));
    float xy = ((b * x) + (a * y));
    Complex result(ab, xy);
    return result;
}
Complex Complex::conjugate()
{
    // If z=a+bi then z(conjugate)=a−b 
    return Complex(real, -imag);
}
//setters
void Complex::setReal(float newreal)
{
    real = newreal;
}
void Complex::setImag(float newimag)
{
    imag = newimag;
}
//getters
float Complex::getReal()
{
    return real;
}
float Complex::getImag()
{
    return imag;
}
void Complex::print()
{
    if (imag > 0)
    {
        cout << real << "+" << imag <<  "i" <<endl;
    }
    else
    {
        cout << real << "-" << (-imag) << "i" << endl;
    }
}
