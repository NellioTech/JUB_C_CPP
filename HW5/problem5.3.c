/*
CH-230-A
Problem5-3.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int count_lower(char *str)
{
    int lower = 0;
    char *ptr = str;
    // creating an pointer that points to
    // the string in main function
    int length = strlen(ptr);
    // set length to be the length of the pointer
    //that contains the information of str
    for (int x = 0; x < length; x++)
    {
        if ((*(ptr + x) >= 'a') && (*(ptr + x) <= 'z'))
        { // checking if the character is in
            // the range of a ~ z
            lower = lower + 1;
        }
    }
    return lower;
}
int main()
{
    char arr[50];
    while (1)
    {
        printf("Enter string:");
        fgets(arr, 50, stdin);
        if (strcmp(arr, "\n") == 0)
        // if the "value" of th string entered
        // is equal to \n then the loops break
        {
            printf("Nothing is entered\n");
            break;
        }
        printf("You entered:%s", arr);
        printf("There is %d lowercase in the string\n", count_lower(arr));
        //calling and printing the function
    }
    return 0;
}