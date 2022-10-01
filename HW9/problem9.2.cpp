/*
CH-230-A
Problem9-2.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    double x;
    string s;
    cout << "Hom many times to print: " ;
    cin >> n;
    cout << "Enter value for an double value n: " ;
    cin >> x;
    cout << "Enter value for the string: ";
    getchar();
    // removing the line
    getline(cin,s);
    for (int i = 0; i < n; i++)
    {
        cout << s << ":" << x << endl;
    }
    return 0;
}