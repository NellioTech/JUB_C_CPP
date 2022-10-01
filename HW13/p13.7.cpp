/*
CH-230-A
Problem13-7.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <exception>
#include <stdbool.h>
using namespace std;
class OwnException : public exception
{
private:
    string msg;
public:
    OwnException(string nmsg){msg= nmsg;}
    virtual ~OwnException() throw(){};
    const char * what () const throw ()  
    {
        return "OwnException\n"; // case 4
    }
    /* string show_msg(){
        return msg;
    } */
};
void try_exception(int x)
{
    if (x == 1)
    {
        throw 'a'; // case 1
    }
    if (x == 2)
    {
        throw 12; // case 2
    }
    if (x == 3)
    {
        throw true; // case 3
    }
}
int main()
{
    try {try_exception(1);}
    catch (char case_one)
    {
        cerr << "Caught in main: " << case_one << endl;
    }
    try {try_exception(2);}
    catch (int case_two)
    {
        cerr << "Caught in main: " << case_two << endl;
    }
    try {try_exception(3);}
    catch(bool case_three){
        cerr << "Caught in main: " << case_three << endl;
    }
    try
    {
        throw OwnException(string("Default case exception"));
    }
    catch(OwnException&a){
        //cerr << a.show_msg() << endl;
        cerr << "Caught in main: " << a.what();
    }
}