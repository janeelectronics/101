#include <stdio.h>

int main() {
    int subjects, i;
    float marks, total_grade_points = 0.0, gpa;

    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    for (i = 1; i <= subjects; i++) {
        printf("Enter marks for subject %d (0-100): ", i);
        scanf("%f", &marks);

        if (marks >= 97 && marks <= 100) {
            printf("Grade: A+ | Point: 4.0\n");
            total_grade_points += 4.0;
        } else if (marks >= 90) {
            printf("Grade: A  | Point: 4.0\n");
            total_grade_points += 4.0;
        } else if (marks >= 85) {
            printf("Grade: A- | Point: 3.7\n");
            total_grade_points += 3.7;
        } else if (marks >= 80) {
            printf("Grade: B+ | Point: 3.3\n");
            total_grade_points += 3.3;
        } else if (marks >= 75) {
            printf("Grade: B  | Point: 3.0\n");
            total_grade_points += 3.0;
        } else if (marks >= 70) {
            printf("Grade: B- | Point: 2.7\n");
            total_grade_points += 2.7;
        } else if (marks >= 65) {
            printf("Grade: C+ | Point: 2.3\n");
            total_grade_points += 2.3;
        } else if (marks >= 60) {
            printf("Grade: C  | Point: 2.0\n");
            total_grade_points += 2.0;
        } else if (marks >= 57) {
            printf("Grade: C- | Point: 1.7\n");
            total_grade_points += 1.7;
        } else if (marks >= 55) {
            printf("Grade: D+ | Point: 1.3\n");
            total_grade_points += 1.3;
        } else if (marks >= 52) {
            printf("Grade: D  | Point: 1.0\n");
            total_grade_points += 1.0;
        } else if (marks >= 50) {
            printf("Grade: D- | Point: 0.7\n");
            total_grade_points += 0.7;
        } else {
            printf("Grade: F  | Point: 0.0\n");
            total_grade_points += 0.0;
        }
    }

    gpa = total_grade_points / subjects;
    printf("\nYour Semester GPA: %.2f\n", gpa);

    return 0;
}