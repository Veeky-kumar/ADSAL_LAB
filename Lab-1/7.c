#include<stdio.h>
int main()
{
    int fib1 = 0, fib2 = 1, next, n;
    printf("enter the number of terms\n");
    scanf("%d", &n);
    printf("fibonacci series:\n");
    for(int i=0;i<n;i++){
        if(i<=1){
            next = i;
            printf("%d\n", next);
        }else{
            next = fib1 + fib2;
            fib1 = fib2;
            fib2 = next;
            printf("%d\n", next);
        }
    }
    return 0;
}