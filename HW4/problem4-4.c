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
    int length =strlen(str) ; // calculating how many letters are in hte str array
    for (int i = 0; i<length && str[i] != '\n'; i++)
    {
        // making sure that only letters are counted
        //consonants are letter besides a,e,i,o,u,A,E,I,O,and U
        // those letter that are vowels will not be counted
        if ((((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z'))) && 
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
        if (arr[0] == '\n'){
            //if the very first string is empety it will break out
            break;
        }
        printf("Number of consonants=%d\n", count_consonants(arr));
        //calling the function

    } while (arr[0] != '\n');
     return 0;
}