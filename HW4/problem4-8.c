/*
CH-230-A
Problem4-8.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
void matrix(int arr[30][30], int n)
{
    int i, j;
    printf("The entered matrix is:\n");
    for (i = 0; i < n && n < 30; i++)
    {
        for (j = 0; j < n && j < 30; j++)
        {
            printf("%d ", arr[i][j]);
            //printfing the array out
            //need a space after each number
            // example:
            // 1 2 3
            // 4 5 6
            // 7 8 9 
        }
        printf("\n");
        // printf a line when ever j exceeds number of row/columns wanted
    }
    return;
}
void secondary_diagonal(int arr[30][30], int n)
{
    int i, j;
    printf("Under the secondary diagonal:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j >= n)
            {
                // when i becomes 1 and j becomes 2
                // it is going to print arr[rows][columns]
                // where rows = i == 1
                // where coloumns = j == 2
                // it is going to print arr [1][2]
                // in the above example it's going to print '6'

                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}
int main()
{
    int arr[30][30];
    // an 2d array that stoes at most 30*30
    int n;
    scanf("%d", &n);
    //getting the numbers of rows and columns
    for (int rows = 0; rows < n && n < 30; rows++)
    {
        // checking if the number wanted for rows is less than 30
        for (int columns = 0; columns < n && columns < 30; columns++)
        {
            // checking if the number wanted for columns is less than 30
            scanf("%d", &arr[rows][columns]);
        }
    }
    matrix(arr, n);   // calling the void matrix function
    secondary_diagonal(arr, n); // calling the void diagonal function
    return 0;
}
