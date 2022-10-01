#include <string> 


class Critter
{
private: 
    std::string name;
    int hunger;
    int boredom;
    double height;
    std::string color; // new property
    double weight;    // new property

public: 
    // setter methods
    void setName(std::string &newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setColor(std::string newcolor); // new setter
    void setWeight (double newweight); // new setter

    // getter method
    int getHunger(); 
    std::string getColor (); // new getter
    double getWeight(); // new getter
    
    void print();
};