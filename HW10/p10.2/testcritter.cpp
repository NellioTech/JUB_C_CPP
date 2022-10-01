/*
CH-230-A
Problem10-2.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char **argv)
{
    Critter c;
    string name,color;
    int hunger;
    double weight;

    cout << endl
         << "Please enter data: " << endl;
    cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);
    cout << "Color: ";
    getchar(); // for the space
    getline(cin,color); 
    c.setColor(color); // setting the color
    cout << "Weight: ";
    cin >> weight;
    c.setWeight(weight); // setting the weight
    cout << "You have created:" << endl;
    c.print();
    return 0;
}