#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d", &num);
    int temp = num, len=0;
    while(temp!=0){ 
        temp  /= 10;
        len++;
    }
    printf("the no. of digits in %d is %d\n", num, len);

    return 0;
}