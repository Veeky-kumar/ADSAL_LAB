// Q15. Scenario – Electricity Bill Calculation
// Scenario: A company charges electricity bill as:
// • For first 100 units: ₹5/unit
// • Next 100 units: ₹7/unit
// • Above 200 units: ₹10/unit

#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } else {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    printf("Total bill: %.2f\n", bill);
    return 0;
}