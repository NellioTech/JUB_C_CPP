/*
CH-230-A
Problem2-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,h,sqaure_area, rec_area,tri_area,trapezoid_area;
    scanf("%f %f %f", &a ,&b, &h);
    sqaure_area = pow(a,2);// area of square = base * base
    rec_area=a*b; // area of rectangle = base * width 
    tri_area = (a*h)/2 ; // area of triangle = base * height /2 
    trapezoid_area = (a+b)*h/2; 
    // area of rectangle = base(up)+base(low) * width /2
    printf ("square area=%f\n", sqaure_area);
    printf ("rectangle area=%f\n",rec_area);
    printf ("triangle area=%f\n",tri_area);
    printf("trapezoid area=%f\n",trapezoid_area);
    return 0;
}