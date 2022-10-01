#include <iostream>
#include "Critter.h"
using namespace std;

Critter::Critter()
{
    cout << "The default constructor is being called..." << endl;
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5.0;
}
Critter::Critter(string newname)
{
    cout << "The second constructor is being called..." << endl;
    name = newname; // the constructor with one parameter
    hunger = 0;
    boredom = 0;
    height = 5.0;
}
Critter::Critter(string newname, int newhunger, int newboredom, double newheight)
{
    cout << "The third constructor is being called..." << endl;
    // the constructor with all parameters
    name = newname;
    hunger = newhunger;
    boredom = newboredom;
    height = newheight;
}

// setters
void Critter::setName(string &newname)
{
    name = newname;
}
void Critter::setHunger(int newhunger)
{
    hunger = newhunger;
}
void Critter::setColor(string newcolor)
{
    // new setter
    color = newcolor;
}
void Critter::setWeight(double newweight)
{
    // new setter
    weight = newweight;
}

// getters
int Critter::getHunger()
{
    return hunger;
}
string Critter::getColor()
{
    //new getter
    return color;
}
double Critter::getWeight()
{
    //new getter
    return weight;
}

void Critter::print()
{
    cout << "I am " << name << endl;
    cout << "My hunger level is " << hunger << endl;
    cout << "my boredom level is " << boredom << endl;
    cout << "My height is " << height << endl;
}