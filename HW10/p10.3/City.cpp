#include <iostream>
#include "City.h"
using namespace std;

void City:: setName(string newname){
    name = newname;
}
void City:: setPopulation(int newpopulation){
    population = newpopulation;
}
void City:: setMayor(string newmayor){
    mayor = newmayor;
}
void City:: setArea(double newarea){
    area = newarea;
}
void City:: print(){
    cout << "You have created the city..." << endl;
    cout << "City: " << name << endl;
    cout << "Population: " << population << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Area: " << area << endl;
    cout << "--------------------" << endl;
}
string City:: getName(){
    return name;
}
int City::getPopulation(){
    return population;
}
string City::getMayor(){
    return mayor;
}
double City::getArea(){
    return area;
}