/*
CH-230-A
Problem5-1.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

void print_triangle(int upper_base, char ch)
{
    for (int x = 0; x < upper_base; x++)
    {
        for (int y = 0; y < upper_base - x; y++)
        {
            // inorder to print the form from highest base
            // to lowerest base, the second for loops
            // condition have to be y < the desire base
            // minus x (which will increment by 1 everytime)
            printf("%c", ch);
        }
        printf("\n");
    }
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char ch;
    scanf("%c", &ch);
    print_triangle(n, ch); // calling the function
    return 0;
}
