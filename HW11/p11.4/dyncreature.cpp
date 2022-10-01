/*
CH-230-A
Problem11-4.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/

//main program - test program
#include <iostream>
#include <string>
#include "Creature.h"
using namespace std;
int main()
{

    string input;
    while (1)
    {
        getline(cin,input); // getting input
        if (input.compare("wizard") == 0) // this compare the input with the parameter
        {
            cout << "\nCreating a Wizard.\n";
            // memory allocation for class Wizard
            Wizard *w = new Wizard;         
            (*w).run();
            (*w).hover();
            delete w;           // memory deallocation
        }
        else if (input.compare("object1") == 0)
        {
            cout << "\nCreating a human.\n";
            // memory allocation for class Human
            Human *h = new Human;
            (*h).run();
            (*h).print();
            delete h;           // memory deallocation
        }
        else if (input.compare("object2") == 0)
        {
            cout << "\nCreating a dog.\n";
            // memory allocation for class Dog
            Dog *g = new Dog;
            (*g).run();
            (*g).dog_print();
            delete g;           // memory deallocation
        }
        else if (input.compare("quit")==0){
            exit (1);
        }
    }

    return 0;
}