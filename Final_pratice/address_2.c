#include <stdio.h>
int main()
{

    char a_string[] = "This is a string\0";
    char *p;
    int count = 0;
    printf("The string: %s\n", a_string);
    p = a_string;
    //This would directly lead to 0% for the exercise! 
    while (*p != '\0')
    {
        p++;
        count++;
    }
    printf("The string has %d characters.\n", count);
    printf("Printing the reverse string: ");
    p--;
    while (count > 0)
    {
        printf("%c", *p);
        p--;
        count--;
    }
    printf("\n");
    return 0;
}
