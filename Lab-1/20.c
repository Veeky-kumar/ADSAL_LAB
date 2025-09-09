// Q20. Recursive Binary Search
// Scenario: A library system searches for a book ID in a sorted array of IDs. Implement binary
// search using recursion.
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] > target) return binarySearch(arr, low, mid - 1, target);
    return binarySearch(arr, mid + 1, high, target);
}

int main() {
    int bookIDs[] = {101, 102, 103, 104, 105};
    int n = sizeof(bookIDs) / sizeof(bookIDs[0]);
    int target;
    printf("Enter the book ID to search: ");
    scanf("%d", &target);
    int result = binarySearch(bookIDs, 0, n - 1, target);
    if (result != -1) {
        printf("Book found at index: %d\n", result);
    } else {
        printf("Book not found.\n");
    }
    return 0;
}
