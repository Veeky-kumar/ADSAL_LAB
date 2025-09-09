#include<stdio.h>
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
    printf("the reversed number is \n");
    while(num!=0){
        int digit = num % 10;
        printf("%d", digit);
        num /= 10;
    }
    return 0;
}