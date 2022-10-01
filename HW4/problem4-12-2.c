/*
CH-230-A
Problem4-12.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void replaceAll(char *str, char c, char e)
{
    int n = strlen(str);
    for (int x = 0 ; x < n ; x++){
        if(str[x]==c){
            str[x]=e ;
        }
    }
}
int main()
{
    char string[80];
    char toBereplace;
    scanf("%c",&toBereplace);
    getchar();
    char replaceTo;
    scanf("%c",&replaceTo);
    getchar();
    while (1){
        fgets (string,80,stdin);
        if(strcmp(string,"stop\n")== 0){
            break;
        }
        printf ("before replacement:%s",string);
        replaceAll(string,toBereplace,replaceTo);
        printf ("After replacement:%s",string);
    }
    return 0;
}
