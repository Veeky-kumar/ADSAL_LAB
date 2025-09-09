// Q3. Check Even or Odd 
// Scenario: A billing machine checks if a customer’s token number is even or odd.

#include <stdio.h>

int main() {
    int token;
    printf("Enter your token number: ");
    scanf("%d", &token);
    if (token % 2 == 0) {
        printf("Token number %d is even.\n", token);
    } else {
        printf("Token number %d is odd.\n", token);
    }
    return 0;
}