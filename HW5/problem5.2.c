/*
CH-230-A
Problem5-2.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
void divby5(float arr[], int size)
{

    for (int x = 0; x < 6; x++)
    { //setting the value store in
        // each position to be divided 5
        arr[x] = arr[x] / size;
    }
    return;
}
int main()
{
    float constant[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int divide = 5;
    printf("Before:\n");
    for (int x = 0; x < 6; x++)
    {
        printf("%.3f ", constant[x]);
        // use . to specify on the decimal position
    }
    //printf("\n");
    printf("\nAfter:\n");
    divby5(constant, divide); //calling the function
    for (int x = 0; x < 6; x++)
    {
        printf("%.3f ", constant[x]);
        // use . to specify on the decimal position
    }
    printf("\n");
    return 0;
}