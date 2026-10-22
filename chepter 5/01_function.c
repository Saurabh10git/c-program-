#include <stdio.h>

// function prototype
int sum(int, int);

// function definition
int sum(int x, int y)
{
    printf("the sum is %d\n  ", x + y);
    return x + y;
}

int main()
{
    int a = 5;
    int b = 7;

    int c = sum(a, b); // function call
    printf("the sum is %d\n", c);
    // printf("the sum is %d\n", c);

    int a1 = 25;
    int b1 = 77;

    int c1 = sum(a1, b1); // function call
    printf("the sum is %d\n", c1);
    // printf("the sum is %d\n", c1);

    return 0;
}