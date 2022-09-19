#include <stdio.h>
int main()
{
    int n;
    char ch;
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    for(int x = 0 ; x < n ; x++){
        for(int y = 0 ; y <= x ; y++){
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}