#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void fun(int i,int n){
    if(i>n)return ;
    printf("%d ",i);
    fun(i+1,n);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(1,n);

    return 0;
}