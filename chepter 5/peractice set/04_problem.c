// 4. Write a program using recursion to calculate n
// t  h element of Fibonacci series.

#include <stdio.h>

// Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, ...

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 7;

    printf("The %dth Fibonacci element is %d\n",
           n, fibonacci(n));

    return 0;
}
