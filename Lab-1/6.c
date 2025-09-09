#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    int result = 1;
    for(int i=1; i<=num; i++){
        result *= i;
    }
    printf("factorial of %d is %d\n", num, result);
    return 0;
}