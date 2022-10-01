/*
CH-230-A
Problem1-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int x = 17;
    int y = 4;
    float result = x / (float)y;
    //changing the y from integer to float in the calculation
    printf("x=%d\n", x); // uses %d b/c the result is an integer
    printf("y=%d\n", y);
    printf("sum=%d\n", x + y);
    printf("product=%d\n", x * y);
    printf("difference=%d\n", x - y);
    printf("division=%f\n", result);
    printf("remainder of division=%d\n", x % y); //use % for finding remainder
    return 0;
}
