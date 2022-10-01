/*
CH-230-A
Problem6-2.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#define check(x) (x) & 1 


// to check iteger in binary 
// e.g. 6 
// divided the number by 2 step by step until the quotient becomes 0
// write the remainder in reverse
// 6/2 = 3 ... 0
// 3/2 = 1 ... 1
// 1/2 = 0 ... 1
// binary representation of 6 is 110

int main()
{
    unsigned char x;
    scanf("%c", &x);
    printf("The decimal representation is: %d\n", x);
    printf("The least significiant bit is: %d\n", check(x));
    // the number on the futherest right = LSB
    // F = 70 in decimal
    // F = 1000110 in binary 
    // __________^ is the LSB 
    return 0;
}
