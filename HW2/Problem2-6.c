/*
CH-230-A
Problem2-6.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    double x,y;
    scanf ("%lf %lf",&x,&y);
    double *ptr_one = &x;   //creating *ptr_one and points to x
    double *ptr_two=&x;    //creating *ptr_two and points to x
    double *ptr_three=&y; //creating *ptr_three and points to y
    printf ("address of ptr_one:%p\n",ptr_one);
    printf ("address of ptr_two:%p\n",ptr_two);
    printf ("address of ptr_three:%p\n",ptr_three);
    
    return 0;
}