#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    // int n;
    // printf("enter the size of array\n");
    // scanf("%d", &n);
    int arr[5]={1,2,3,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int mx=0;
    for(int i=0; i<size; i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    printf("Maximum %d\n", mx);
    return 0;
}