
#include <stdio.h>

int main()
{
    int n = 10;
    int not_prime = 0;
    int i = 2;

    if (n <= 1)
    {
        not_prime = 1;
    }
    else
    {
        while (i < n)
        {
            if (n % i == 0)
            {
                not_prime = 1;
                break;
            }
            i++;
        }
    }

    if (not_prime)
    {
        printf("%d is not Prime\n", n);
    }
    else
    {
        printf("%d is Prime\n", n);
    }

    return 0;
}
