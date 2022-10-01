/*
CH-230-A
Problem4-10.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){
    *prod = a*b;
    *div = a/b;
    *pwr = pow(a,(float)b); // a is the base and b is the power
                            // need to cast to float 
                            // because it is decimal calculation
    *invb = 1/b;
}

int main()
{
    float a, b, prod, div, pwr, invb;//setting numbers
    scanf("%f", &a);//getting value for a
    scanf("%f", &b);//getting value for b
    proddivpowinv(a, b, &prod, &div, &pwr, &invb); // use & to pass by reference
    printf ("Product:%f\ndivision:%f\n",prod,div); // printing answer
    printf("a^b:%f\n1/b:%f\n",pwr,invb);
    return 0;
}