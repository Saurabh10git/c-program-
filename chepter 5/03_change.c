#include <stdio.h>
int change(int a)
{
    a = 77; //misnomer;
    return a;
}
int main()
{
    int b = 22;
    b = change(b); //this value is passed to the function and the return value is assigned to b 
    printf("b is %d", b);
    return 0;
}