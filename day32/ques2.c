Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    long long num;
    int count[10] = {0};
    int digit, i, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);
    if (num == 0)
    {
        count[0]++;
    }
    while (num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }
    for (i = 1; i <= 9; i++)
    {
        if (count[i] > count[maxDigit])
        {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}