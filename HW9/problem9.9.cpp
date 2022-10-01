/*
CH-230-A
Problem9-9c.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    const string arr[17] = {"computer", "television", "keyboard", "laptop",
                            "mouse", "apple", "heart", "broken", "whatever",
                            "hi", "bye", "water", "give", "university", "sleep",
                            "bed", "bad"};
                            // 17 user/ worksheet define words
    while (1)
    {
        int count = 1;
        srand((time(0)));
        string random = arr[(rand() % 17) + 1]; 
        // generating a random words out of the string arr
        string answer = random;
        for (unsigned int i = 0; i < random.length(); i++)
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
        string guess_word;
        while (1)
        {
            getline(cin, guess_word);
            if (guess_word.compare(answer) != 0)
            // string compare
            {

                cout << "Guess again!" << endl;
                cout << random << endl;
                count++;
            }
            if (guess_word.compare(answer) == 0)
            // string compare
            {
                cout << "Congrats! " << endl;
                cout << "You tried: " << count << " times" << endl;
                cout << "Enter yes to play again, quit to quit" << endl;
                string ans;
                getline(cin, ans);
                if (ans == "quit")
                {
                    exit(1);
                }
                break;
            }
        }
    }
    return 0;
}