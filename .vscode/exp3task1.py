def main():
    correct_pin = 1234
    balance = 5000.00

    print("--- Welcome to the ATM ---")
    entered_pin = int(input("Enter your 4-digit PIN: "))

    if entered_pin == correct_pin:
        while True:
            print("\n--- ATM Menu ---")
            print("1. Check Balance")
            print("2. Deposit Money")
            print("3. Withdraw Money")
            print("4. Exit")
            
            choice = int(input("Enter your choice: "))

            if choice == 1:
                print(f"Current Balance: {balance:.2f} TK")
            elif choice == 2:
                amount = float(input("Enter amount to deposit: "))
                if amount > 0:
                    balance += amount
                    print(f"Successfully deposited {amount:.2f} TK.")
                else:
                    print("Invalid deposit amount!")
            elif choice == 3:
                amount = float(input("Enter amount to withdraw: "))
                if 0 < amount <= balance:
                    balance -= amount
                    print(f"Successfully withdrew {amount:.2f} TK.")
                elif amount > balance:
                    print("Insufficient balance!")
                else:
                    print("Invalid withdrawal amount!")
            elif choice == 4:
                print("Thank you for using the ATM. Goodbye!")
                break
            else:
                print("Invalid choice! Please select between 1 and 4.")
    else:
        print("Incorrect PIN! Access Denied.")

if __name__ == "__main__":
    main()