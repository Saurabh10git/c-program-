#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)

    {
        if (i == 5)
        {
            //break; // exit the loop now
            continue;//skip this itration now and go to next itration

        }
        printf("i is%d\n", i);
    }
    printf("for loop is don");
    return 0;
}