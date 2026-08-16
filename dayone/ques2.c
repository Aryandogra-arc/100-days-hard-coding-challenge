#include <stdio.h>

int main() {
    double num1, num2;
    double sum, difference, product, quotient;

    // Prompt user for input
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform arithmetic calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Display basic results
    printf("\n--- Results ---\n");
    printf("Sum:         %.2lf\n", sum);
    printf("Difference:  %.2lf\n", difference);
    printf("Product:     %.2lf\n", product);

    // Safely check for division by zero
    if (num2 != 0.0) {
        quotient = num1 / num2;
        printf("Quotient:    %.2lf\n", quotient);
    } else {
        printf("Quotient:    Undefined (Cannot divide by zero)\n");
    }

    return 0;
}
