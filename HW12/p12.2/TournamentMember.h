#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H
#include <iostream>
#include <cstring>
class TournamentMember
{
private:
    char firstName[36];
    char lastName[36];
    char BD[11];
    static std::string location;
    std::string team;
    std::string captain;

public:
    TournamentMember();
    TournamentMember(char[], char[], char[], std::string, std::string, std::string);
    TournamentMember(const TournamentMember &);
    ~TournamentMember()
    {
        std::cout << "Destructor is being called..." << std::endl;
    }
    void print();

    void setFirstName(char nfistname[]);
    void setLastName(char nlastname[]);
    void setBD(char nBD[]);
    static void setLocation(std::string nlocation);
    void setTeam(std::string nteam);
    void setCaptin(std::string ncaptain);

    std::string getFirstName();
    std::string getLastName();
    std::string getBD();
    std::string getLocation();
    std::string getTeam();
    std::string getCaptin();
};
#endif