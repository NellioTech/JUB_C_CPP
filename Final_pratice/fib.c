#include <stdio.h>
int fibonacci(int n)
{
   if(n<=1){
       return n;
   }
   else{
       return (fibonacci(n-1)+fibonacci(n-2));
   }
}
int factorial(int n)
{
   if(n == 1 || n==0){
       return 1;
   }
   else{
       return n * factorial(n-1);
   }
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("The fibonacci of %d is:%d\n", num, fibonacci(num));
    printf("The factorial of %d is:%d\n", num, factorial(num));
    return 0;
}