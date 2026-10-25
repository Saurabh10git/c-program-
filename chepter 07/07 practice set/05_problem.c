// 5. Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int n)
{
    int temp;

    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    printarray(arr, 6);

    reverse(arr, 6);

    printarray(arr, 6);

    return 0;
}
