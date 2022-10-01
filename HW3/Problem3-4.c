/*
CH-230-A
Problem3-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
    {
        /* do nothing */
        continue;
    }

    return idx;
}
int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
        break; //can be deleted if you want to enter mutiple inputs 
    }
    return 0;
}
