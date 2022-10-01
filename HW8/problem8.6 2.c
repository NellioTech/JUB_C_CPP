/*
CH-230-A
Problem8-6.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE *double_1 = fopen("double1.txt", "r");
    if (double_1 == NULL)
    {
        printf("cannot open double1.txt\n");
        exit(1);
    }
    FILE *double_2 = fopen("double2.txt", "r");
    if (double_2 == NULL)
    {
        printf("cannot open double2.txt\n");
        exit(1);
    }
    double x, y;
    fscanf(double_1, "%lf", &x);
    //scanning a doube from file and let it equal x
    fscanf(double_2, "%lf", &y);
    //scanning a doube from file and let it equal y
    FILE *result = fopen("results.txt", "w");
    //create a file name results.txt if it doesn't exist 
    // in write mode
    if (result == NULL)
    {
        printf("cannot open results.txt\n");
        exit(1);
    }
    fprintf(result, "The sum of two doubles: %lf\n", x + y);
    fprintf(result, "The difference of two doubles: %lf\n", x - y);
    fprintf(result, "The product of two doubles: %lf\n", x * y);
    fprintf(result, "The divison of two doubles: %lf", x / y);
    fclose(result);
    fclose(double_1);
    fclose(double_2);
    return 0;
}