Q2: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 1.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numerator = 3;
    int denominator = 4;

    for (i = 2; i <= n; i++)
    {
        sum = sum + (float)numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 2;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}