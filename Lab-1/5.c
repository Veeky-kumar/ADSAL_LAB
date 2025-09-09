// Q5. Simple Calculator (switch case)

#include <stdio.h>
int main() {
    printf("calculator\n");
    int a, b;
    char op;
    printf("enter your first value \n");
    scanf("%d", &a);
    printf("enter your second value \n");
    scanf("%d", &b);
    printf("enter operator \n");
    scanf(" %c", &op);

    switch (op) {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d\n", a, b, a / b);
        break;
    default:
        printf("Invalid operator\n");
        break;
    }
    return 0;
}