/*
CH-230-A
Problem3-7.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c){ // n = the number enter for height
                                      // m = the number entered for base
    for (int height = 1; height <= n; height++){
        for (int base = 1; base <= m; base++){
            printf ("%c",c);
        }
        printf("\n");
        m++; 
        /* since for every next line of trapezoid an additional symbol is needed, 
          the base need to be 1 unit greater everyline */
    }
    return;
}

int main()
{
    int height, base;
    char c;
    scanf("%d", &height);
    scanf("%d", &base);
    getchar(); 
    scanf("%c", &c);
    print_form(height, base, c); 
    //calling the void function that prints the form
    return 0;
}