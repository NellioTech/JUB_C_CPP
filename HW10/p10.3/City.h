#include <string>
class City{
private:
    std:: string name;
    int population;
    std:: string mayor;
    double area;
public:
    // setters
    void setName (std:: string name);
    void setPopulation (int population);
    void setMayor(std:: string mayor);
    void setArea (double area);

    //getters
    std:: string getName();
    int getPopulation();
    std:: string getMayor();
    double getArea();
    void print();
};