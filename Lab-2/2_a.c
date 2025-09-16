#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter number\n");
    scanf("%d", &n);
    int arr[n];
    int mx=-1e8;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        mx = (arr[i]>mx)?arr[i]:mx;
    }
    printf("max is %d\n",mx);
    return 0;
}