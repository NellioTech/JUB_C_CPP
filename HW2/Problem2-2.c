/*
CH-230-A
Problem2-2.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    char x;
    scanf ("%c",&x);
    printf ("character=%c\n",x);
    printf ("decimal=%d\n",x);
    printf ("octal=%o\n",x); // use %o for octal 
    printf ("hexadecimal=%x\n",x); // use %x for octal 
    return 0;
}