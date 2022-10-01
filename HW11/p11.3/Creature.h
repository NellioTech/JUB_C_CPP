
#ifndef _CREATURE_H
#define _CREATURE_H
#include <iostream>
//declaration of class
class Creature
{
public:
    Creature();
    ~Creature();
    void run() const;

protected:
    int distance;
};

class Wizard : public Creature
{
public:
    Wizard();
    ~Wizard();
    void hover() const;

private:
    int distFactor;
};
class Human : public Creature // derived from creature
{
protected:
    std::string tysex;

public:
    Human(); // default
    ~Human();
    void print(); //method
};
class Dog : public Creature // derived from creature
{
protected:
    std::string food;

public:
    Dog(); // default
    ~Dog();
    void dog_print(); // method
};
#endif