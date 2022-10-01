/*
CH-230-A
Problem6-7.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
 
void set3bits(unsigned char n,  int x, int y, int z) {
//please see problem 6.6 to see the note for this algorithm
    for (int i = 0; i <=7; i++) {
        if (n & (128 >> i)) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    printf("\n");
    printf("After setting the bits: " );
    n = n| (1 << x); 
    // uses << because the first number to be printed is the last position
    // 0000 0000 
    // ________^ is the 0th postion

    // e.g. 0 | 0 = 0
    //      1 | 0 = 1
    //      0 | 1 = 1
    //      1 | 1 = 1
    n |= (1 << y); //same as above
    n |= (1 << z);
    for (int i = 0; i <=7; i++) {
        if (n & (128 >> i)) { 
            printf("1");
        }
        else {
            printf("0");
        } 
    }
} 

 int main (){
    unsigned char ch;
    int a,b,c;// postion wanted to set
    scanf("%c", &ch);
    scanf("%d%d%d", &a, &b, &c);
    printf("The decimal representation is: %d\n", ch);
    printf ("The binary representation is: ");
    set3bits(ch,a,b,c);
    printf("\n");
}