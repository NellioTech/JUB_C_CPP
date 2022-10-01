/*
CH-230-A
Problem8-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[50];
    FILE *fp = fopen("chars.txt", "r");
    // open the file in reading mode
    if (fp == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }
    FILE *new = fopen("codesum.txt", "w");
    // create a file name codesum.txt in writing mode
    if(new == NULL){
        printf("Cannot create file!\n");
        exit(1);
    }
   //scaning the array that fp points to 
   // scanning the string 
   fscanf(fp,"%s",arr);
   fprintf(new,"The sum of the two chars as ASCII value is: %d",arr[0]+arr[1]);
   //printing position 0 and 1 in ASCII value
   fclose(new);
   fclose(fp);
   return 0;
}