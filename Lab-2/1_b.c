#include<stdio.h>
#include<stdlib.h>

int rec_sum(int i, int n,int arr[]){
    if(i==n)return 0;
    int res = arr[i]+rec_sum(i+1,n,arr);
    return res;
}

int main(){
    int n;
    printf("enter size\n");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("sum is %d", rec_sum(0,n,arr));
    return 0;
}