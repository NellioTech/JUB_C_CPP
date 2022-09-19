#include <stdio.h>
void print(int arr[30][30], int n)
{
    printf("Matrix:\n");
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
}
void diagonal(int arr[30][30], int n){
    printf("main diagonal:\n");
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if(row > col)
                printf("%d ", arr[row][col]);
        }
    }
    printf("\n");
}
void sec_diagonal(int arr[30][30], int n){
    printf("secondary diagonal:\n");
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row + col >= n)
                printf("%d ", arr[row][col]);
        }
    }
    printf("\n");
}

int main()
{
    int arr[30][30];
    int n;
    scanf("%d", &n);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }
    print(arr, n);
    diagonal(arr,n);
    sec_diagonal(arr,n);
    return 0;
}