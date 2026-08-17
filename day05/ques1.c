#include <stdio.h>

int main(void) {
    float principal, simple_interest, rate, time;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    simple_interest = (principal * time * rate) / 100;

    printf("The simple interest is: %.2f\n", simple_interest);

    return 0;
}