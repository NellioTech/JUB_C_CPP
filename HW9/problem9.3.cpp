/*
CH-230-A
Problem9-3.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;

float absolute(float x)
{
    if (x >= 0.0)
    {
        //return the value if it is 
        // greater or equal to 0
        return x;
    }
    else 
    {
        // else return the negative of 
        // that number
        return -x;
    }
}

int main(int argc, char **argv)
{
    float x;
    cin >> x;
    cout << "The absolute value of the float entered is:" << absolute(x) << endl;
    return 0;
}