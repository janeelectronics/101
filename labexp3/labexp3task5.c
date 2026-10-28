#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;

    printf("Enter marks for 3 subjects (out of 100): ");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    if (mark1 < 50 || mark2 < 50 || mark3 < 50) {
        printf("Status: FAIL\n");
        printf("Remark: Student has failed due to scoring less than 50 in one or more subjects.\n");
    } else {
        average = (mark1 + mark2 + mark3) / 3.0;
        printf("Average Marks: %.2f\n", average);
        printf("Status: PASS\n");

        if (average >= 90) {
            printf("Remark: Excellent performance! Outstanding grade.\n");
        } else if (average >= 75) {
            printf("Remark: Good job! Satisfactory performance.\n");
        } else {
            printf("Remark: Passed, but needs improvement.\n");
        }
    }

    return 0;
}