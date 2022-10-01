/*
CH-230-A
Problem5-10.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void count_down(int n) // recursive function
{
    if (n == 1 ) // if b reached 1 it's going to print 1
    {
        printf("Counting down:%d\n",n);
        return ;
    }
    else
    {
        printf("Counting down:%d\n",n );
        // need to print the original value first
        count_down(n-1); 
        // calling the function itself
        // The value of n will be one unit lesser eachtime
        return ;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    count_down(n);
    return 0;
}