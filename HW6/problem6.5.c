/*
CH-230-A
Problem6-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
 
void bits(unsigned char n) {
  
    int digits;
    unsigned char copy = n;
    // 2 in binary is: 0011 0010 (50 in decimal)
    for (digits = 0; copy > 0; copy >>= 1)
        // each >> will reduce the balue of copy by half and shirt right

        // digit = 0, 50 > 0, digit = 1, 2 >> 1 =  0001 1001 (25 in decimal)
        // digit = 1, 25 > 0, digit = 2, 2 >> 1 =  0000 1100 (12 in decimal)
        // digit = 2,  6 > 0, digit = 3, 2 >> 1 =  0000 0110 ( 6 in decimal)
        // digit = 3,  3 > 0, digit = 4, 2 >> 1 =  0000 0011 ( 3 in decimal)
        // digit = 4,  4 > 0, digit = 5, 2 >> 1 =  0000 0001 ( 1 in decimal)
        // digit = 5,  1 > 0, digit = 6, 2 >> 1 =  0000 0000 ( 0 in decimal)
        // digit = 6,  0 !> 0, END OF LOOP
        digits++; 
    for (int i = 0; i < digits; i++)
    {
        // 6 digits will be printed
        if (n & (1 << i))
        {
            // printing backward will be   1 << i
            // printing  forward will be 128 >> i

            // 1 << 0    0000 0001
            // 2         0011 0010
            //           ----------
            // 2 & 1     0000 0000
            //___________________^

            // 1 << 1    0000 0010
            // 2         0011 0010
            //           ---------
            // 2 & 1     0000 0010
            //__________________^

            // output at i = 0  0 
            // output at i = 1  01  
            // total output     010011
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}

int main() {
    unsigned char ch;
    scanf("%c", &ch);
    printf("The decimal representation is: %d\n", ch);
    printf("The backwards binary representation is: ");
    bits(ch);
    printf("\n");
    return 0;
}