/*
CH-230-A
Problem4-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int count_consonants(char *str)
{
    int consonants = 0;
    char *ptr = str;
    int length =strlen(str) ;
    for (int i = 0; i<length && str[i] != '\n'; i++)
    {
        // making sure that you only count letters
        if ((((*(ptr+i) >= 'A') && (*(ptr+i) <= 'Z')) || ((*(ptr+i) >= 'a') && (*(ptr+i) <= 'z'))) && 
        
        (*(ptr+i) != 'A' && *(ptr+i) != 'a' && *(ptr+i) != 'E' && *(ptr+i) != 'e' &&
            *(ptr+i) != 'I' && *(ptr+i) != 'i' && *(ptr+i) != 'O' && *(ptr+i) != 'o' 
            && *(ptr+i) != 'U' && *(ptr+i) != 'u'))
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
