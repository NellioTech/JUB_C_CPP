/*
CH-230-A
Problem4-2.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char arr[50];
    // an array that scores 50 character
    fgets(arr, 50, stdin);
    //getting character from the keyborad
    int length = strlen(arr);
    // find the lenght of the arr and store it in int length
    for (int i = 0; i < (length-1); i++){
        // each time length of the array will be 1 unit lesser
        printf("%c\n", arr[i]);
        if (i % 2 == 0 && i!= length-2){
            printf(" ");
            // if the array is divisbile by 2 it gives a space 
        }
    }
    return 0;
}