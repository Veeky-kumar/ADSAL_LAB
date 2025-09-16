#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fact(int n){
    if(n==0)return 1;
    return n*fact(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("factorial is %d",fact(n));

    return 0;
}