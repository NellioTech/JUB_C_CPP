/*
CH-230-A
Problem3-6.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/


#include <stdio.h>
float to_pounds(int kg, int g){
    float pounds = (kg*2.2)+(g*0.0022);
    // 1 kg = 2.2pounds
    // 1  g = 0.0022 pounds
    return pounds;
}

int main()
{
    int kg,g;
    scanf ("%d",&kg);
    scanf ("%d",&g);
   // float conversion = to_pounds(kg,g);
    printf ("Result of conversion: %f\n",to_pounds(kg,g)); 
    //calling the function that returns the calculation of pounds  
    return 0;
}