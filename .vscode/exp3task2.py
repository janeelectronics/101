def main():
    subjects = int(input("Enter the total number of subjects: "))
    total_grade_points = 0.0

    for i in range(1, subjects + 1):
        marks = float(input(f"Enter marks for subject {i} (0-100): "))

        if 97 <= marks <= 100:
            print("Grade: A+ | Point: 4.0")
            total_grade_points += 4.0
        elif marks >= 90:
            print("Grade: A  | Point: 4.0")
            total_grade_points += 4.0
        elif marks >= 85:
            print("Grade: A- | Point: 3.7")
            total_grade_points += 3.7
        elif marks >= 80:
            print("Grade: B+ | Point: 3.3")
            total_grade_points += 3.3
        elif marks >= 75:
            print("Grade: B  | Point: 3.0")
            total_grade_points += 3.0
        elif marks >= 70:
            print("Grade: B- | Point: 2.7")
            total_grade_points += 2.7
        elif marks >= 65:
            print("Grade: C+ | Point: 2.3")
            total_grade_points += 2.3
        elif marks >= 60:
            print("Grade: C  | Point: 2.0")
            total_grade_points += 2.0
        elif marks >= 57:
            print("Grade: C- | Point: 1.7")
            total_grade_points += 1.7
        elif marks >= 55:
            print("Grade: D+ | Point: 1.3")
            total_grade_points += 1.3
        elif marks >= 52:
            print("Grade: D  | Point: 1.0")
            total_grade_points += 1.0
        elif marks >= 50:
            print("Grade: D- | Point: 0.7")
            total_grade_points += 0.7
        else:
            print("Grade: F  | Point: 0.0")
            total_grade_points += 0.0

    gpa = total_grade_points / subjects
    print(f"\nYour Semester GPA: {gpa:.2f}")

if __name__ == "__main__":
    main()