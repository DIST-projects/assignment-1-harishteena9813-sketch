#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    char name[50];
    float mark;
};

int main()
{
    struct Student *ptr;
    int n;
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    ptr = (struct Student *)malloc(n * sizeof(struct Student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\nEnter student details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &(ptr + i)->id);

        printf("Enter name: ");
        scanf("%s", (ptr + i)->name);

        printf("Enter mark: ");
        scanf("%f", &(ptr + i)->mark);
    }

    printf("\nStudent details before modification:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nID: %d\n", (ptr + i)->id);
        printf("Name: %s\n", (ptr + i)->name);
        printf("Mark: %.2f\n", (ptr + i)->mark);
    }

    for (i = 0; i < n; i++)
    {
        (ptr + i)->mark = (ptr + i)->mark + 5;
    }

    printf("\nStudent details after modification:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nID: %d\n", (ptr + i)->id);
        printf("Name: %s\n", (ptr + i)->name);
        printf("Mark: %.2f\n", (ptr + i)->mark);
    }

    free(ptr);

    return 0;
}
