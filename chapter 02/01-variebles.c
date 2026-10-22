//Type Declaration Instructions is topic name in c programming language. In C programming, variables are used to store data values. Before using a variable, it must be declared with a specific data type. The data type determines the kind of data that can be stored in the variable, such as integers, floating-point numbers, characters, etc.
#include <stdio.h>

int main()
{

    int i = 10; // variable declaration and initialization'i' with a value of 10
    int j = i;  // variable declaration and initialization'j' with a value of 1
    int a = 20, b = 30, c = 30, d = 40;
    //%d is a format specifier used in C to print an integer value. It is used in the printf function to indicate that the corresponding argument should be treated as an integer.
    //%d is for integer values, %f is for floating-point values, %c is for character values, and %s is for string values. These format specifiers
    printf("the value of i is %d and the value of j is %d\n", i, j);  // printing the value of i and j
    printf("the value of a is %d, and the value of b is %d\n", a, b);      // printing the value of a, b, and c
    printf("the value of c is %d, and the value of d is %d\n", c, d); // printing the value of c and d

    return 0;
}