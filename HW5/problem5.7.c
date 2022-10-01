/*
CH-230-A
Problem5-7.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    char arr2[100];
    fgets(arr, 100, stdin);
    //arr[strcspn(arr, "\n")] = 0;
    arr[strlen(arr) - 1] = '\0';
    fgets(arr2, 100, stdin);
    // arr2[strcspn(arr, "\n")] = 0;
    arr2[strlen(arr2) - 1] = '\0';

    int length = strlen(arr) + strlen(arr2) + 1;

    char *arr_combine = (char *)malloc(sizeof(char) * length);
    if (arr_combine == NULL) //check for null
    {
        exit(1);
    }
    strcat(arr_combine, arr); //combine arr to arr_combine
    strcat(arr_combine, arr2);//combine arr2 to arr_combine

    printf("Result of concatenation: %s\n", arr_combine);

    return 0;
}