/*
CH-230-A
Problem6-3.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
// let a = 3 , b = 10, c = 1
// MIN(3,10) -> is 3 less than 10 -> yes
// So returns 3
#define MIN2(a, b, c) ((a) < (MIN(b, c)) ? (a) : (MIN(b, c)))
// MIN2(3,10,1) -> is 3 less than answer of MIN(10,1) -> NO
// So returns the answer of MIN(10,1) -> 1
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define MAX2(a, b, c) ((a) > (MAX(b, c)) ? (a) : (MAX(b, c)))

#define MIDRANGE(a, b, c) (((MIN2(a, b, c)) + (MAX2(a, b, c))) / 2.0)

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    float answer = MIDRANGE(x, y, z);
    printf("The mid-range is: %.6f\n", answer);
    return 0;
}
