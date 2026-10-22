// 1. Write a program using function to find average of three numbers.
#include <stdio.h>
float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a + b + c) / 3.0;
}

int main()
{
    int a= 5,b=6,c=7;
printf("the average is a,b,c %f\n",average(a,b,c));
return 0;

}