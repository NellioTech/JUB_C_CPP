#include <iostream>
#include "Critter.h"
using namespace std;

// setters
void Critter::setName(string &newname){
    name = newname;
}
void Critter::setHunger(int newhunger){
    hunger = newhunger;
}
void Critter::setColor(string newcolor){
    // new setter 
    color = newcolor;
}
void Critter::setWeight(double newweight){
    // new setter 
    weight = newweight;
}

// getters
int Critter::getHunger(){
    return hunger;
}
string Critter::getColor(){
    //new getter
    return color;
}
double Critter::getWeight(){
    //new getter
    return weight;
}
void Critter::print()
{
    cout << "I am " << name << "." << endl;
    cout << "My hunger level is " << hunger << "." << endl;
    cout << "My color is " << color << "." << endl;
    cout << "My weight is " << weight << "." << endl;
}