#include <stdio.h>
#include <stdbool.h>
bool odd(unsigned char data){
    /*if((data ^ 1) == (data+1))
    // the bitwise ^ will increment
    // the num by 1 if it's even
    //decrement by one if it's odd
        return false;
    else 
        return true;
    */
    
    if((data|1) > data )
        return false;
        // the bitwise | will increment the 
        // num by one if it's even
        // stays the same if is odd
    else 
        return true;
    
}

int main(){
    char input;
    scanf("%c",&input);
    printf("is odd:%d\n", odd(input));
}