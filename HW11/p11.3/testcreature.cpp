/*
CH-230-A
Problem11-3.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/

//main program - test program
#include <iostream>
#include "Creature.h"
using namespace std;
int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a human.\n";
    Human h;
    h.run();
    h.print();

    cout << "\nCreating a dog.\n";
    Dog g;
    g.run();
    g.dog_print();
    return 0;
}