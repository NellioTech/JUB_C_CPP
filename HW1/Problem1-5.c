/*
CH-230-A
Problem1-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int x=2138;
    printf ("x=%9d\n",x); 
    /* numbers after the percentage are the number 
       of spaces that numbers will be printed */
    float y=-52.358925;
    printf("y=%11.5f\n",y);
    /* numbers after the percentage arand before the type is the 
       floating point of the number (need a demical in b/w) */
    char z='G';
    printf ("z=%c\n",z);
    double u=61.295339687;
    printf ("u=%.7lf\n",u);
    return 0;
}