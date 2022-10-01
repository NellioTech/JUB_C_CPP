/*
CH-230-A
Problem6-6.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
 
void bits(unsigned char n) {
// please see the end for the notes...
    for (int i = 0; i <=7; i++) {
        if (n & (128 >> i)) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
} 
int main() {
    unsigned char ch;
    scanf("%c", &ch);
    printf("The decimal representation is: %d\n", ch);
 
    printf("The binary representation is: ");
    bits(ch);
    printf("\n");
 
    return 0;
}
// 128 in binary is:  1000 0000
//   2 in binary is:  0011 0010

    // 128 >> 0               1000 0000
    //   2                    0011 0010
    //                       ------------
    //   2 & 128              0000 0000

    // 128 >> 1               0100 0000
    //   2                    0011 0010
    //                       ------------
    //   2 & 128              0000 0000

    // 128 >> 2               0010 0000
    //   2                    0011 0010
    //                       ------------
    //   2 & 128              0010 0000

    
//----------------------------------------   
//  n & 128 >> 0 : 0     
//  n & 128 >> 1 : 00
//  n & 128 >> 2 : 001     
//  n & 128 >> 3 : 0011
//  n & 128 >> 4 : 0011 0
//  n & 128 >> 5 : 0011 00
//  n & 128 >> 6 : 0011 001
//  n & 128 >> 7 : 0011 0010
