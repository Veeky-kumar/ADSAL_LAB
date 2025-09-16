#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num;
    printf("enter number to find %d\n", num);
    scanf("%d",num);
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            printf("found it on %d",arr[i]);
            break;
        }
    }
    return 0;
}