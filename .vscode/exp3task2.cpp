#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int subjects, i;
    float marks, total_grade_points = 0.0, gpa;

    cout << "Enter the total number of subjects: ";
    cin >> subjects;

    for (i = 1; i <= subjects; i++) {
        cout << "Enter marks for subject " << i << " (0-100): ";
        cin >> marks;

        if (marks >= 97 && marks <= 100) {
            cout << "Grade: A+ | Point: 4.0\n";
            total_grade_points += 4.0;
        } else if (marks >= 90) {
            cout << "Grade: A  | Point: 4.0\n";
            total_grade_points += 4.0;
        } else if (marks >= 85) {
            cout << "Grade: A- | Point: 3.7\n";
            total_grade_points += 3.7;
        } else if (marks >= 80) {
            cout << "Grade: B+ | Point: 3.3\n";
            total_grade_points += 3.3;
        } else if (marks >= 75) {
            cout << "Grade: B  | Point: 3.0\n";
            total_grade_points += 3.0;
        } else if (marks >= 70) {
            cout << "Grade: B- | Point: 2.7\n";
            total_grade_points += 2.7;
        } else if (marks >= 65) {
            cout << "Grade: C+ | Point: 2.3\n";
            total_grade_points += 2.3;
        } else if (marks >= 60) {
            cout << "Grade: C  | Point: 2.0\n";
            total_grade_points += 2.0;
        } else if (marks >= 57) {
            cout << "Grade: C- | Point: 1.7\n";
            total_grade_points += 1.7;
        } else if (marks >= 55) {
            cout << "Grade: D+ | Point: 1.3\n";
            total_grade_points += 1.3;
        } else if (marks >= 52) {
            cout << "Grade: D  | Point: 1.0\n";
            total_grade_points += 1.0;
        } else if (marks >= 50) {
            cout << "Grade: D- | Point: 0.7\n";
            total_grade_points += 0.7;
        } else {
            cout << "Grade: F  | Point: 0.0\n";
            total_grade_points += 0.0;
        }
    }

    gpa = total_grade_points / subjects;
    cout << fixed << setprecision(2);
    cout << "\nYour Semester GPA: " << gpa << "\n";

    return 0;
}