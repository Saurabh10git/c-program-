#include <stdio.h>

int main()
{

    int i = 5;
    printf(" the value of  i is %d \n  ", i);
    i = i + 5; // 10
    printf(" the value of  i is %d \n  ", i);

    printf(" the value of  i is %d \n  ", i++); // prtint 10
    printf(" the value of  i is %d \n  ", i);    // 11
i += 2l; // that i + 2
printf(" the value of  i is %d \n  ", i);//13

// i++ prints  i first and then increments i (post increment  operator )
// ++i increments i first and then prints i ( post increment  operator )

return 0;
}