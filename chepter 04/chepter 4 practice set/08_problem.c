// 8. Write a program to calculate the factorial of a given number using a for loop.
#include <stdio.h>
int main()
{
    //8!= 8*7*6*5*4*3*2*1:
    //5!= 5*4*3*2*1:
    //n! = n*(n-1)*(n-2)*...*3*2*1
    //n!=1*2*3*...*(n-1)*
    //0!
    int product = 1;
    int n = 4;
    //printf("Enter a number: ");
    //scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial of %d is %d\n", n, product);
    return 0;
}
