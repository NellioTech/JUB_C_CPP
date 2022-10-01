/*
CH-230-A
Problem10-7.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <cstring>

using namespace std;

class NaiveString
{
private:
    char *str;

public:
    NaiveString(const char *);
    NaiveString(const NaiveString &);
    ~NaiveString(); // destructor
    void update(char, char);
    void print();
};

NaiveString::NaiveString(const char *t)
{
    cout << "The parametric constructor is being called..." << endl;
    str = new char[strlen(t) + 1];
    strcpy(str, t);
}

NaiveString::NaiveString(const NaiveString &src)
{
    cout << "The copy constructor is being called..." << endl;
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
    // please note that we can access src.str even if it is private
    // as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar)
{
    unsigned int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == oldchar)
            str[i] = newchar;
}

void NaiveString::print()
{
    cout << str << endl;
}

void funcByVal(NaiveString s)
{
    cout << "funcByVal() is being called..." << endl;
    s.update('B', 'C');
    s.print();
}

void funcByRef(NaiveString &s) // passing by reference
{
    cout << "funcByRef() is being called.." << endl;
    s.update('B', 'C');
    s.print();
}
NaiveString::~NaiveString()
{
    cout << "Calling destructor..." << endl;
    delete[] str; // memory deallocation
}
int main(int argc, char **argv)
{
    NaiveString a1("aBcBdB"); // instance 1
    a1.print();
    cout << "About to call funcByVal()..." << endl;
    funcByVal(a1);
    // the copied a1 is being destroy here
    cout << "About to call funcByRef()..." << endl;
    funcByRef(a1);
    cout << "----------------------" << endl;
   NaiveString a2("BarBaric"); // instance 2
    cout << "About to call funcByVal()..." << endl;
    funcByVal(a2);
    // the copied a2 is being destoy here
    cout << "About to call funcByRef()..." << endl;
    funcByRef(a2);  
    // going out of scope for a1 and a2
    return 0;
}