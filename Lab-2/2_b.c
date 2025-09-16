#include<stdio.h>
#include<stdlib.h>


void insertionSort(int array[], int size){
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key; 
   }
}

int main(){
    int arr[5] = {2,1,3,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    printf("largest is %d\n", arr[n-1]);
    return 0;
}