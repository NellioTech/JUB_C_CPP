/*
CH-230-A
Problem2-9.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
 #include <stdio.h>
int main()
{
    char enter;
    scanf("%c",&enter);
    if ((enter >= 'a' && enter <= 'z')||(enter >= 'A' && enter <= 'Z'))
    //checking if it's a letter
    {
        printf ("%c is a letter\n",enter);
    }
    else if (enter >= '0' && enter <= '9')
    //character in digit is 0-9
    {
        printf ("%c is a digit\n",enter);
    }
    else{
         printf ("%c is some other symbol\n",enter);
    }
    return 0;
}