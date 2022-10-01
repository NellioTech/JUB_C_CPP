/*
CH-230-A
Problem12-3.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "TournamentMember.h"
using namespace std;
int main()
{
    Player p1("ab","cd","yyyy-mm-dd",string("hi"),string ("bye"),string("wow"),9, 8, 0, string("left"));
    p1.increase_goal();
    // p1.setLocation("hamberg");
    p1.print();

}