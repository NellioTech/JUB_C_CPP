/*
CH-230-A
Problem3-3.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
//the function that converts cm to km
float convert (int cm){
   float convert = cm*0.00001;
   return convert; //returning the number stored in convert;
}

int main()
{
    int cm;
    scanf("%d",&cm);
    //float conversion = convert(cm);
    printf ("Result of conversion: %f\n", convert(cm));
    return 0;
}