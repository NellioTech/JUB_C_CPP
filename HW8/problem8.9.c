/*
CH-230-A
Problem8-9.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d", &x);
    getchar();
    char arr[x][64];

    FILE *file = fopen("output.txt", "wb");
    // wb is writing in binary mode
    if (file == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    for (int i = 0; i < x; i++)
    {
        fgets(arr[i], 100, stdin);
        arr[i][strlen(arr[i]) - 1] = '\0';
    }
    while(!feof(file)){
      
    }
   
    

    return 0;
}