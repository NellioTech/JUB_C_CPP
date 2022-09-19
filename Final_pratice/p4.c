#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool checker(char arr[]){
    int length = strlen(arr) - 1;
    int count = 0;
    for (int x = 0 ; x < length ; x++){
        if(arr[x]>= '0' && arr[x]<= '9'){
            printf("%c\n",arr[x]);
            count ++;
        }
    }
    if ((length >= 8) && (count >=3)){
        return true;
    }
    else
        return false;
}
int main (){
    char arr[50];
    fgets(arr,sizeof(arr),stdin);
    printf("The password is:%d\n" ,checker(arr));
    //printf("%s", arr);
    return 0;
}