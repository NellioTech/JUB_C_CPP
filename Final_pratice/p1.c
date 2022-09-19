#include <stdio.h>
int main()
{
    int n;
    char ch = 'A';
    scanf("%d", &n);
    for (int x = 0 ; x < n ; x++){
        for (int y = 0 ; y <= x ; y++){
            printf("%c", ch+y);
        }
        printf("\n");
    }
    return 0;
}
