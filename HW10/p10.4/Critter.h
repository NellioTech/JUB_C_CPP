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
   Critter(); // default constructor
   Critter(std::string newname);// constructor with the parameter name
   Critter(std::string newname, int newhunger, int newboredom, 
            double newheight = 10.0); 
            // constructor with all parameters setting height to 10.0

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

   void print(); // printing the class critter
};