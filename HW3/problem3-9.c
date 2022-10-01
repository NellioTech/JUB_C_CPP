/*
CH-230-A
Problem3-9.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
double sum25(double v[], int n)
{
    double sum = v[3] + v[6];
    if (n <= 5){ // checking if the number input is less than or equal to 5
        return -111;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    double v[20]; // a double array that stores 20 elemts max
    for (int x = 1; x <= n; x++){
        scanf("%lf", &v[x]); // scanning each array
    }
    if (n > 5){
        printf("sum=%lf\n", sum25(v, n));
    }
    else{ // if the number enter is not greater than five 
         // then the following meesage will be printed
        printf("One or both positions are invalid\n");
    }
    return 0;
}