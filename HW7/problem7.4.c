/*
CH-230-A
Problem7-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void to_upper(char arr[100])
{
    int x = strlen(arr);
    //getting the length of the arr
    char *str = malloc(sizeof(char) * x);
    //alocating a new char array str with the same length of char array arr
    strcpy(str, arr);
    //copying the string in arr and paste it to str
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        //changing the lower case to upper case
        //function in ctype
        str[i] = toupper(str[i]);
    }
    printf("%s", str);
    free(str);
    return;
}

void to_lower(char arr[100])
{
    int x = strlen(arr);
    //getting the length of the arr
    char *str = malloc(sizeof(char) * x);
    //alocating a new char array str with the same length of char array arr
    strcpy(str, arr);
    //copying the string in arr and paste it to str
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        //changing the upper case to lower case
        //function in ctype
        str[i] = tolower(str[i]);
    }
    printf("%s", str);
    free(str);
    return;
}

void flip(char arr[100])
{
    int x = strlen(arr);
    //getting the length of the arr
    char *str = malloc(sizeof(char) * x);
    //alocating a new char array str with the same length of char array arr
    strcpy(str, arr);
     //copying the string in arr and paste it to str
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if ((str[i] >= 'a') && (str[i] <= 'z'))
        {
            //changing the lower case to upper case
            str[i] = toupper(str[i]);
        }
        else if ((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            //changing the lower case to upper case
            str[i] = tolower(str[i]);
        }
    }
    printf("%s", str);
    free(str);
    return;
}
void end_program()
{
    exit(1);
}

int main()
{
    char arr[100];
    int i;
    void (*p[5])(char arr[100]);
    //function pointer

    fgets(arr, 100, stdin);
    //getting the string
    p[1] = to_upper;
    p[2] = to_lower;
    p[3] = flip;
    p[4] = end_program;
    scanf("%d", &i);
    while (i != 4)
    {
        (*p[i])(arr);
        scanf("%d", &i);
    }
    return 0;
}
