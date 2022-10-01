/*
CH-230-A
Problem4-11.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int countinsensitive(char *str, char c)
{
    int count_num = 0;
    if (c >= 'a' && c <= 'z')
   //lower case 
    {
        for (int x = 0; x < strlen(str); x++)
        {
            str[x] = tolower(str[x]);
            if (str[x] == c)
            {
                count_num++;
            }
        }
    }
    else if (c >= 'A' && c <= 'Z')
     //capital case
    {
        for (int x = 0; x < strlen(str); x++)
        {
            str[x] = toupper(str[x]);
            if (str[x] == c)
            {
                count_num++;
            }
        }
    }
    else
    //case for other case
    {
        for (int x = 0; x < strlen(str); x++)
        {
            if (str[x] == c)
            {
                count_num++;
            }
        }
    }

    return count_num;
}
int main()
{
    char *str = (char *)malloc(sizeof(char) * 50);
    //dynamic memory allocation
    if (str == NULL)
    {
        printf("error in generation memeory\n");
        exit(1);
    }
    char c;
    fgets(str, 50, stdin);
    //getting the character
    int length = strlen(str);
    // find the length of the string
    char *str2 = (char *)malloc(sizeof(char) * length);
    //dynamic memory allocation with the size of first string
    if (str2 == NULL)
    {
        printf("error in generation memeory\n");
    }

    strcpy(str2, str);
    //copy the content in str to str2
    printf("%s", str2);
    printf("enter letter to find:");

    char line[20];
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &c);
    printf("%c", c);

    int count_num = countinsensitive(str2, c);
    printf("The character '%c' occurs %d times", c, count_num);
    free(str);
    free(str2);
    return 0;
}