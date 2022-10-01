/*
CH-230-A
Problem13-8.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;
class Motor
{
public:
    Motor()
    {
        throw string("This motor has problems\n");
    }
};
class Car
{
private:
    Motor *m;
public:
    Car()
    {
        try
        {
            m = new Motor();
            // goes to line 14
            // first error here
            // throw msg from 14
        }
        catch (string &e)
        {
            // first error from 14 is catched here
            // then it is being throw again
            throw;
        }
    }
};
class Garge
{
private:
    Car *c;
public:
    Garge()
    {
        try
        {
            c = new Car();
            // the first error b/c the motor have issue
            // goes to line 22~29
        }
        catch (string &m) // catch the throw in 35
        {
            cerr << "In garge constructor: " << m ; 
            throw string("The car in this garage has problems with the motor\n"); // throw a final msg to main
        }
    }
};
int main()
{
    try
    {
        Garge g;
    }
    catch (string &c)
    {
        cerr << "In main: " << c;
        // catch error at 54
    }
}