#include<stdio.h>
#include<stdlib.h>
void two_greatest(int *arr, int n, int *first, int *second){
    *first = arr[0];
    *second = arr[1];
    for (int x = 0 ; x < n ;x++){
        if (*first < arr[x]){
            *second = *first ; 
            *first = arr[x];
        }
        else if (*second < arr[x] && *first != arr[x]){
            *second = arr[x];
        }
    }
}

int main (){
    int num;
    int first;
    int second;
    scanf ("%d",&num);
    int *arr = (int*)malloc(sizeof(int)* num); 
    if (arr == NULL){
        printf ("error in gernating memory\n");
        exit (1);
    }
    for (int x = 0 ; x < num ; x++){
        scanf ("%d", &arr[x]);
    }
    for (int x = 0 ; x < num ; x++){
        printf ("entered:%d\n", arr[x]);
    }
    two_greatest(arr,num, &first,&second);
    printf ("The greatest:%d\nThe second greatest:%d\n", first,second);
    free (arr);
    return 0;
}