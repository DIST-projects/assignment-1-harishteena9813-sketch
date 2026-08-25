#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;
    int **dptr;

    ptr = &num;
    dptr = &ptr;

    printf("Value of num       = %d\n", num);
    printf("Address of num     = %p\n", (void *)&num);

    printf("\nValue of ptr       = %p\n", (void *)ptr);
    printf("Address of ptr     = %p\n", (void *)&ptr);
    printf("Value of *ptr      = %d\n", *ptr);

    printf("\nValue of dptr      = %p\n", (void *)dptr);
    printf("Address of dptr    = %p\n", (void *)&dptr);
    printf("Value of *dptr     = %p\n", (void *)*dptr);
    printf("Value of **dptr    = %d\n", **dptr);

    return 0;
}
