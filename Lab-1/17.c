// Q17. Fibonacci Series using Recursion
// Problem: Print the first n Fibonacci numbers using recursion.

#include <stdio.h>

void printFibonacci(int n) {
    if (n <= 0) return;
    static int a = 0, b = 1;
    printf("%d ", a);
    int next = a + b;
    a = b;
    b = next;
    printFibonacci(n - 1);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printFibonacci(n);
    return 0;
}