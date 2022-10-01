/*
CH-230-A
Problem3-11.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int main()
{

    char one[30], two[30];
    char three[30]; // for strcpy
    char c;
    char *location; // for strchr
    fgets(one, 30, stdin);

    fgets(two, 30, stdin);
    printf("length1=%ld\n", strlen(one) - 1); //  deleteing the space?
    printf("length2=%ld\n", strlen(two) - 1); //  deleteing the space?

    one[strcspn(one, "\n")] = 0;
    // I tired using this and it removes the line after using strcat but I don't know why
    two[strcspn(two, "\n")] = 0;
    int val = strcmp(two, one);
    printf("concatenation=%s\n", strcat(one, two));
    printf("copy=%s\n", strcpy(three, two));

    // printf ("%d",val);
    // if the length of one and two are equal it returns a 0
    // if the length of one is larger than two it returns a value > 0
    // if the length of one is smaller than two it returns a value < 0

    if (val < 0) // not working
    {
        printf("one is larger than two\n");
    }
    else if (val > 0)
    {
        printf("one is smaller than two\n");
    }
    else
    {
        printf("one is equal to two\n");
    }

    c = getchar(); //getting input for c
    location = strchr(two, c);
    // searching for the first occurance of the character input
    if (location == NULL)
    {
        printf("The character is not in the string\n");
    }
    else
        printf("position=%ld\n", location - two);
    return 0;
}