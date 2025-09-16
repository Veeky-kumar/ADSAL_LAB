#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int isPalindromeMath(int num) {
    if (num < 0) return 0;
    int rev = 0, orig = num;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev == orig;
}
int main()
{
    int n;
    scanf(" enter num to reverse %d", &n);
    if(isPalindromeMath(n))
    printf("palindrome");
    else
        printf("not palindrome");
    
    return 0;
}