#include <stdio.h>
#include <stdlib.h>

int getMax(int arr[], int n)
{
    int max = arr[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

void countingSort(int arr[], int n, int exp)
{
    int output[100];
    int count[10] = {0};
    int i;

    for (i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }

    for (i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n)
{
    int max;
    int exp;

    if (n <= 0)
    {
        return;
    }

    max = getMax(arr, n);

    for (exp = 1; max / exp > 0; exp = exp * 10)
    {
        countingSort(arr, n, exp);
    }
}

int main()
{
    int arr[100];
    int negative[100];
    int positive[100];

    int n;
    int negativeCount = 0;
    int positiveCount = 0;

    int i;
    int index = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < 0)
        {
            negative[negativeCount] = abs(arr[i]);
            negativeCount++;
        }
        else
        {
            positive[positiveCount] = arr[i];
            positiveCount++;
        }
    }

    radixSort(negative, negativeCount);
    radixSort(positive, positiveCount);

    printf("\nSorted array:\n");

    for (i = negativeCount - 1; i >= 0; i--)
    {
        printf("%d ", -negative[i]);
    }

    for (i = 0; i < positiveCount; i++)
    {
        printf("%d ", positive[i]);
    }

    printf("\n");

    return 0;
}
