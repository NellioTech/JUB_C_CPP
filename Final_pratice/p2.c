#include <stdio.h>
/*

Write a program which does the following:
a) reads a double from the keyboard,
b) reads a float from the keyboard,
c) reads an integer from the keyboard,
d) stores the product of these three values into the variable result,
No information should be lost.
e) prints the value of result,
f) uses a pointer r ptr to add 5 to result,
g) prints the new values twice, once by using result, once by using r ptr.
(3 points)


*/
int main()
{
    double x;
    scanf("%lf", &x);
    float y;
    scanf("%f", &y);
    int z ;
    scanf("%d",&z);
    double result = x*y*z;
    printf("%lf\n",result);
    double *r = &result;
    *r += 5;
    printf("%lf\n",result);
    printf("%lf\n", *r);

    return 0;
}