// 5. Write a program to determine whether a character entered by the user is lowercase or
// not.
// https://en.cppreference.com/cpp/language/ascii
#include <stdio.h>

int main()
{

    char ch = 'd';
    printf("The charcter is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97,122
    if (ch >= 97 && ch <= 122)
    {
        printf("this character is lowercase\n");
    }
    else
        ("this character is not lowercase \n");
    return 0;
}
