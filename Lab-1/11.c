#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    printf("enter number\n");
    scanf("%d", &n);
    int sum =0;
    while(n!=0){
        int digit = n%10;
        sum += digit;
        n /= 10;
    }
    printf("sum of digits is %d\n", sum);

    return 0;
}