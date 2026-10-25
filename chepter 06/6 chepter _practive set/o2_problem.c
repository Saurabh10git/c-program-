// 2. Write a program having a variable i . Print the address of i . Pass this variable to a
//function and print its address.Are these addresses the same ? Why ?

#include <stdio.h>
                                                                  int returning_5(int *ptr){
    printf("the value of ptr is %d\n",ptr);
    printf("the value at otr is %d \n",*ptr);
    return 5;
}
int main(){
int i = 2;
int* ptr= &i;
printf("the addresss of i is %d\n",&i);
returning_5(ptr);
    return 0;
}