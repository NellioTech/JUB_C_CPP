#include <string.h>
#include <iostream>

class Complex
{
private:
    float real;
    float imag;

public:
    //constructors
    Complex();
    Complex(float newreal, float newimag);
    Complex(const Complex &, const Complex&);
    ~Complex();
    // methods
    Complex add(Complex); // given in the hw sheet
    Complex difference(Complex);
    Complex multiplication(Complex);
    Complex conjugate();
    //setters
    void setReal(float newreal);
    void setImag(float newimag);
    // getters
    float getReal();
    float getImag();
    //printing
    void print();
};
