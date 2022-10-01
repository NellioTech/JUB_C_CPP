/*
CH-230-A
Problem7-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int increasing (const void *val, const void *val2){
    //from lecture note tutorial 7, pg 13
    const int *a = (const int*)val ;
    const int *b = (const int*)val2;
    if (*a > *b){
        return 1;
    }
    else
        return -1;
}
int decreasing (const void *val, const void *val2){
       //from lecture note tutorial 7, pg 13
    const int *a = (const int*)val ;
    const int *b = (const int*)val2;
    if (*a < *b){
        return 1;
    }
    else
        return -1;

}
int main (){
    int num; //num of inputs
    char choice; // choice option
    scanf("%d",&num);//getting num
    int *arr = (int*)malloc(sizeof(int)*num);
    //dynamic allocating for the arr array
    for (int x = 0 ; x < num ; x++){
        scanf("%d",&arr[x]);
        //getting values for the array
    }
    scanf("%c",&choice);//getting choice
    while(choice != 'e'){
        scanf("%c",&choice);
        if(choice == 'a'){
              qsort(arr,num,sizeof(int),increasing);
              /*void qsort(void *base, size_t num ,size type ,
                             int(*compare)(const void *,const void *))*/
              for (int x = 0 ; x < num ; x++){
                  printf("%d ",arr[x]);
              }
              printf("\n");
              scanf("%c",&choice);
        }
        else if (choice == 'd'){
            qsort(arr,num,sizeof(int),decreasing);
              for (int x = 0 ; x < num ; x++){
                  printf("%d ",arr[x]);
              }
              printf("\n");
        }
    }
    free(arr);
}