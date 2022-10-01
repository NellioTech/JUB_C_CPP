/*
CH-230-A
Problem13-2.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include "Complex.h"
using namespace std;

int main(int argc, char **argv)
{
    ifstream file1("in1.txt");
    if (!file1.good())
    {
        cerr << "Problem with in1.txt" << endl;
    }
    ifstream file2("in2.txt");
    if (!file2.good())
    {
        cerr << "Problem with in2.txt" << endl;
    }
    ofstream out_file("output.txt");
    if (!out_file.good())
    {
        cerr << "Problem with output.txt" << endl;
    }
    Complex a, b;
    file1 >> a;
    // format for the in1.txt should be like:
    // 1
    // -2
    // format for the in2.txt should be like:
    // 2
    // -2
    // numbers can be different but the format should stay this way
    file2 >> b;
    while (1)
    {
        out_file << "The sum of the complexs number is: " << a + b;
        out_file << "The difference of the complexs number is: " << a - b;
        out_file << "The product of the complexs number is: " << a * b;
        break;
    }
    out_file.close();
    file1.close();
    file2.close();
    return 0;
}