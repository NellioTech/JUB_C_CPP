/*
CH-230-A
Problem3-10.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
float product(float a, float b)
{
    float result_product = a * b;
    // create a local varaible that have the number of a*b;
    return result_product;
}
void productbyref(float a, float b, float *p)
{
    *p = a * b;
    // the address of p that contains the information of p is equal to a * b
}
void modifybyref(float *a, float *b)
{
    *a += 3;
    *b += 11;
}
int main()
{
    float first_number, second_number;
    float pass_reference; 
    /* pass_reference is going to be pass to the function productbyref
       which uses its address/reference to store information of a*b   */
    scanf("%f", &first_number);
    scanf("%f", &second_number);
    printf("The product of x and y is:%f\n", product(first_number, second_number));
    productbyref(first_number, second_number, &pass_reference); 
    //calling the function using & to indicate the information passed is the address
    printf("The product of x and y is:%f\n", pass_reference);
    modifybyref(&first_number, &second_number);
    //calling the function be using & to indicate the information passed is the address
    printf("The modifty value of x and y is:%f and %f", first_number, second_number);
    return 0;
}