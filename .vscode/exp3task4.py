def main():
    print("=== Menu-Driven Calculator ===")
    print("1. Addition (+)")
    print("2. Subtraction (-)")
    print("3. Multiplication (*)")
    print("4. Division (/)")
    
    choice = int(input("Enter your choice (1-4): "))

    if 1 <= choice <= 4:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

    if choice == 1:
        result = num1 + num2
        print(f"Result: {num1} + {num2} = {result:.2f}")
    elif choice == 2:
        result = num1 - num2
        print(f"Result: {num1} - {num2} = {result:.2f}")
    elif choice == 3:
        result = num1 * num2
        print(f"Result: {num1} * {num2} = {result:.2f}")
    elif choice == 4:
        if num2 == 0:
            print("Error: Division by zero is undefined!")
        else:
            result = num1 / num2
            print(f"Result: {num1} / {num2} = {result:.2f}")
    else:
        print("Error: Invalid menu selection.")

if __name__ == "__main__":
    main()