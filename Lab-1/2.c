#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a, b;
    printf("enter your first value \n");
    scanf("%d", &a);
    printf("enter your second value \n");
    scanf("%d", &b);
    a^=b;
    b^=a;
    a^=b;
    printf("swapped values are %d and %d \n", b, a);
    return 0;
}