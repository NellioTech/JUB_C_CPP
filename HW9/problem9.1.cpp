/*
CH-230-A
Problem9-1.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;
int main (int argc , char ** argv ) {
    string country_orgin;
    // a string
    getline(cin,country_orgin);
   // cin >> country_orgin;
    cout << "Country of orgin is: " << country_orgin <<endl;
    return 0;
}