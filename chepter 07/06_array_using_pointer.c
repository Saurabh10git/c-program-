#include <stdio.h>
int main()
{
    int marks[] = {12, 45, 66, 78};

    int *ptr = &marks[0];
    // int *ptr = marks; // same as int* ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("the marks at index %d\n is %d\n ", i, marks[i]);
    }

    // int *ptr = marks; // same as int* ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        //printf("the marks at index %d\n is %d\n ", i, marks[i]);
        printf("the marks at index %d\n is %d\n ", i, *ptr);
        ptr++;
    }

    return 0;
}