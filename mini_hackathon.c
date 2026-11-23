#include <stdio.h>

int main()

{
    int n, i = 1;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    float classTotal = 0;
    float classAverage;
    float highest = 0;
    int topper = 0;

    printf("===== STUDENT RESULT AND GRADE ANALYZER =====\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    while (i <= n)
  
    {
        printf("\n--- Student %d ---\n", i);

        printf("Enter marks of Subject 1: ");
        scanf("%f", &m1);

        printf("Enter marks of Subject 2: ");
        scanf("%f", &m2);

        printf("Enter marks of Subject 3: ");
        scanf("%f", &m3);

        printf("Enter marks of Subject 4: ");
        scanf("%f", &m4);

        printf("Enter marks of Subject 5: ");
        scanf("%f", &m5);

        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5;
        scanf("%f", &m5);

total = m1 + m2 + m3 + m4 + m5;
percentage = total / 5;

printf("\nTotal marks = %.2f / 500\n", total);
printf("Percentage = %.2f%%\n", percentage);

if (m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m5 < 35)

{
    printf("Status = FAIL\n");
    printf("Grade = F\n");
}

else

{
    printf("Status = PASS\n");

    if (percentage >= 90)
        printf("Grade = A+\n");
    else if (percentage >= 80)
        printf("Grade = A\n");
    else if (percentage >= 70)
        printf("Grade = B\n");
    else if (percentage >= 60)
        printf("Grade = C\n");
    else if (percentage >= 50)
        printf("Grade = D\n");
    else
        printf("Grade = E\n");
}

if (percentage > highest)

{
    highest = percentage;
    printf("Grade = E\n");
}

if (percentage > highest)

{
    highest = percentage;
    topper = i;
}

classTotal = classTotal + percentage;
i++;

}

classAverage = classTotal / n;

printf("\n===== CLASS PERFORMANCE REPORT =====\n");
printf("Class Topper = Student %d\n", topper);
printf("Topper Percentage = %.2f%%\n", highest);
printf("Class Average = %.2f%%\n", classAverage);

return 0;
}