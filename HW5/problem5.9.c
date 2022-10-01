/*
CH-230-A
Problem5-9.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reading_matrix(int ***arr, int rows, int columns, int depth)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            for (int k = 0; k < depth; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    return;
}
void print_matrix(int ***arr, int **brr, int *crr, int rows, int columns, int depth)
{
    for (int i = 0; i < rows; i++)
    {
        printf("Section %d:\n", i+1 );
        for (int j = 0; j < depth; j++)
        {   
        
            for (int k = 0; k < columns; k++)
            {
                printf("%d ", brr[k][i]);
                if (k == ((columns-1) ))
                {
                    printf("\n");
                }
            }
        }
    }
    return;
}
int main()
{
    int rows, columns, depth;
    scanf("%d%d%d", &rows, &columns, &depth);
    int ***arr = (int ***)malloc(sizeof(int *) * rows);
    if (arr == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int **)malloc(sizeof(int *) * columns);
        if (arr[i] == NULL)
        {
            exit(1);
        }
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = (int *)malloc(sizeof(int *) * depth);
            if (arr[i][j] == NULL)
            {
                exit(1);
            }
        }
    }
    reading_matrix(arr, rows, columns, depth);
    print_matrix(arr,*arr, **arr,rows, columns, depth);

    return 0;
}