#include <stdio.h>

int main()
{
    int pin = 1234;
    float balance = 5000.00;
    int choice;
    int amount;
    int entered_pin;

    printf("Welcome to the ATM machine.\n");

    // Loop until the correct PIN is entered
    do {
        printf("Please enter your PIN: ");
        scanf("%d", &entered_pin);
    } while (entered_pin != pin);

    // Display menu options
    printf("MENU\n");
    printf("1. Check balance\n");
    printf("2. Withdraw money\n");
    printf("3. Exit\n");

    // Prompt user for choice
    printf("Enter choice: ");
    scanf("%d", &choice);

    // Process user's choice
    switch (choice) {
        case 1:
            printf("Your balance is %.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if (amount > balance) {
                printf("Insufficient funds.\n");
            } else {
                balance -= amount;
                printf("Please take your cash.\n");
                printf("Your new balance is %.2f\n", balance);
            }
            break;
        case 3:
            printf("Thank you for using the ATM machine.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
