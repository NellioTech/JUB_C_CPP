/*
CH-230-A
Problem7-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void to_lower(char arr[100])
{
   int len = strlen(arr);
   char *str = malloc(sizeof(char)*len);
   strcpy(str,arr);
   int len2= strlen(str);
   for(int x = 0 ; x < len2 ;x++ ){
       str[x]= tolower(str[x]);
   }
   printf("%s",str);
   free(str);
   return;
}
void to_upper(char arr[100])
{
    int len = strlen(arr);
    char *str = malloc(sizeof(char) * len);
    strcpy(str, arr);
    for (int x = 0; x < strlen(str); x++)
    {
        str[x] = toupper(str[x]);
    }
    printf("%s", str);
    free(str);
     return;

}
void flip_letters(char arr[100])
{
    int len = strlen(arr);
    char *str = malloc(sizeof(char) * len);
    strcpy(str, arr);
    for (int x = 0; x < strlen(str); x++)
    {
        if (str[x] >= 'a' && str[x] <= 'z')
        {
            str[x] = toupper(str[x]);
        }
        else if (str[x] >= 'A' && str[x] <= 'Z')
        {
            str[x] = tolower(str[x]);
        }
    }
    printf("%s", str);
    free(str);
}
void end()
{
    exit(1);
}
int main()
{
   char arr[100];
   int input ;
   fgets(arr,100,stdin);
   scanf("%d",&input);
   void (*p[5])(char arr[100]);
   p[1]= to_upper;
   p[2]= to_lower;
   p[3]=flip_letters;
   p[4]=end;
   while(1){
       (p[input])(arr);
       scanf("%d",&input);
   }
   return 0;
}