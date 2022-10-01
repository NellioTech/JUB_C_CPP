// implementation for class
#include <iostream>
#include "Creature.h"
using namespace std;
Creature::Creature() : distance(10)
{
    cout << "default creature constructor is being call..." << endl;
}
void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}
Creature::~Creature()
{
    cout << "Creature Destructor is called..." << endl;
}
Wizard::Wizard() : distFactor(3)
{
    cout << "default wizard constructor is being call..." << endl;
}
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
Wizard::~Wizard()
{
    cout << "Wizard Destructor is called..." << endl;
}
Human::Human()
{
    cout << "default human constructor is being call..." << endl;
    tysex = "Banana ";
}
void Human::print()
{
    cout << tysex << "is running " << distance << " meters " << endl;
}
Human::~Human()
{
    cout << "Human Destructor is called..." << endl;
}
Dog::Dog()
{
    cout << "default dog constructor is being call..." << endl;
    food = "Beef";
}
void Dog::dog_print()
{
    cout << "Dog is eating " << food << endl;
}
Dog::~Dog()
{
    cout << "Dog Destructor is called..." << endl;
}