#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a, b, c;
    printf("enter a, b and c values \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("a is the greatest %d\n", a);
    }else if(b>a && b>c){
        printf("b is the greatest %d\n", b);
    }else{
        printf("c is the greatest %d\n", c);
    }
    return 0;
}