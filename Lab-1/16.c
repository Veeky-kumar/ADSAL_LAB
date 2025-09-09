#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main()
{
    printf("enter the number\n");
    int num;
    scanf("%d", &num);
    printf("factorial of %d is %d\n", num,fact(num));

    return 0;
}