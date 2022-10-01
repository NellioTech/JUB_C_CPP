/*
CH-230-A
Problem9-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    string str;
    int random, guess, count = 0;
    cout << "Enter your name: " ;
    getline(cin, str);
    srand(time(0));
    random = (rand() % 100) + 1;
    //generate an random number b/w 1 ~100
    while (1)
    {
        cout << "Enter the guess: ";
        cin >> guess;
        count++;
        if (guess == random)
        // the the number are the same break;
        {
            break;
        }
        else if (guess > random)
        //if it is greater
        {
            cout << "Too high!" << endl;
        }
        else
         //if it is smaller
        {
            cout << "Too low!" << endl;
        }
    }
     cout << "congruation " << str << ", you tried: " << count << endl;
    return 0;
}