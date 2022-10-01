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
TournamentMember::TournamentMember(const char nfirstname[], const char nlastname[], const char nbd[], string ncaptain, string nlocation, string nteam)
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
    strcpy(firstName, t.firstName); //using strpcy to assign
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

Player::Player(const char nfirstname[], const char nlastname[], const char nbd[], string ncaptain, string nlocation, string nteam,int nnum, int nposition, int ngoals, string nfoot) 
: TournamentMember(nfirstname, nlastname, nbd, ncaptain, nlocation, nteam)
{
    cout << "calling player default constructor..." << endl;
    number = nnum;
    position = nposition;
    goals = ngoals;
    foot = nfoot;
}
Player::Player(const Player &p)
{
    cout << "calling player parametric constructor ..." << endl;
    number = p.number;
    position = p.position;
    goals = p.goals;
    foot = p.foot;
}
Player::~Player()
{
    cout << "calling player destructor..." << endl;
}
int Player::increase_goal()
{
    goals++;
    return goals;
}
void Player::print()
{
    cout << "number: " << number << endl;
    cout << "posistion: " << position << endl;
    cout << "goals: " << goals << endl;
    cout << "foot: " << foot << endl;
}

inline void Player::setNumber(int nnum)
{
    number = nnum;
}
inline void Player::setPosition(int nposition)
{
    position = nposition;
}
inline void Player::setFoot(string nfoot)
{
    foot = nfoot;
}
inline int Player::getNumber()
{
    return number;
}
inline int Player::getPosition()
{
    return position;
}
inline string Player::getFoot()
{
    return foot;
}
