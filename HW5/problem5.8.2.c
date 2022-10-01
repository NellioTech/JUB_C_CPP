
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reading_matrix(int **arr, int **arr1, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &arr1[j][k]);
        }
    }
}
void printing_matrix(int **arr, int **arr1, int n, int m)
{
    printf("Matrix A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
            if (j == (m - 1))
            {
                printf("\n");
            }
        }
    }
    printf("Matrix B:\n");
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < m; k++)
        {
            printf("%d ", arr1[j][k]);
            if (k == (m - 1))
            {
                printf("\n");
            }
        }
    }
}
void multiplication(int **arr, int **arr1, int **arr2, int n, int m, int p)
{
    printf("The multiplication of AxB\n");
    int result[n][p];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                result[i][j] += arr[i][k] * arr1[j][k];
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
    scanf("%d %d %d ", &n, &m, &p);
    int **arr = (int **)malloc(sizeof(int *) * n);
    if (arr == NULL)
    {
        exit(1);
    }
    for (int x = 0; x < n; x++)
    {
        arr[x] = (int *)malloc(sizeof(int *) * m);
        if (arr[x] == NULL)
        {
            exit(1);
        }
    }
    int **arr1 = (int **)malloc(sizeof(int *) * m);
    if (arr1 == NULL)
    {
        exit(1);
    }
    for (int x = 0; x < m; x++)
    {
        arr1[x] = (int *)malloc(sizeof(int *) * p);
        if (arr1[x] == NULL)
        {
            exit(1);
        }
    }
    int **arr2 = (int **)malloc(sizeof(int *) * n);
    if (arr2 == NULL)
    {
        exit(1);
    }
    for (int x = 0; x < p; x++)
    {
        arr2[x] = (int *)malloc(sizeof(int *) * p);
        if (arr[x] == NULL)
        {
            exit(1);
        }
    }
    reading_matrix(arr, arr1, n, m);
    printing_matrix(arr, arr1, n, m);
    multiplication(arr, arr1, arr2, n, m, p);
}