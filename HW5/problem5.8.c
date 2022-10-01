/*
CH-230-A
Problem5-8.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reading_matrix(int **arr_i, int **arr_j, int n, int m, int p)
{

    for (int i = 0; i < n; i++)
    {   // arr_i[i][j]
        // n*m
        // i*j
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr_i[i][j]);
        }
    }
    for (int j = 0; j < m; j++)
    {   // arr_j[j][k]
        // m*p
        // j*k
        for (int k = 0; k < p; k++)
        {
            scanf("%d", &arr_j[j][k]);
        }
    }
}
void print_matrix(int **arr_i, int **arr_j, int n, int m, int p)
{

    printf("Matrix A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr_i[i][j]);
            if (j == (m - 1))
            {
                // for comlumns > row
                printf("\n");
            }
        }
    }
    printf("Matrix B:\n");
    for (int j = 0; j < m; j++)
    {
        for (int k = 0; k < p; k++)
        {
            printf("%d ", arr_j[j][k]);
            if (k == (p - 1))
            {
                // for comlumns > row
                printf("\n");
            }
        }
    }
}
void multiplication_matrix(int **arr_i, int **arr_j, int **arr_k, int n, int m, int p)
{

    int result[n][p];

    printf("The muliplication result AxB:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < m; k++)
            {   // result[x][y] is equal to the original result[x][y] plus
                // arr_i[x][z] * arr_j [y][z]
                //
                //
                // 1 2     *  1       =    [(1*1)+(2*1)]
                // 3 4        1       =    [(3*1)+(4*1)]
                //                    =
                //                    =    | 3 |
                //                    =    | 7 |
                //
                result[i][j] += arr_i[i][k] * arr_j[j][k];
            }

            printf("%d ", result[i][j]);
            if (j == (p - 1))
            {
                printf("\n");
            }
        }
    }
}
int main()
{
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);

    int **arr_i = (int **)malloc(sizeof(int *) * n);
    //for the big table
    if (arr_i == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        arr_i[i] = (int *)malloc(sizeof(int) * m);
        //for the each elements in the big table
        if (arr_i[i] == NULL)
        {
            exit(1);
        }
    }
    int **arr_j = (int **)malloc(sizeof(int *) * m);
    //for the big table
    if (arr_j == NULL)
    {
        exit(1);
    }
    for (int j = 0; j < m; j++)
    {
        arr_j[j] = (int *)malloc(sizeof(int *) * p);
        //for the each elements in the big table
        if (arr_j[j] == NULL)
        {
            exit(1);
        }
    }
    int **arr_k = (int **)malloc(sizeof(int *) * n);
    //for the big table
    if (arr_k == NULL)
    {
        exit(1);
    }
    for (int k = 0; k < n; k++)
    {
        arr_i[k] = (int *)malloc(sizeof(int) * p);
        //for the each elements in the big table
        if (arr_i[k] == NULL)
        {
            exit(1);
        }
    }

    reading_matrix(arr_i, arr_j, n, m, p); //calling functions
    print_matrix(arr_i, arr_j, n, m, p);
    multiplication_matrix(arr_i, arr_j, arr_k, n, m, p);
    
    free(arr_i); //freeing array
    free(arr_j);
    free(arr_k);
    return 0;
}