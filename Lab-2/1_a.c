#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter number\n");
    scanf("%d", &n);
    int sales[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d", &sales[i]);
        sum+=sales[i];
    }
    printf("total sales is %d\n", sum);

    return 0;
}