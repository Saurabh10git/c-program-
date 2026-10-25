// 7. Try problem 3 using call by value and verify that it does not change the value of the variable
// 3. Write a program to change the value of a variable to ten times its current value.
#include <stdio.h>
void change_to_thirty_times(int );

void change_to_thirty_times(int a)
{
    a = a * 30;
}

int main()
{

    int x = 45;
    printf("the value of x is %d\n", x);
    change_to_thirty_times(x);
    printf("the value of x is %d\n", x);

    return 0;
}