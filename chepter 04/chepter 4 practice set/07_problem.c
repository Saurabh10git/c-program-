// 7. Write a program to calculate the sum of the numbers occurring in the multiplication table of 8 (consider 8 × 1 to 8 × 10).
#include <stdio.h>
int main(){
int sum = 0;
for(size_t i = 1; i <= 10; i++)
{
    sum += 8 * i;
}
printf("The sum of the table of 8 in the multiplication table of 8 is: %d\n", sum);
return 0;
}