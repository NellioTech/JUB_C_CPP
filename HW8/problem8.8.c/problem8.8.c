/*
CH-230-A
Problem8-8.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int count = 0;
    // count will count the occurance of words
    // which is 0 to begin with
    FILE *words = fopen("word.txt", "r");
    if (words == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    char arr = fgetc(words);
    //getting the first char in the file
    printf("%c", arr);
    while (arr != EOF)
    {
        if (arr == ' ' || arr == ',' || arr == '?' || arr == '!' ||
            arr == '.' || arr == '\t' || arr == '\r' || arr == '\n')
        {
            count++;
            //increment count by one when the above condition are mate
            while (arr == ' ' || arr == ',' || arr == '?' || arr == '!' ||
                   arr == '.' || arr == '\t' || arr == '\r' || arr == '\n')
            {
                //checking if there are multiple characters in that file 
                // if there are multiple spaces for ex
                // arr will be equal to the next character in the file
                // do this until the arr is not one of those symbols
                arr = fgetc(words);
            }
        }
        arr = fgetc(words);
    }
    printf("The file cotains %d words", count);
    return 0;
}