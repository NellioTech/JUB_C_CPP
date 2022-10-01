/*
CH-230-A
Problem9-9c.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;
void generate(string random)
{
    string set = random;
    for (unsigned int i = 0; i < set.length(); i++)
    {
        if (random[i] == 'A' || random[i] == 'E' || random[i] == 'I' ||
            random[i] == 'O' || random[i] == 'U' || random[i] == 'a' ||
            random[i] == 'e' || random[i] == 'i' || random[i] == 'o' ||
            random[i] == 'u')
        {
            random[i] = '_';
            //changing vowels to _
        }
    }
    cout << random << endl;
}

int main()
{
    const string arr[17] = {"computer", "television", "keyboard", "laptop",
                            "mouse", "apple", "heart", "broken", "whatever",
                            "hi", "bye", "water", "give", "university", "sleep",
                            "bed", "bad"};
    int count = 1;

    string answer;
    do
    {
        srand((time(0)));
        string random = arr[(rand() % 17) + 1];
        // generating a random words out of the string arr
        generate(random);
        string guess;
        cin >> guess;
        while (guess != random)
        {
            count++;
            cout << "guess again!" << endl;
            // calling the funciton again
            generate(random);
            cin >> guess;
        }
        if (guess == random)
        {
            cout << "You win!"
                 << " You tired " << count << " times" << endl
                 << "Enter quit to quit and again the play again" << endl;
            cin >> answer;
            if (answer == "quit")
            {
                // if wanted to quit
                exit(1);
            }
        }
    } while (answer == "again"); //if wanted to play again
}