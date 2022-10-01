/*
CH-230-A
Problem8-7.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char arr[50];
    char arr2[50];
    FILE *file1 = fopen("text1.txt", "r");
    if (file1 == NULL)
    {
        printf("Cannot open text1.txt\n");
        exit(1);
    }
    FILE *file2 = fopen("text2.txt", "r");
    if (file2 == NULL)
    {
        printf("Cannot open text2.txt\n");
        exit(1);
    }
    FILE *merge = fopen("merge12.txt", "w+");
    if (merge == NULL)
    {
        printf("Cannot create/open merge12.txt\n");
        exit(1);
    }

    while (fgets(arr, sizeof(arr), file1))//reading the file line by line
    {                                    // stored in arr 
        fputs(arr, merge);
        // put the info of arr into merge (which is merge12.txt)
    }
    fprintf(merge, "\n");
    while (fgets(arr2, sizeof(arr2), file2))//reading the file line by line
    {
        fputs(arr2, merge);
    }
    fclose(merge);
    fclose(file2);
    fclose(file1);
    return 0;
}