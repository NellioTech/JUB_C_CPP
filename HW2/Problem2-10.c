/*
CH-230-A
Problem2-10.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n < 1)
    {
        printf("enter a non-zero positive value: \n");
        //checking if the number input is less than n
        scanf("%d", &n);
    }
    do
    {
        printf("1 day = 24 hours\n");//for singular day
        break; // breaks from loop
    } while (1);

    for (int x = 2; x <= n; x++)
    
    // x = 2 because it is plural
    /* the third parameter will done done at the end of for loop*/
    {
        printf("%d days = %d hours\n", x, x * 24);
       
    }
    return 0;
}
