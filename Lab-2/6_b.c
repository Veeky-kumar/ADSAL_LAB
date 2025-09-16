#include <stdio.h>

int linearSearchSentinel(int arr[], int n, int key) {
    int last = arr[n - 1];
    arr[n - 1] = key;
    int i = 0;
    while (arr[i] != key) i++;
    arr[n - 1] = last;
    if (i < n - 1 || arr[n - 1] == key) return i;
    return -1;
}

int main() {
    int arr[] = {101, 203, 305, 407, 509};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter customer ID to search: ");
    scanf("%d", &key);
    int idx = linearSearchSentinel(arr, n, key);
    if (idx != -1) printf("Found at index %d\n", idx);
    else printf("Not found\n");
    return 0;
}