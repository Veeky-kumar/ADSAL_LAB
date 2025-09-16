#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("factorial is %d",fact);
    return 0;
}