/*
CH-230-A
Problem10-2.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "City.h"
using namespace std;
int main(int argc, char **argv){
    City Bremen,Paris,London;// the instances

    // info for each city
    string name,mayor;
    double area;
    int population;
    // 
    cout << "Enter city for Bremen: ";
    getline(cin,name);
    Bremen.setName(name);
    cout << "Enter population for Bremen: ";
    cin >> population;
    Bremen.setPopulation(population);
    getchar(); // for the entered line
    cout << "Enter mayor for Bremen: ";
    getline(cin,mayor);
    Bremen.setMayor(mayor);
    cout << "Enter area for Bremen: " ;
    cin >> area ;
    Bremen.setArea(area);
    Bremen.print();
    
    getchar();// for the entered line
    cout << "Enter city for Paris: ";
    getline(cin,name);
    London.setName(name);
    cout << "Enter population for Paris: ";
    cin >> population;
    London.setPopulation(population);
    getchar();// for the entered line
    cout << "Enter mayor for Paris: ";
    getline(cin,mayor);
    London.setMayor(mayor);
    cout << "Enter area for Paris: " ;
    cin >> area ;
    London.setArea(area);
    London.print();
    
    getchar();// for the entered line
    cout << "Enter city for London: ";
    getline(cin,name);
    Paris.setName(name);
    cout << "Enter population for London: ";
    cin >> population;
    Paris.setPopulation(population);
    getchar();// for the entered line
    cout << "Enter mayor for London: ";
    getline(cin,mayor);
    Paris.setMayor(mayor);
    cout << "Enter area for London: " ;
    cin >> area ;
    Paris.setArea(area);
    Paris.print();
   
    return 0;
}