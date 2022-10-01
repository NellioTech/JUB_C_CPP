/*
CH-230-A
Problem6-1.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#define SWAP(a,b,int){int temp = a ; a = b ; b = temp ;}
// creating a integer temp = 0
// let a = 1 and b = 2
//
// temp is now 1
// a is now 2
// b is now 1
//
int main()
{
    int a, b;
    double x, y;
    scanf("%d%d", &a, &b);
    scanf("%lf%lf", &x, &y);
    SWAP(a, b, int);
    // using macro from #define SWAP
    // {int temp = a ; a = b ; b = temp ;}
    SWAP(x, y, double);
    // using macro from #define SWAP
    // {float temp = x ; x = y ; y = temp ;}
    printf("After swapping:\n");
    printf("%d\n%d\n%.6lf\n%.6lf\n", a, b, x, y);
    return 0;
}
