// 1. Write a program to print the address of a variable. Use this address to get the value of
//the variable.

#include <stdio.h>
    int main(){
int i = 2;
int* ptr = &i;
printf("the address of i is %u\n",&i);
printf("the value of ptr is is %d\n", *ptr);
return 0;
}