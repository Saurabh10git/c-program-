// 3. Write a function to calculate force of attraction on a body of mass 'm' exerted by
// earth.Consider g = 9.8m / s².
float force(float);

float force(float mass)
{
    return mass * 9.8;
}

#include <stdio.h>
int main()
{
    int m = 45;
    printf("the value of force is %f\n",force(m));
    
}