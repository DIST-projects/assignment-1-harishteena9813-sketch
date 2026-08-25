#include <stdio.h>

int main()
{
    float arr[100];
    int n;
    int i;
    int j;
    int min;
    float temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d floating-point numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    printf("\nOriginal array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    printf("\n\nSorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
