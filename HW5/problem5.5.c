/*
CH-230-A
Problem5-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
double scalar(double v[], double w[], int n)
{
    double sp = 0;
    for (int x = 0; x < n; x++)
    {
        sp = sp + v[x] * w[x];
        //equation for scalar product
    }
    return sp;
}
void smallest(double v[], int n)
{
    double smallest = v[0];
    double position_smallest = 0;
    for (int x = 0; x < n; x++)
    {
        if (v[x] < smallest)
        {
            // checking if the v[x] is less than the current smallest
            smallest = v[x];
            position_smallest = x;
        }
    }
    printf("The smallest = %lf\n", smallest);
    printf("Position of smallest = %.lf\n", position_smallest);
}
void greatest(double v[], int n)
{
    double greatest = v[0];
    double positon_greatest = 0;
    for (int x = 0; x < n; x++)
    {
        if (v[x] > greatest)
        {   // checking if the v[x] is greater than the current greatest
            greatest = v[x];
            positon_greatest = x;
        }
    }
    printf("The largest = %lf\n", greatest);
    printf("Position of largest = %.lf\n", positon_greatest);
}

int main()
{
    int n;
    scanf("%d", &n);
    double *v = (double *)malloc(sizeof(double) * n);
    //dynamic memory allocation for v[n]
    double *w = (double *)malloc(sizeof(double) * n);
    //dynamic memory allocation for w[n]
    if (v == NULL)
    {   // checking if function is null
        exit(1);
    }
    if (w == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {    //taking inputs
        scanf("%lf", &v[i]);
    }
    for (int j = 0; j < n; j++)
    {    //taking inputs
        scanf("%lf", &w[j]);
    }

    double result = scalar(v, w, n);
    printf("Scalar product=%lf\n", result);
    smallest(v, n); //calling
    greatest(v, n);
    smallest(w, n);
    greatest(w, n);
    free(v);
    free(w);
    return 0;
}