#include <stdio.h>
int factorial(int);

// factorial(5)=5*4*3*2*1=120
// factorial(4)=4*3*2*1=24
// factorial(3)=3*2*1=6
// factorial(n)=1X2X3X4X5....n-1.Xn
// factorial(n-1)=1X2X3X4X5...X(n-1)

int factorial(int n)
{
    // fatoral(n)=factorial(n-1)*n
    if (n == 1 || n == 0) //base condition 
    {
        return  1;
    }
    return factorial(n - 1) * n;
}
int main()
{
    int a = 8;
    printf("the factorial of %d is %d\n", a, factorial(a));
    return 0;
}