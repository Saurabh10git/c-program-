//Write a program to find whether a year entered by the user is a leap year or not.Take
    //year as an input from the user.

#include <stdio.h>

    int main()
{
    printf("Enter your :\n");
    scanf("%d", &year);

    if (year % 4 == &&year % 100 !|| year % 400 == 0)
    {
        printf("This is leap yeaar");
    }
    else
    {

        printf("this is not leap ");
    }

    return 0;
}