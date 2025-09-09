#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int reverse(int num){
    int rev = 0, temp = num;
    while(temp!=0){
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    return rev == num;
}

int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    if(reverse(num)){
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }

    return 0;
}