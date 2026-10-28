def main():
    marks_input = input("Enter marks for 3 subjects separated by space (out of 100): ")
    mark1, mark2, mark3 = map(float, marks_input.split())

    if mark1 < 40 or mark2 < 40 or mark3 < 40:
        print("Status: FAIL")
        print("Remark: Student has failed due to scoring less than 40 in one or more subjects.")
    else:
        average = (mark1 + mark2 + mark3) / 3.0
        print(f"Average Marks: {average:.2f}")
        print("Status: PASS")

        if average >= 80:
            print("Remark: Excellent performance! Outstanding grade.")
        elif average >= 60:
            print("Remark: Good job! Satisfactory performance.")
        else:
            print("Remark: Passed, but needs improvement.")

if __name__ == "__main__":
    main()