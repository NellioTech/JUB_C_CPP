/*
CH-230-A
Problem9-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <string.h>
using namespace std;

int mycount(int x, int y)
{
    // function overloading by giving
    // different perimeter
    int difference = y - x;
    return difference;
}
int mycount(char c, string s)
{
    // function overloading by giving
    // different perimeter
    int count = 0;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}
int main(int argc, char **argv)
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    char c;
    cout << "Character to search for: ";
    cin >> c;
    int first, second;
    cout << "First integer: ";
    cin >> first;
    cout << "Second integer: ";
    cin >> second;
    cout << "The difference between the second and the first int is " << mycount(first, second) << endl;
    cout << "The occurrence of " << c << " is " << mycount(c, str) << endl;
    return 0;
}