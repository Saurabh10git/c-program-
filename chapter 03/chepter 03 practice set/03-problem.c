/*3. Calculate income tax paid by an employee to the government as per the slabs
    mentioned below : Income Slab Tax 2.5 -
                          5.0L 5 %
                    5.0L -
                          10.0L 20 %
                              Above 10.0L 30 %*/
#include <stdio.h>

int main()
{
    long int income;
    double tax = 0;

    printf("Enter income:\n");
    scanf("%ld", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (income - 500000);
    }
    else
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (1000000 - 500000) + 0.30 * (income - 1000000);
    }

    printf("The total tax need to pay is %.2f\n", tax);

    return 0;
}