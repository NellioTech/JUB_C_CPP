/*
CH-230-A
Problem2-8.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    if (input % 2 == 0 && input % 7 == 0)
    // check if the remainder of division is 0
    //both have to stand
    {
        printf("The number is divisible by 2 and 7\n");
    }
    if (input % 2 != 0 || input %7!=0)
    // check if the remainder of division is 0
    // only need one to stand
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
/* else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }  
*/
    return 0;
}