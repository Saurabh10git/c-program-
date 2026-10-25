// 6. Write a program to print the value of a variable i by using a pointer to pointer
//type variable

#include<stdio.h>
int main(){
int i = 2;
int* part1 = &i;
int** part2 = &part1;
printf("the address of i is %u\n",&i);
printf("the value of i is %d\n",*part1);
printf("the value of i is %d\n",**part2);
    return 0;
}