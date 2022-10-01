/*
CH-230-A
Problem1-1.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    double result;
    /* The result of our calculation ;*/
    result = (3 + 1) / 5.0;
    /* when using the type double, it is nessnary to make the result a 
    demical number number the complier will perform an integer calculation */
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}