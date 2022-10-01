/*
CH-230-A
Problem3-2.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    char ch;
    printf ("enter the charater:");
    scanf("%c",&ch);
    int n;
    printf ("enter the integer:");
    scanf ("%d",&n);
    for (int x =1 ; x<= n+1 ; x++){
        /* the reason why n need to be added by 1 is
         that we are printinf the orginal character also*/
        printf ("%c\n",ch);
        ch-=1;
    }
    return 0;
}
