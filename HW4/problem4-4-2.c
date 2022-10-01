/*
CH-230-A
Problem4-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int count_consonants(char str[])
{
    int consonants = 0;
    int length =strlen(str) ;
    for (int i = 0; i<length && str[i] != '\n'; i++)
    {
        // making sure that you only count letters
        if ((((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z'))) && 
        // here you need && instead of or
        // you also forgot to list I and i
        (str[i] != 'A' && str[i] != 'a' && str[i] != 'E' && str[i] != 'e' &&
            str[i] != 'I' && str[i] != 'i' && str[i] != 'O' && str[i] != 'o' 
            && str[i] != 'U' && str[i] != 'u'))
        {
            consonants++;
        }
    }
    return consonants;
}

int main()
{
    char arr[100];
    do
    {
        fgets(arr, sizeof(arr), stdin);
        // added this such that the empty string will 
        // not be considered for consonat counting
        if (arr[0] == '\n')
            break;
        // the call of the function has to be in the loop not outside
        printf("Number of consonants =%d\n", count_consonants(arr));

    } while (arr[0] != '\n');
         
     return 0;
}
