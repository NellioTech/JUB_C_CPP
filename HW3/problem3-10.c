/*
CH-230-A
Problem3-10.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
float product(float a, float b)
{
    int product = a * b; // create a local varaible that have the number of a*b;
    return product;
}
void productbyref(float a, float b, float *p){
    *p = a*b; 
    // the address of p that contains the information of p is equal to a * b
    return;
}
void modifybyref(float *a, float *b){
    *a += 3;
    *b +=11;
    return;
}

int main()
{
    float x, y,p; 
    // p is the number that's going to store the value of a*b;
    scanf("%f", &x);
    scanf("%f", &y);
    printf ("The product of x and y is:%f\n",product(x,y));
    
    productbyref(x,y,&p);    //calling the function that gets the result by reference
    printf ("The product of x and y is:%f\n",p);
    modifybyref(&x,&y); 
    //calling the function that modifty the value by reference
    printf ("The new values of and b is:%f and %f\n",x,y);
}