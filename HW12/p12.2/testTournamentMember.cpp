/*
CH-230-A
Problem12-2.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"
using namespace std;

int main()
{

    TournamentMember a;
    a.print();

    char firstName[36] = "cristiano";
    char lastName[36] = "ronaldo";
    char BD[11] = "2021-11-28";
    string location = "Germany";
    string captain = "CR7";
    string team = "Real Madrid";

    TournamentMember b(firstName, lastName, BD, captain, location, team);
    b.print();
}