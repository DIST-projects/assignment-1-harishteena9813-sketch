#include <stdio.h>

void calculate(int a, int b, int *sum, int *product)
{
    *sum = a + b;
    *product = a * b;
}

int main()
{
    int a, b;
    int sum, product;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    calculate(a, b, &sum, &product);

    printf("\nSum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}
