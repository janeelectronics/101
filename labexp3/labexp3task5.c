#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;

    printf("Enter marks for 3 subjects (out of 100): ");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    if (mark1 < 40 || mark2 < 40 || mark3 < 40) {
        printf("Status: FAIL\n");
        printf("Remark: Student has failed due to scoring less than 40 in one or more subjects.\n");
    } else {
        average = (mark1 + mark2 + mark3) / 3.0;
        printf("Average Marks: %.2f\n", average);
        printf("Status: PASS\n");

        if (average >= 80) {
            printf("Remark: Excellent performance! Outstanding grade.\n");
        } else if (average >= 60) {
            printf("Remark: Good job! Satisfactory performance.\n");
        } else {
            printf("Remark: Passed, but needs improvement.\n");
        }
    }

    return 0;
}