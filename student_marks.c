#include <stdio.h>

int main()
{
    char name[50];
    int marks[5];
    int total = 0;
    float average;
    char grade;

    printf("====================================\n");
    printf("   STUDENT MARKS MANAGEMENT SYSTEM\n");
    printf("====================================\n");

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("\nEnter marks for 5 subjects:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    average = total / 5.0;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\n====================================\n");
    printf("           STUDENT RESULT\n");
    printf("====================================\n");

    printf("Student Name : %s\n", name);
    printf("Total Marks  : %d / 500\n", total);
    printf("Average      : %.2f\n", average);
    printf("Grade        : %c\n", grade);

    if (average >= 40)
        printf("Result       : PASS\n");
    else
        printf("Result       : FAIL\n");

    printf("====================================\n");

    return 0;
}
