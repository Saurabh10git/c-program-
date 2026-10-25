#include <stdio.h>
int main(){
    char i = 'A';
    int *j = &i; //j is charecter pointer;
    float k = 6.236;
    float*k1=&k;
    printf("the address of i is %p \n ", &i); // if you want to check address in integer then write %u
    printf("the address of i is %p \n ", j);
    printf("the address of i is %p\n ", &k);

    printf("the value at address  of j is %d\n ", *j);

    return 0;
}