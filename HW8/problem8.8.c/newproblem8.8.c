/*
CH-230-A
Problem8-8.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen("word.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }

    char word[20];
    int count = 0;
    while (!feof(fptr))
    {
        fscanf(fptr, "%s", word);
        // printf("word = %s\n", word);
        // if the space is not next to a letter
        // it will not be counted
        // need to add special cases for extreme cases
        count++;
    }
    printf("Contains %d words.\n", count);
    fclose(fptr);
    return 0;
}
