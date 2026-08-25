#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr;
    int i;

    ptr = arr;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\nOriginal array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    for (i = 0; i < 5; i++)
    {
        *(ptr + i) = *(ptr + i) + 10;
    }

    printf("\n\nModified array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
