#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Prompt user for input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Calculate Fahrenheit using floating-point math
    fahrenheit = (celsius * 1.8) + 32;

    // Print the result with 2 decimal places
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}
