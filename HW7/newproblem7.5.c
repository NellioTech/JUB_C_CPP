/*
CH-230-A
Problem7-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int ascending(const void *num, const void *num2)
{
    const int *a = (const int *)num;
    const int *b = (const int *)num2;
    if (*a > *b)
    {
        return 1;
    }
    else
        return -1;
}
int decending(const void *num, const void *num2)
{
    const int *a = (const int *)num;
    const int *b = (const int *)num2;
    if (*a < *b)
    {
        return 1;
    }
    else
        return -1;
}
int main()
{
    int num;
    char choice;
    scanf("%d", &num);
    int *arr = (int *)malloc(sizeof(int) * num);
    for (int x = 0; x < num; x++)
    {
        scanf("%d", &arr[x]);
    }
    scanf("%c", &choice);
    while (choice != 'e')
    {
        scanf("%c", &choice);
        if (choice == 'a')
        {
            qsort(arr, num, sizeof(int), ascending);
            for (int x = 0; x < num; x++)
            {
                printf("%d ", arr[x]);
            }
            printf("\n");
            scanf("%c", &choice);
        }
        else if (choice == 'd'){
             qsort(arr, num, sizeof(int), decending);
            for (int x = 0; x < num; x++)
            {
                printf("%d ", arr[x]);
            }
            printf("\n");
        }
    }
    free(arr);
    return 0;
}