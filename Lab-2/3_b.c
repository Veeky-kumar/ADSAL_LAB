#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    char str_rev[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    for(int i=0;i<n;i++){
        str_rev[i] = str[n-i-1];
    }
    str_rev[n] = '\0';
    printf("reversed string is %s\n ",str_rev);
    return 0;
}