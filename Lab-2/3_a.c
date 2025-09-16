#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s", str);
    int n = strlen(str);
    for(int i=0;i<n/2;i++){
        char temp = str[i];
        str[i]= str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("reversed string is %s\n", str);
    return 0;
}