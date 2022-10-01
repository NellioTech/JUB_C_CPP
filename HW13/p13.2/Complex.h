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
    Complex(const Complex &);
    ~Complex();
    
    friend std ::ostream &operator<<(std ::ostream &out, const Complex &z);
    friend std ::istream &operator>>(std ::istream &in, Complex &z);
    Complex operator* (const Complex &);
	Complex operator+ (const Complex &);
	Complex operator- (const Complex &);
};
