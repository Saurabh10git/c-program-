#include <stdio.h>
int main()
{
    int i = 72;
    int *j = &i;
    int k = 66;
    printf("the address of i is %p \n ", &i); // if you want to check address in integer then write %u
    printf("the address of i is %p \n ", j);
    printf("the address of i is %p\n ", &k);

    printf("the value at address  of j is %d\n ", *j);

    return 0;
}