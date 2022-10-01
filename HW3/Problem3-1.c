
/*
CH-230-A
Problem3-1.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    float x ;
    int n;
    scanf ("%f", &x);
    scanf ("%d",&n);
    //when the input is less then 1
    while(n<1){
        printf ("Input is invalid, reenter value\n");
        scanf ("%d",&n);
    }
    //for printing the float n times to the screen
    for (int y = 1 ; y<=n ; y++){
        printf ("%f\n",x);
    }
    return 0;
}
