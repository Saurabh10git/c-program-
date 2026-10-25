// 8. Repeat problem 7 for a custom input given by the user.
// 7. Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and
// 9 respectively
#include <stdio.h>

int main()
{int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int arr[3][10];
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        {
            for (int j = 0; j < 10; j++)

                arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        {
            for (int j = 0; j < 10; j++)

                printf("the value of arr[i][j] %d\n", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}