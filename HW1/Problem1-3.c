/*
CH-230-A
Problem1-3.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    float result;
    /*The result of the division*/
    float a = 5.0;
    //int b = 13.5;
    float b =13.5 ;
    /* since 13.5 is a numebr with a demical, 
       charachter type float should be used */
    result = a / b;
    printf("The result is %f\n", result);
    /*since the parameter to be return is a float so 
      the format specification %f should be used*/
    return 0;
}