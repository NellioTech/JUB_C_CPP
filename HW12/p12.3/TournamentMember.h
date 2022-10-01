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
    TournamentMember(const char[], const char[], const char[], std::string, std::string, std::string);
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
class Player : public TournamentMember
{
private:
    int number;
    int position;
    int goals;
    std::string foot;
    void setNumber(int nnum);
    void setPosition(int nposition);
    void setFoot(std::string nfoot);
    int getNumber();
    int getPosition();
    std::string getFoot();

public:
    Player();
    Player(const char [], const char [], const char [], std::string, std::string, std::string, int, int, int, std::string);
    Player(const Player &);
    ~Player();
    void print();
    int increase_goal();
};
#endif
