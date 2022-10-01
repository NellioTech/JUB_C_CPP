/*
CH-230-A
Problem10-6.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Crittter.h"

using namespace std;

int main(int argc, char **argv)
{
    string name;
    int hunger,boredom;
    double height;
    
    Critter c; // the first construtor
    cout << "You have created a default critter" << endl;
    c.print();
    cout << endl;

    // getting the name to create the critter with name only
    cout << "Name: "; 
    getline(cin,name);
    Critter c1 (name); //calling the constructor with the name parameter
    cout << "You have created a critter with name" <<endl;
    c1.print();
    cout << endl;

    // getting the name, hunger, boredom and height for the full critter
    cout << "Name: ";
    getline(cin,name);
    cout << "Hunger: ";
    cin >> hunger ;
    cout << "Boredom: ";
    cin >> boredom;
    cout << "Height: ";
    cin >> height;
    getchar();
    // calling the constructor with full parameters
    Critter c2(name,hunger,boredom,height); 
    cout << "You have created a full critter" << endl;
    c2.print();
    cout << endl;

    // getting the name the boredom 
    // use the default height
    cout << "Name: ";
    getline(cin,name);
    cout << "Boredom: ";
    cin >> boredom ;
    Critter c3(name,2,boredom); // setting the hunger level to 2
    cout << "You have created a critter with name and boredom" << endl;
    c3.print();

    Critter c4("nelson",2,5,520,0.3);
    c4.print();
    return 0;
}