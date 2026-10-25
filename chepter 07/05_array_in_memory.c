#include <stdio.h>
int main()
{
    int marks[5];
    printf("enter markls of 5 students\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the adddress of marks at index is %u\n is  %d\n", i, &marks[i]);

    }
    return 0;
}
