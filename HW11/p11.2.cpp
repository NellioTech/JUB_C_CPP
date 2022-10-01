/*
CH-230-A
Problem11-2.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <iostream>
using namespace std;

class Creature
{
public:
    Creature();
    ~Creature() { cout << "Creature Destructor is called..." << endl; }
    void run() const;

protected:
    int distance;
};

Creature::Creature() : distance(10)
{
    cout << "default creature constructor is being call..." << endl;
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

class Wizard : public Creature
{
public:
    Wizard();
    ~Wizard() { cout << "Wizard Destructor is called..." << endl; }
    void hover() const;

private:
    int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout << "default wizard constructor is being call..." << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
class Human : public Creature   // derived from creature
{
protected:
    string tysex;
public:
    Human();                   // default 
    ~Human() { cout << "Human Destructor is called..." << endl; };
    void print();              //method
};
Human ::Human()
{
    cout << "default human constructor is being call..." << endl;
    tysex = "Banana ";
}
void Human::print()
{
    cout << tysex << "is running " << distance << " meters " << endl;
}
class Dog : public Creature     // derived from creature
{
protected:
    int amount;
public:
    Dog();                  // default 
    ~Dog() { cout << "Dog Destructor is called..." << endl; }
    void dog_print();       // method
};
Dog::Dog()
{
    cout << "default dog constructor is being call..." << endl;
    amount = 3;
}
void Dog::dog_print()
{
    cout << "Dog is eating " << amount << " beefs " << distance << " meters"<<endl;
}
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