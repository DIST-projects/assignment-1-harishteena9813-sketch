#include <stdio.h>

int main()
{
    int source[100];
    int destination[100];

    int *ptrSource;
    int *ptrDestination;

    int n;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &source[i]);
    }

    ptrSource = source;
    ptrDestination = destination;

    for (i = 0; i < n; i++)
    {
        *(ptrDestination + i) = *(ptrSource + i);
    }

    printf("\nSource array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptrSource + i));
    }

    printf("\n\nDestination array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptrDestination + i));
    }

    printf("\n");

    return 0;
}
