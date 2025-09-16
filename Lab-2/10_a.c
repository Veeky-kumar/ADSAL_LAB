#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isPalindromeStr(int num) {
    char str[20];
    sprintf(str, "%d", num);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
        if (str[i] != str[len - 1 - i])
            return 0;
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    if(isPalindromeStr(&n))
    printf("palindrome");
    else printf("not palindrome");
    return 0;
}