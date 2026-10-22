//repeat tje 8 using while loop:
#include <stdio.h>
int main(){
    // 8!= 8*7*6*5*4*3*2*1:
    // 5!= 5*4*3*2*1:
    // n! = n*(n-1)*(n-2)*...*3*2*1
    // n!=1*2*3*...*(n-1)*
    // 0!
    int product = 1;
    int n = 5;
    // scanf("%d", &n);
    int i = 1;
    while (i<=n)
    {
        product *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", n, product);
    return 0;
}