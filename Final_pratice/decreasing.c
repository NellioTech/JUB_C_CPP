#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i = 0 ; i < x ; i++){
        for (int a = i ; a < x ; a++){
            printf("*");
        }
        printf("\n");
    }
}