#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float mark1, mark2, mark3, average;

    cout << "Enter marks for 3 subjects (out of 100): ";
    cin >> mark1 >> mark2 >> mark3;

    if (mark1 < 40 || mark2 < 40 || mark3 < 40) {
        cout << "Status: FAIL\n";
        cout << "Remark: Student has failed due to scoring less than 40 in one or more subjects.\n";
    } else {
        average = (mark1 + mark2 + mark3) / 3.0;
        cout << fixed << setprecision(2);
        cout << "Average Marks: " << average << "\n";
        cout << "Status: PASS\n";

        if (average >= 80) {
            cout << "Remark: Excellent performance! Outstanding grade.\n";
        } else if (average >= 60) {
            cout << "Remark: Good job! Satisfactory performance.\n";
        } else {
            cout << "Remark: Passed, but needs improvement.\n";
        }
    }

    return 0;
}