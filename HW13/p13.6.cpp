/*
CH-230-A
Problem13-6.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <vector>
#include <exception>
using namespace std;
int main()
{
    vector<int> v;
    v.assign(20, 0);
    // assigning 0 to 20 dimenion in vector
    for (long unsigned int x = 0; x < v.size(); x++)
    {
        v[x] += 8;
        // setting each of them to be 8
        cout << v[x] << endl;
    }
    try
    {
        v.at(20);
        // accessing the 21 element that is in the 20 position
    }
    catch (out_of_range &e)
    {
        cerr << "Error is: " << e.what() << endl;
    }
}