// 7. Write a program using function to print the following pattern (first n lines):
//*********Co
#include <stdio.h>
int main()
{
    int n = 3;
    for (int i = 0; i < 3; i++)
    {
        /* this loop runs  from 0 to 2  */
        // if i=0 -->print 1 stars
        // if i=1 -->print 3 stars
        // if i=2 -->print 5 stars
        // n0_of_satrs =(2*i+1)

        // this for loop prints (2*1+1)stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        //this printf a new line 
        printf("\n");
    }
    return 0;
}