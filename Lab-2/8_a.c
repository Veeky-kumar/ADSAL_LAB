#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char vowel[5] = {'a','e','o','u'};
    char str[10];
    fgets(str, strlen(str), stdin);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            printf("it is vowel %c\n", str[i]);
        else
            printf("it is consonant %c\n", str[i]);
    }

    return 0;
}