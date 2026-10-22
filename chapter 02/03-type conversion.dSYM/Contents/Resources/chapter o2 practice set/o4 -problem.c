#include <stdio.h>

int main()
{
    // Explain step by step evaluation of 3*x/y-z+k, where x = 2, y = 3, z = 3, k = 1.
    int x = 2, y = 3, z = 3, k = 1;
    float e = 3 * x / y - z + k; // 3.0f * 2 / 3 - 3 + 1 = 0.0f
    //3 * x / y - z + k;
   // 6 / y - z + k;
    //2 - z + k;

   // -1 + 1;
    //0;

    printf("the value of e is  %f\n", e);
    return 0;
}