#include <iostream>

int main() {
    int marks;

    std::cout << "Enter your marks: ";
    std::cin >> marks;

    if (marks >= 90) {
        std::cout << "Grade: A\n";
    } else if (marks >= 80) {
        std::cout << "Grade: B\n";
    } else if (marks >= 70) {
        std::cout << "Grade: C\n";
    } else if (marks >= 60) {
        std::cout << "Grade: D\n";
    } else {
        std::cout << "Grade: F\n";
    }

    return 0;
}