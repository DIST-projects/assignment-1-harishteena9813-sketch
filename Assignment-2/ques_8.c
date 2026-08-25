#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float grade;
};

int main()
{
    struct Student students[100];
    struct Student temp;
    int n;
    int i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("\nEnter student details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Grade: ");
        scanf("%f", &students[i].grade);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (students[i].grade > students[j].grade)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudents sorted by grade:\n");

    printf("\nID\tName\tGrade\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n",
               students[i].id,
               students[i].name,
               students[i].grade);
    }

    return 0;
}
