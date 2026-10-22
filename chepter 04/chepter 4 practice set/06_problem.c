// 6. Write a program to implement program 5 using for and do-while loop.
#include <stdio.h>
int main()
{
    //usimg do loop :
    //int i = 1;
    //int sum = 0;
    //do 
    //{
        //sum += i;
        //i++;
    //}while(i <= 10)

    //using for loop :
    int sum = 0;
    for (size_t i = 1; i <= 10; i++)
    {
        sum += i;
    }
    
    printf("this sum of first 10 natural 10 numbers is %d\n", sum);
    return 0;
}