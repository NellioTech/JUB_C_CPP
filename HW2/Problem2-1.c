/*
CH-230-A
Problem2-1.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <math.h> // for pow()
int main()
{
    double d1, d2;
    scanf("%lf\n%lf", &d1, &d2);
    printf("sum of doubles=%lf\n", d1 + d2);
    printf("difference of doubles=%lf\n", d1 - d2);
    printf("square=%lf\n", pow(d1, 2)); // use for powers
                                        //d1, raise to the power of 2
    int i1, i2;
    scanf("%d\n%d", &i1, &i2);
    printf("sum of integers=%d\n", i1 + i2);
    printf("product of integers=%d\n", i1 * i2);
    getchar(); 
    /* once I push enter for the previous scanf the 
      computer assume the input is enter */
    char ch1, ch2;
    scanf("%c\n", &ch1);
    scanf("%c", &ch2);
    printf("sum of chars=%d\n", (int)ch1 + ch2);
    printf("product of chars=%d\n", (int)ch1 * ch2);
    printf("sum of chars=%c\n", ch1 + ch2);
    printf("product of chars=%c\n", ch1 * ch2);
    return 0;
}