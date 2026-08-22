#include <stdio.h>

int main()
{
    int late_days, fine;

    printf("Enter the number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 5)
    {
        fine = late_days * 2;
        printf("Library Fine = ₹%d\n", fine);
    }
    else if (late_days <= 10)
    {
        fine = (5 * 2) + (late_days - 5) * 4;
        printf("Library Fine = ₹%d\n", fine);
    }
    else if (late_days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + (late_days - 10) * 6;
        printf("Library Fine = ₹%d\n", fine);
    }
    else
    {
        printf("Membership Cancelled.\n");
    }

    return 0;
}