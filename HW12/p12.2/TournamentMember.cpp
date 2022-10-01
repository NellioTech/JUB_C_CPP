#include <iostream>
#include "TournamentMember.h"
using namespace std;

TournamentMember::TournamentMember()
{
    cout << "Calling default constructor..." << endl;
    strcpy(firstName, "default"); //using strpcy to assign
    strcpy(lastName, "default");
    strcpy(BD, "yyyy-mm-dd");
    captain = "default";
    location = "default";
    team = "Default";
}
string TournamentMember::location = "Germany";
TournamentMember::TournamentMember(char nfirstname[], char nlastname[], char nbd[], string ncaptain, string nlocation, string nteam)
{
    cout << "Calling parametric constructor..." << endl;
    strcpy(firstName, nfirstname); //using strpcy to assign
    strcpy(lastName, nlastname);
    strcpy(BD, nbd);
    captain = ncaptain;
    location = nlocation;
    team = nteam;
}
TournamentMember::TournamentMember(const TournamentMember &t)
{
    cout << "Calling copy constructor..." << endl;
    strcpy(firstName, t.firstName);//using strpcy to assign
    strcpy(lastName, t.lastName);
    strcpy(BD, t.BD);
    location = t.location;
    captain = t.captain;
    team = t.team;
}
void TournamentMember::print()
{
    cout << "Player name and birthday: " << firstName << " " << lastName << ", " << BD << endl;
    cout << "The team and the captain is: " << team << ", " << captain << endl;
    cout << "The location of the team is: " << location << endl;
}
inline void TournamentMember::setFirstName(char nfirstname[]) //inline
{
    strcpy(firstName, nfirstname);
}
inline void TournamentMember::setLastName(char nlastname[])
{
    strcpy(lastName, nlastname);
}
inline void TournamentMember::setBD(char nbd[])
{
    strcpy(BD, nbd);
}
inline void TournamentMember::setCaptin(string ncaptain)
{
    captain = ncaptain;
}
inline void TournamentMember::setTeam(string nteam)
{
    team = nteam;
}
inline void TournamentMember::setLocation(string nlocation)
{
    location = nlocation;
}
inline string TournamentMember::getFirstName()
{
    return firstName;
}
inline string TournamentMember::getLastName()
{
    return lastName;
}
inline string TournamentMember::getBD()
{
    return BD;
}
inline string TournamentMember::getLocation()
{
    return location;
}
inline string TournamentMember::getCaptin()
{
    return captain;
}
inline string TournamentMember::getTeam()
{
    return team;
}
