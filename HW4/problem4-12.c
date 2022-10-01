/*
CH-230-A
Problem4-12.c
Nelson Tseng
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void replaceAll(char *str, char c, char e)
{
    int n = strlen(str);
    // getting the length of the array
    int a;
    for (a = 0; a < n; a++)
    {
        // if the character in the string is equal to the
        // character to be replace
        // the current becomes the character to be replaced to
        if (str[a] == c)
        {
            str[a] = e;
        }
    }
}
int main()
{
    char arr[80];
    char c;
    char e;
    while (1)
    {
        printf("Enter a string:");
        fgets(arr, 80, stdin);
        if (strcmp(arr, "stop\n") == 0)
        {
            // if the "size" of the string is equal to the
            // size of stop, the loop will break
            break;
        }
        printf("Character to be replaced:");
        scanf("%c", &c);
        getchar(); // for the enter line
        printf("Character to be replaced to:");
        scanf("%c", &e);
        getchar(); // for the enter line
        printf("Before replacement:%s", arr);
        replaceAll(arr, c, e);
        printf("After replacement:%s", arr);
    }
    return 0;
}
