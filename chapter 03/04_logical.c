#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    printf("the value of a AND b is%d\n", a && b);
    printf("the value of a OR b is%d\n", a || b);
    int c = 0;
    int d = 0;
    printf("the value of c AND d is %d\n", c && d);
    printf("the value of c OR d is %d\n", c || d);

    printf("the value NOT (a)is %d\n",!a);
    

    if(a && b){
        printf("both are true\n");
    }
    // is same as writing
    if(a){
        if(b){
            printf("both are true \nf");
        }
    }
    return 0 ;
}
