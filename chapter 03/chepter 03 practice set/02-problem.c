// 2. Write a program to determine whether a student has passed or failed.To pass, a
// student requires a total of 40 %
// and at least 33 % in each subject.Assume there are three subjects and take the marks as input from the user

#include <stdio.h>

int main()
{
    // int value_of_sarabh_marks;
    // printf("%d",value_of_sarabh_marks)
    int marks1, marks2, marks3;
    printf("enter marks1\n");
    scanf("%d", &marks1);
    printf("enter marks2\n");
    scanf("%d", &marks2);
    printf("enter marks3\n");
    scanf("%d", &marks3);
    printf("the marks is %d %d and %d \n ", marks1, marks2, marks3 );
    if (marks1 < 33 || marks2 < 33|| marks3 < 33)
    {
        printf("you are failed due to ess marks in indivisual subjects\n");
    }else if((marks1+marks2+marks3) / 3 < 40){

        printf("you are failed due to ess percentage\n");
    }else{
        printf("you are passed!");
    }
    return 0;
}