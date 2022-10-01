#include <iostream>
#include "Crittter.h"
using namespace std;

double Critter::convert(int hunger){
    double hunger2= hunger/10.0;
    return hunger2;
}
int Critter::convertBack (double hunger2){
    int hunger3 = hunger2*10;
    return hunger3;
}
Critter::Critter()
{
    cout << "The default constructor is being called..." << endl;
    name = "default_critter";
    hunger = convert(0);
    boredom = 0;
    height = 5.0;
}
Critter::Critter(string newname)
{
    cout << "The second constructor is being called..." << endl;
    name = newname; // the constructor with one parameter
    hunger = convert(0);
    boredom = 0;
    height = 5.0;
}
Critter::Critter(string newname, int newhunger, int newboredom, double newheight)
{
    cout << "The third constructor is being called..." << endl;
    // the constructor with all parameters
    name = newname;
    hunger = convert(newhunger);
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
    hunger = convert(newhunger);
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
    return convertBack(hunger);
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
    cout << "My hunger level is " << convertBack(hunger) << endl;
    cout << "my boredom level is " << boredom << endl;
    cout << "My height is " << height << endl;
}