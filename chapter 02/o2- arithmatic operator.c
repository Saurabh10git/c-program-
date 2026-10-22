// arithmatic operators
#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a + b; // addition operator
    printf("the valu e of a is %d and the value of b is %d and the value of c is %d\n", a, b, c);
    // modulus operator is useds to find the remainder of a division operation. It is represented by the symbol '%'. When you use the modulus operator between two integers, it returns the remainder after dividing the first integer by the second integer. For example, if you have two integers x and y, then x % y will give you the remainder when x is divided by y.
    printf("the remainder when a is divided by b %d\n:", a % b);
    return 0;

    // this does not work for exponentiation in c
    // int d = a^b ;
}