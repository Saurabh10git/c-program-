#include <stdio.h>

int main(){
    int length , breadth ;
    //int lenght = 10 ;
    //int breaghth = 5 ;
    printf(" enter lenghth \n ");
    scanf("%d " ,&length );

     printf(" enter breadth \n ");
    scanf("%d " ,&breadth );

    printf("The area of the rectangle with length %d and breadth %d is %d", length, breadth, length * breadth);
    return 0;
}