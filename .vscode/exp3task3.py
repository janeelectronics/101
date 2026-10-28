def main():
    age = int(input("Enter passenger age: "))
    ticket_type = int(input("Select Ticket Class:\n1. Economy\n2. Business\nEnter choice: "))

    base_price = 600.0 if ticket_type == 2 else 300.0

    if age < 5:
        final_price = 0.0
        print("Category: Toddler (100% Discount)")
    elif age <= 12:
        final_price = base_price * 0.5
        print("Category: Child (50% Discount)")
    elif age >= 60:
        final_price = base_price * 0.7
        print("Category: Senior Citizen (30% Discount)")
    else:
        final_price = base_price
        print("Category: Regular Adult")

    print(f"Final Ticket Price to Pay: {final_price:.2f} TK")

if __name__ == "__main__":
    main()